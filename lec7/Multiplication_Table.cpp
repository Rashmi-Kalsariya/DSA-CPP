#include<iostream>
using namespace std;

int main()
{
    int i,n;

    cout << "Enter Any Number: ";
    cin >> n;

    i=1;

    while(i<=10)
    {
        cout << n << "x" << i << "=" << n*i << endl;
        i++;
    }
}