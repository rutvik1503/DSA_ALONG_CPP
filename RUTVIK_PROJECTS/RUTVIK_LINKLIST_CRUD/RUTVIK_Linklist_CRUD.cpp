#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int opt1(int &c1) // for print the CRUD options.
{
    cout << endl
         << "OPTIONS FOR THE CRUD OPERATION IN LINKLIST" << endl
         << endl;

    cout << "1 : INSERTION" << endl
         << "2 : READ" << endl
         << "3 : UPDATE" << endl
         << "4 : DELETE" << endl
         << "5 : END PROGRAM" << endl
         << endl;

    cout << "Choose right option : ";
    cin >> c1;
}

int opt2(int &c2) // for print INSERTION options.
{
    cout << endl
         << "OPTIONS FOR THE INSERTION IN LINKLIST" << endl
         << endl;

    cout << "1 : INSERT AT BEGINING" << endl
         << "2 : INSERT AT ENDING" << endl
         << "3 : INSERT AT ANY POSITION" << endl
         << endl;

    cout << "Choose right option : ";
    cin >> c2;
}

int at_begin(node *&head, int &size) // for insert at the bigining.
{
    node *ptr = new node();

    cout << endl
         << "Enter the value that you want to insert : ";
    cin >> ptr->data;

    ptr->next = head;

    head = ptr;

    size++;

    cout << endl
         << "VALUE INSERTED SUCCESSFULLY...!!!" << endl;
}

int at_end(node *&head, int &size) // for insert at the end.
{
    node *ptr = new node();

    cout << endl
         << "Enter the value that you want to insert : ";
    cin >> ptr->data;

    ptr->next = NULL;

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;

    size++;

    cout << endl
         << "VALUE INSERTED SUCCESSFULLY...!!!" << endl;
}

int at_any_position(node *&head, int &size) // for insert at any position.
{
    node *ptr = new node();
    node *temp;

    int index;

    cout << endl
         << "Enter the position where you want to insert : ";
    cin >> index;

    if (index > 0 && index <= size + 1)
    {
        temp = head;

        for (int i = 1; i < index - 1; i++)
        {
            temp = temp->next;
        }

        cout << endl
             << "Enter the value that you want to insert : ";
        cin >> ptr->data;

        ptr->next = temp->next;

        temp->next = ptr;

        cout << endl
             << "VALUE INSERTED SUCCESSFULLY...!!!" << endl;

        size++;
    }

    else
    {
        cout << endl
             << "ERROR : INVALID POSITION";
    }
}

int read_list(node *head, int &size) // for read list.
{
    if (size == 0)
    {
        cout << endl
             << "ERROR : THERE IS NO NODES IN LIST INSERT NODE FIRST" << endl;
    }

    else
    {
        node *temp = new node();

        temp = head;

        while (temp != NULL)
        {
            cout << endl
                 << temp->data << " : " << temp->next << endl;

            temp = temp->next;
        }
    }
}

int update_list(node *&head, int &size) // for update list
{
    node *temp;
    int index;

    temp = head;

    cout << endl
         << "Enter the position where you want to update list : ";
    cin >> index;

    if (index < 1 || index > size)
    {
        cout << endl
             << "ERROR : IVALID POSITION";
    }

    else
    {
        for (int i = 1; i < index; i++)
        {
            temp = temp->next;
        }

        cout << endl
             << "Enter the value : ";
        cin >> temp->data;

        cout << endl
             << "VALUE UPDATED SUCCESSFULLY...!!!" << endl;
    }
}

int opt3(int &c3) // for print DELETION options.
{
    cout << endl
         << "OPTIONS FOR THE DELETION IN LINKLIST" << endl
         << endl;

    cout << "1 : DELETE AT BEGINING" << endl
         << "2 : DELETE AT ENDING" << endl
         << "3 : DELETE AT ANY POSITION" << endl
         << endl;

    cout << "Choose right option : ";
    cin >> c3;
}

int dlt_begin(node *&head, int &size) // for delete begin.
{
    node *temp;

    temp = head;

    head = head->next;

    delete temp;

    temp = NULL;

    cout << endl
         << "VALUE DELETED SUCCESSFULLY...!!!" << endl;

    size--;
}

int dlt_end(node *&head, int &size)
{
    node *temp;

    temp = head;

    for (int i = 1; i < size - 1; i++)
    {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;

    cout << endl
         << "VALUE DELETED SUCCESSFULLY...!!!" << endl;

    size--;
}

int dlt_any_position(node *&head, int &size)
{
    node *prev;
    node *cur;
    int index;

    prev = head;
    cur = head;

    cout << endl
         << "Enter the position where you want to delete : ";
    cin >> index;

    if (index < 1 || index > size)
    {
        cout << endl
             << "ERROR : IVALID POSITION";
    }

    else
    {
        if (index == 1)
        {
            dlt_begin(head, size);
        }

        for (int j = 1; j < index - 1; j++)
        {
            prev = prev->next;
        }
        for (int i = 1; i < index; i++)
        {
            cur = cur->next;
        }

        prev->next = cur->next;

        cur = NULL;

        delete cur;

        size--;

        cout << endl
             << "VALUE DELETED SUCCESSFULLY...!!!" << endl;
    }
}

int main()
{
    int size = 3, c1, c2, c3;

    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    node *head = n1;
    node *ptr = new node();

    do
    {
        opt1(c1);

        switch (c1)
        {
        case 1:
            opt2(c2);

            if (c2 == 1)
            {
                at_begin(head, size);
            }

            else if (c2 == 2)
            {
                at_end(head, size);
            }

            else if (c2 == 3)
            {
                at_any_position(head, size);
            }

            else
            {
                cout << endl
                     << "ERROR : CHOOSE RIGHT OPTION." << endl
                     << endl;
            }

            break;

        case 2:
            read_list(head, size);

            break;

        case 3:
            update_list(head, size);

            break;

        case 4:
            opt3(c3);

            if (c3 == 1)
            {
                dlt_begin(head, size);
            }

            else if (c3 == 2)
            {
                dlt_end(head, size);
            }

            else if (c3 == 3)
            {
                dlt_any_position(head, size);
            }

        default:
            break;
        }
    } while (c1 != 5);
}