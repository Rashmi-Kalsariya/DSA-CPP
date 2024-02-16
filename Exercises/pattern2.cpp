#include<iostream>
using namespace std;

/*
            1
            1 2
            1 2 3
            1 2 3 4 
            1 2 3 4 5

*/

int main()
{
    int i,n=0;

    for(i=1; i<=5; i++)
    {
            n=n*10+i;
            cout << n << endl;
    }
        cout << endl;
}
