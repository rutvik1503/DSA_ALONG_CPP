#include <iostream>
using namespace std;

const int Max_Values = 10; // Maximum size of the stack.
int stack[Max_Values];

// Function to display CRUD menu options.
void CRUD_Option(int &choice)
{
    cout << endl
         << "OPTIONS..." << endl
         << endl;

    cout << "1 : PUSH OPERATION" << endl
         << "2 : PRINT STACK" << endl
         << "3 : POP OPERATION" << endl
         << "4 : PEEK OPERATION" << endl
         << "5 : EMPTY OPERATION" << endl
         << "6 : FULL OPERATION" << endl
         << "7 : SIZE OPERATION" << endl
         << "8 : END PROGRAM" << endl
         << endl;

    cout << "Select the right option: ";
    cin >> choice;
}

// Function to push elements.
void push(int &top)
{
    int n;

    cout << endl
         << "How many elements do you want to push? : ";
    cin >> n;
    cout << endl;

    // Check if pushing 'n' elements will exceed the stack limit
    if (n > Max_Values - top - 1)
    {
        cout << "ERROR: You cannot enter more than " << Max_Values - top - 1
             << " elements in the stack...!!!" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // Incrementing the top.
            top++;
            cout << "STACK[" << top << "] : ";
            cin >> stack[top];
        }

        cout << endl
             << "ELEMENTS ENTERED SUCCESSFULLY...!!!" << endl;
    }
}

// Function to print all stack elements.
void print(int &top)
{
    if (top == -1)
    {
        cout << endl
             << "ERROR: STACK IS EMPTY...!!! ENTER ELEMENTS FIRST..." << endl;
    }
    else
    {
        cout << endl
             << "STACK ELEMENTS..." << endl
             << endl;

        // Displaying all elements in the stack.
        for (int i = 0; i <= top; i++)
        {
            cout << "STACK[" << i << "] = " << stack[i] << endl;
        }
    }
}

// Function to pop elements from the stack.
void pop(int &top)
{
    int n;

    cout << endl
         << "How many elements do you want to pop? : ";
    cin >> n;
    cout << endl;

    // Check if we are trying to pop more elements than available.
    if (n > top + 1)
    {
        cout << "ERROR: You cannot delete more than " << top + 1 << " elements...!!!" << endl;
    }
    else
    {
        // Removing the specified number of elements.
        for (int i = 0; i < n; i++)
        {
            cout << "Popping: STACK[" << top << "] = " << stack[top] << endl;
            stack[top] = 0;
            // Decreament top.
            top--;
        }

        cout << endl
             << "ELEMENTS DELETED SUCCESSFULLY...!!!" << endl;
    }
}

// Function to view the top element in the stack,
void peek(int &top)
{
    if (top == -1)
    {
        cout << endl
             << "ERROR: STACK IS EMPTY...!!! ENTER ELEMENTS FIRST..." << endl;
    }
    else
    {
        cout << endl
             << "STACK[TOP] = " << stack[top] << endl;
    }
}

// Function to check if the stack is empty.
void empty(int &top)
{
    if (top == -1)
    {
        cout << endl
             << "YES, STACK IS EMPTY..." << endl;
    }
    else
    {
        cout << endl
             << "NO, STACK IS NOT EMPTY..." << endl;
    }
}

// Function to check if the stack is full.
void full(int &top)
{
    if (top == Max_Values - 1)
    {
        cout << endl
             << "YES, STACK IS FULL..." << endl;
    }
    else
    {
        cout << endl
             << "NO, STACK IS NOT FULL..." << endl;
        cout << "WE CAN ADD " << Max_Values << " ELEMENTS IN STACK. IN THIS STACK THERE IS " << top + 1 << " ELEMENTS IN STACK." << endl;
    }
}

// Function to display the current size of the stack.
void size(int &top)
{
    if (top == -1)
    {
        cout << endl
             << "STACK IS EMPTY..." << endl;
    }
    else
    {
        cout << endl
             << "SIZE OF STACK IS " << top + 1 << endl;
    }
}

int main()
{
    // Initialize stack as empty (-1).
    int top = -1;
    int choice;

    // Menu-driven CRUD operations loop.
    do
    {
        CRUD_Option(choice); // Display menu options.

        switch (choice)
        {
        case 1: // Push elements.
            push(top);
            break;

        case 2: // Print stack.
            print(top);
            break;

        case 3: // Pop elements.
            pop(top);
            break;

        case 4: // View top element.
            peek(top);
            break;

        case 5: // Check if stack is empty.
            empty(top);
            break;

        case 6: // Check if stack is full.
            full(top);
            break;

        case 7: // Display stack size.
            size(top);
            break;

        case 8:
            cout << endl
                 << "PROGRAM ENDED SUCCESSFULLY..." << endl;
            break;

        default:
            cout << endl
                 << "ERROR: CHOOSE A VALID OPTION (FROM 1 - 8)...!!!" << endl;
            break;
        }

    } while (choice != 8);

    cout << endl;
}
