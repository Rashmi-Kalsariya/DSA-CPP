#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;

    do
    {
        cout << endl
             << "Press 1 for Addition..." << endl;
        cout << "Press 2 for Subtraction..." << endl;
        cout << "Press 3 for Multiplication..." << endl;
        cout << "Press 4 for Division..." << endl;
        cout << "Press 5 for Exit..." << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl
                 << "Enter a & b: ";
            cin >> a >> b;
            cout << "The sum is: " << a + b << endl;
            break;

        case 2:
            cout << endl
                 << "Enter a & b: ";
            cin >> a >> b;
            cout << "The Subtraction is: " << a - b << endl;
            break;

        case 3:
            cout << endl
                 << "Enter a & b: ";
            cin >> a >> b;
            cout << "The Multiply is: " << a * b << endl;
            break;

        case 4:
            cout << endl
                 << "Enter a & b: ";
            cin >> a >> b;
            cout << "The Division is: " << a / b << endl;
            break;

        case 5:
            cout << "Press Any key to Exit...." << endl;
            break;

        default:
            cout << "INVALID CHOICE OF NUMBER!!" << endl;
            cout << "Choose Number From The Choices...!!" << endl;
        }
    } while (choice != 5);
}