//  Write a c++ program for operations in the QUEUE... // enqueue dequeue front rear display empty  full size

#include <iostream>
using namespace std;

const int MAX = 10;
int que[MAX];

void opt(int &choice) // For print options and take choice from user
{
    cout << endl
         << "OPTIONS..." << endl
         << endl;

    cout << "1 : ENQUEUE ELEMENT" << endl
         << "2 : DISPLAY QUEUE" << endl
         << "3 : DEQUEUE ELEMENT" << endl
         << "4 : FRONT ELEMENT OF QUEUE" << endl
         << "5 : REAR ELEMENT QUEUE" << endl
         << "6 : IS QUEUE EMPTY ?" << endl
         << "7 : IS QUEUE FULL ?" << endl
         << "8 : SIZE OF QUEUE" << endl
         << "9 : END PROGRAM" << endl
         << endl;

    cout << "Choose right option : ";
    cin >> choice;
}

void enqueue_data(int &rear) // For enqueue data.
{
    if (rear == MAX - 1)
    {
        cout << endl << "ERROR : QUEUE IS FULL YOU CAN NOT ENQUEUE DATA...!!!" << endl;
    }    

    int n;

    cout << endl
         << "How many element do you want to ENQUEUE ? : ";
    cin >> n;

    if (n > MAX - rear - 1)
    {
        cout << endl
             << "ERROR : YOU CAN NOT ENTER MORE THEN " << MAX - rear - 1 << " ELEMENTS...!!!" << endl;
    }

    else
    {
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            rear++;
            cout << "Queue[" << rear << "] : ";
            cin >> que[rear];
        }
    }
}

void display_queue(int &rear) // For display queue.
{
    if (rear == -1)
    {
        cout << endl
             << "ERROR : QUEUE IS EMPTY...!!! ENQUEUE ELEMENT FIRST..." << endl;
    }

    else
    {
        cout << endl
             << "ELEMENTS OF QUEUE..." << endl
             << endl;

        for (int i = 0; i <= rear; i++)
        {
            cout << "QUEUE[" << i << "] = " << ::que[i] << endl;
        }
    }
}

void dequeue_data(int &front, int &rear) // For dequeue data.
{
    int n;

    if (rear == -1)
    {
        cout << endl
             << "ERROR : THERE IS NO ELEMENTS TO DEQUEUE...!!!" << endl;
    }

    else
    {
        cout << endl
             << "How many element do you want to DEQUEUE? : ";
        cin >> n;

        if (n > rear + 1)
        {
            cout << endl
                 << "ERROR : YOU CAN NOT DEQUEUE MORE THEN " << rear + 1 << " ELEMENT...!!!" << endl;
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                front++;

                ::que[front] = NULL;

                for (int i = 0; i <= rear; i++)
                {
                    ::que[i] = ::que[i + 1];
                }

                ::que[rear] = NULL;

                rear--;

                front--;

                cout << endl << "ELEMENT DEQUEUE SUCESSFULLY..." << endl;
            }
        }
    }
}

void front_data(int &rear) // For print front of queue.
{
    if (rear == -1)
    {
        cout << endl << "ERROR : THERE IS NO ELEMENT IN THE QUEUE...!!! ENTER ELEMENT FIRST..." << endl;
    }

    else
    {
        cout << endl << "QUEUE[FRONT] = " << ::que[0] << endl;
    }
}

void rear_data(int &rear) // For print rear of queue.
{
    if (rear == -1)
    {
        cout << endl << "ERROR : THERE IS NO ELEMENT IN THE QUEUE...!!! ENTER ELEMENT FIRST..." << endl;
    }

    else
    {
        cout << endl << "QUEUE[REAR] = " << ::que[rear] << endl;
    }
}

void empty_queue(int &rear) // For check queue id empty or not.
{
    if (rear == -1)     
    {
        cout << endl << "YES, QUEUE IS EMPTY..." << endl;
    }

    else
    {
        cout << endl << "NO, QUEUE IS NOT EMPTY THERE IS " << rear + 1 << " ELEMENTS IN QUEUE..." << endl;
    }    
}

void full_queue(int &rear) // For check queue id full or not.
{
    if (rear == MAX - 1)     
    {
        cout << endl << "YES, QUEUE IS FULL..." << endl;
    }

    else
    {
        cout << endl << "NO, QUEUE IS NOT FULL WE CAN ENQUEUE " << MAX - rear - 1 << " ELEMENTS IN QUEUE..." << endl;
    }    
}

void size_queue(int &rear) // For print size of queue.
{
    if (rear == -1)     
    {
        cout << endl << "ERROR : QUEUE IS EMPTY..!!!" << endl;
    }

    else
    {
        cout << endl << "SIZE OF QUEUE IS " << rear + 1 << "." << endl;
    }
}

int main()
{
    int front = -1, rear = -1;
    int choice;

    do
    {
        opt(choice);

        switch (choice)
        {
        case 1: // For enqueue elements.
            enqueue_data(rear);
            break;

        case 2: // For display queue.
            display_queue(rear);
            break;

        case 3: // For dequeue elements.
            dequeue_data(front, rear);
            break;

        case 4: // For print first elements of queue.
            front_data(rear);
            break;

        case 5: // For print rear element of queue.
            rear_data(rear);
            break;

        case 6: // For check queue is empty or not.
            empty_queue(rear);
            break;

        case 7: // For check queue is full or not.
            full_queue(rear);
            break;

        case 8: // For check size of queue.
            size_queue(rear);
            break;

        case 9: // For end program.
            cout << endl << "PROGRAM ENDED SUCCESSFULLY...!!!" << endl << endl;
            break;

        default:
            cout << endl
                 << "ERROR : INVALID OPTION..!!! CHOOSE FROM 1 TO 9..." << endl;
            break;
        }
    } while (choice != 9);
}