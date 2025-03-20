// Write a program for nested switch case...

#include <iostream>
using namespace std;

int main()
{
    int opt1,opt2,opt3;

    cout << endl << "Please select your language...!!!" << endl << endl;

    cout << "1 - Gujrati.." << endl;
    cout << "2 - Hindi..." << endl;
    cout << "3 - English..." << endl << endl;

    cout << "Select Language from 1 to 3 - ";
    cin >> opt1;

    switch (opt1)
    {
        case 1:
            cout << endl << "Tame Gujarai bhasha select kari chhe..." << endl << endl;

            cout << "1 - Recharge plan check karava mate" << endl;
            cout << "2 - Activate Plan check karva mate" << endl << endl;

            cout << "Ek option select karo - ";
            cin >> opt2;

            switch (opt2)
            {
            case 1:
                cout << "Recharge plan niche mujab chhe..." << endl << endl;

                cout << "1 - 250rs. ma 28 divas recharge..." << endl;
                cout << "2 - 500rs. ma 56 divas recharge..." << endl;
                cout << "3 - 750rs. ma 84 divas recharge..." << endl << endl;

                cout << "Recharge plan select karo - ";
                cin >> opt3;

                switch (opt3)
                {
                    case 1:
                        cout << endl << "250rs recharge thay gayu..." << endl;
                        cout << "Dhanyavad..." << endl << endl;
                        break;

                    case 2:
                        cout << endl << "500rs recharge thay gayu..." << endl;
                        cout << "Dhanyavad..." << endl << endl;
                        break;

                    case 3:
                        cout << endl << "750rs recharge thay gayu..." << endl;
                        cout << "Dhanyavad..." << endl << endl;
                        break;

                    default :
                        cout << "Sacho option select karo..." << endl << endl;
                }
                break;

            case 2:
                cout << endl << "Atyare ek bhi recharge plan active nathi..." << endl << endl;
                break;
            
            default:
                cout << endl << endl << "Sacho option select karo...";
                break;
            }

            break;

        case 2:
            cout << endl << "Aapne Hindi bhasha select ki hain..." << endl << endl;

            cout << "1 - Recharge plan check karne ke liye" << endl;
            cout << "2 - Activate plan check karne ke liye" << endl << endl;

            cout << "Koi bhi ek option select kare - ";
            cin >> opt2;

            switch (opt2)
            {
            case 1:
                cout << "Recharge plan niche mutabik hain..." << endl << endl;

                cout << "1 - 250rs. mein 28 din ka recharge..." << endl;
                cout << "2 - 500rs. mein 56 din ka recharge..." << endl;
                cout << "3 - 750rs. mein 84 din ka recharge..." << endl << endl;

                cout << "Recharge plan select kijiye - ";
                cin >> opt3;

                switch (opt3)
                {
                    case 1:
                        cout << endl << "250rs recharge ho gaya..." << endl;
                        cout << "Apka shukriya..." << endl << endl;
                        break;

                    case 2:
                        cout << endl << "500rs recharge ho gaya..." << endl;
                        cout << "Apka shukriya..." << endl << endl;
                        break;

                    case 3:
                        cout << endl << "750rs recharge ho gaya..." << endl;
                        cout << "Apka shukriya..." << endl << endl;
                        break;

                    default :
                        cout << endl << "sahi option select karen..." << endl << endl;
                }
                break;
                break;

            case 2:
                cout << endl << "Abhi ek bhi recharge plan active nahi hain..." << endl << endl;
                break;
            
            default:
                cout << endl << endl << "sahi option select kare...";
                break;
            }

            break;    

        case 3:
            cout << endl << "You have selected English Language..." << endl << endl;

            cout << "1 - To check recharge plan" << endl;
            cout << "2 - To check activate recharge plan" << endl << endl;

            cout << endl << "Select any one option - ";
            cin >> opt2;

            switch (opt2)
            {
            case 1:
                cout << "Here is recharge plans..." << endl << endl;

                cout << "1 - 250rs. for 28 days..." << endl;
                cout << "2 - 500rs. for 56 days..." << endl;
                cout << "3 - 750rs. for 84 days..." << endl << endl;

                cout << "Select recharge plan - ";
                cin >> opt3;
                switch (opt3)
                {
                    case 1:
                        cout << endl << "250rs recharge done..." << endl;
                        cout << "Thank you..." << endl << endl;
                        break;

                    case 2:
                        cout << endl << "500rs recharge done..." << endl;
                        cout << "Thank you..." << endl << endl;
                        break;

                    case 3:
                        cout << endl << "750rs recharge done..." << endl;
                        cout << "Thank you..." << endl << endl;
                        break;

                    default :
                        cout << endl << "Select right option..." << endl << endl;
                }
                break;
                break;

            case 2:
                cout << endl << "Not any plan activated..." << endl << endl;
                break;
            
            default:
                cout << endl << endl << "Select right option...";
                break;
            }
            break;     

        default :
            cout << endl << "Please select right option from 1 - 3..." << endl << endl;

    }
}