#include<iostream>
using namespace std;

int main()
{
    char i,j;

    cout << "Character Pattern" << endl;

    for(i='A'; i<='E'; i++)
    {
        for(j='A'; j<=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;


     cout << "Character Pattern" << endl;

    char r='A';
    
    for(i='A'; i<='E'; i++)
    {
        for(j='A'; j<=i; j++)
        {
            cout << r++;
        }
        cout << endl;
    }
    cout << endl;
}
