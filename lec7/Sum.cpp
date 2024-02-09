#include<iostream>
using namespace std;

int main()
{
    int sum=0,n,ld;

    cout << "Enter Any Number: ";
    cin >> n;

    while(n>0)
    {
       ld = n%10;
       sum = sum + ld;
       n = n/10;
    }

    cout << "Sum Of All Digit: " << sum << endl;
}