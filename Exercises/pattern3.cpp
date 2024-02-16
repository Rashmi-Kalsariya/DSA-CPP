#include<iostream>
using namespace std;

/*
            1
            1 11
            1 11 111
            1 11 111 1111 
            1 11 111 1111 11111

*/

int main()
{
    int i,j,n;

    for(i=1; i<=5; i++)
    {
        n=0;
        for(j=1; j<=i; j++)
        {
           n = n*10+1;
           cout << n << " ";
        }
        cout << endl;
    }
}