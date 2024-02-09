#include <iostream>
using namespace std;

int main()
{
    int choice,qty,bill = 0;
    float gst;

    cout << "Enter..." << endl;
    cout << "1) Pizza" << endl;
    cout << "2) Tacos" << endl;
    cout << "3) Burger" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << endl << "------------------------";
        cout << endl << "You Have Ordred Pizza..." << endl;
        cout << "------------------------" << endl;
        cout << endl << "Enter..." << endl;
        cout << "1) Margherita pizza Rs.850" << endl;
        cout << "2) Cheese Burst     Rs.950" << endl;
        cout << "3) Maxican pizza    Rs.780" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "Enter The Quantity: ";
        cin >> qty;

        switch (choice)
        {
        case 1:
            bill += 850 * qty;
            gst = 0.18 * bill;
            cout << endl << "------------------------------------" << endl;
            cout << "You Have Orederd Margherita pizza..." << endl;
            cout << "------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "------------------------------------" << endl;
            break;

        case 2:
            bill += 950 * qty;
            gst = 0.18 * bill;
            cout << endl << "---------------------------------" << endl;
            cout << "You Have Orederd Cheese Burst..." << endl;
            cout << "---------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "---------------------------------" << endl;
            break;
        case 3:
            bill += 780 * qty;
            gst = 0.18 * bill;
            cout << endl << "---------------------------------" << endl;
            cout << "You Have Orederd Maxican pizza..." << endl;
            cout << "---------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "----------------------------------" << endl;
            break;
        }
        break;


    case 2:
        cout << endl << "------------------------";
        cout << endl << "You Have Ordred Tacos..." << endl;
        cout << "------------------------" << endl;
        cout << endl << "Enter..." << endl;
        cout << "1) Grilled Corn Tacos     Rs.650" << endl;
        cout << "2) Jackfruit vegan Tacos  Rs.780" << endl;
        cout << "3) Butternut Squash Tacos Rs.850" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "Enter The Quantity: ";
        cin >> qty;

        switch (choice)
        {
        case 1:
            bill += 650 * qty;
            gst = 0.18 * bill;
            cout << endl << "--------------------------------------" << endl;
            cout << "You Have Orederd Grilled Corn Tacos..." << endl;
            cout << "--------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "------------------------------------" << endl;
            break;

        case 2:
            bill += 780 * qty;
            gst = 0.18 * bill;
            cout << endl << "-----------------------------------------" << endl;
            cout << "You Have Orederd Jackfruit vegan Tacos..." << endl;
            cout << "-----------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "---------------------------------" << endl;
            break;
        case 3:
            bill += 850 * qty;
            gst = 0.18 * bill;
            cout << endl << "------------------------------------------" << endl;
            cout << "You Have Orederd Butternut Squash Tacos..." << endl;
            cout << "------------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "----------------------------------" << endl;
            break;
        }
        break;


    case 3:
        cout << endl << "------------------------";
        cout << endl << "You Have Ordred Burger..." << endl;
        cout << "------------------------" << endl;
        cout << endl << "Enter..." << endl;
        cout << "1) HumBurger                 Rs.250" << endl;
        cout << "2) BaconBurger               Rs.149" << endl;
        cout << "3) Green Chile Cheeseburger  Rs.450" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "Enter The Quantity: ";
        cin >> qty;

        switch (choice)
        {
        case 1:
            bill += 250 * qty;
            gst = 0.18 * bill;
            cout << endl << "------------------------------------" << endl;
            cout << "You Have Orederd HumBurger..." << endl;
            cout << "------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "------------------------------------" << endl;
            break;

        case 2:
            bill += 149 * qty;
            gst = 0.18 * bill;
            cout << endl << "---------------------------------" << endl;
            cout << "You Have Orederd BaconBurger..." << endl;
            cout << "------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "---------------------------------" << endl;
            break;
        case 3:
            bill += 450 * qty;
            gst = 0.18 * bill;
            cout << endl << "--------------------------------------------" << endl;
            cout << "You Have Orederd Green Chile Cheeseburger..." << endl;
            cout << "--------------------------------------------" << endl;
            cout << "The Amount is: " << bill << endl;
            cout << "(INCLUDE 18% GST) The Total Amount is: " << gst + bill << endl;
            cout << "----------------------------------" << endl;
            break;
        }
        break;
    }
}