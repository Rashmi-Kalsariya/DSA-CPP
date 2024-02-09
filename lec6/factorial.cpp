#include<iostream>
using namespace std;

int main()
{
    int i,n,fact=1;

    cout << "Enter The Number: ";
    cin >> n;

    i=n;

    while(i >= 1)
    {
        fact = fact * i;
        i--;
    }

    cout << "The Factorial Of Number: " << fact;
}