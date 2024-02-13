#include<iostream>
using namespace std;

int main()
{
    int i,j,s;

    cout << "Square Pattern" << endl;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;



    cout << "without space pattern" << endl;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;


    cout << "with space pattern" << endl;

    for(i=1; i<=5; i++)
    {
        for(s=1; s<=5-i; s++)
        {
            cout << " ";
        }
        for(j=1; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}