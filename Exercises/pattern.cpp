#include<iostream>
using namespace std;

/*
            1
            2 3
            3 4 5
            4 5 6 7 
            5 6 7 8 9

*/

int main()
{
    int n=5;
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << " " << i+j-1;
        }
        cout << endl;
    }
}