#include <iostream>
using namespace std;

void pattern_01()
{
    int row, col, n = 5;

    cout << endl;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_02()
{
    int row, col, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << "  ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_03()
{
    int row, col, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_04()
{
    int row, col, n;

    cout << endl;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_05()
{
    int row, col, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << "  ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;
}

void pattern_06()
{
    int row, col, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;
}

void pattern_07()
{
    int row, col, space, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = 1; col <= n - 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;
}

void pattern_08()
{
    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int row = 2; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;
}

void pattern_09()
{
    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int row = 2; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_10()
{
    int row, col, n = 6;

    cout << endl;

    // loop for row
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == 2 && col == 2)
            {
                cout << "  ";
            }
            else if (row == 2 && col == 3)
            {
                cout << "  ";
            }
            else if (row == 2 && col == 4)
            {
                cout << "  ";
            }
            else if (row == 2 && col == 5)
            {
                cout << "  ";
            }
            else if (row == 3 && col == 2)
            {
                cout << "  ";
            }
            else if (row == 3 && col == 3)
            {
                cout << "  ";
            }
            else if (row == 3 && col == 4)
            {
                cout << "  ";
            }
            else if (row == 3 && col == 5)
            {
                cout << "  ";
            }
            else if (row == 4 && col == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && col == 3)
            {
                cout << "  ";
            }
            else if (row == 4 && col == 4)
            {
                cout << "  ";
            }
            else if (row == 4 && col == 5)
            {
                cout << "  ";
            }
            else if (row == 5 && col == 2)
            {
                cout << "  ";
            }
            else if (row == 5 && col == 3)
            {
                cout << "  ";
            }
            else if (row == 5 && col == 4)
            {
                cout << "  ";
            }
            else if (row == 5 && col == 5)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_11()
{
    int row, col, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            if (row == 3 && i == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && i == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && i == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_12()
{
    int row, col, n = 5;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            if (row == 2 && col == 3)
            {
                cout << "  ";
            }
            else if (row == 2 && col == 4)
            {
                cout << "  ";
            }
            else if (row == 3 && col == 4)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    cout << endl;
}

void pattern_13()
{
    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            if (row == 3 && i == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && i == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && i == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int row = 2; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            if (row == 2 && col == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    cout << endl;
}

void pattern_14()
{
    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            if (row == 2 && col == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    for (int row = 2; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            if (row == 3 && i == 2)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_15()
{
    int row, col, n = 4, count = 1;

    cout << endl;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << endl;
}

void pattern_16()
{
    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            if (row == 3 && i == 2)
            {
                cout << "2 ";
            }
            else if (row == 4 && i == 2)
            {
                cout << "3 ";
            }
            else if (row == 4 && i == 3)
            {
                cout << "3 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

int main()
{
    int n;

    cout << endl;
        
    do
    {
        cout << "Enter the pattern number that you want to print : ";
        cin >> n;

        switch (n)
        {
        case 1:
            pattern_01();
            break;

        case 2:
            pattern_02();
            break;

        case 3:
            pattern_03();
            break;

        case 4:
            pattern_04();
            break;

        case 5:
            pattern_05();
            break;

        case 6:
            pattern_06();
            break;

        case 7:
            pattern_07();
            break;

        case 8:
            pattern_08();
            break;

        case 9:
            pattern_09();
            break;

        case 10:
            pattern_10();
            break;

        case 11:
            pattern_11();
            break;

        case 12:
            pattern_12();
            break;

        case 13:
            pattern_13();
            break;

        case 14:
            pattern_14();
            break;

        case 15:
            pattern_15();
            break;

        case 16:
            pattern_16();
            break;

        case 17:
            cout << endl << "Program Ended..." << endl << endl ;
            break;

        default:
            cout << "Enter right option from 1 to 16..." << endl
                 << endl;
            break;
        }
    } while (n != 17);
}