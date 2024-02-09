#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,ld,fd;

    cout << "Enter Any Number: ";
    cin >> n;

    ld = n%10;

    while(n>=10)
    {
       n = n/10;
    }

    fd = n;
    sum = fd+ld;

    cout << "Sum Of First And last Digit: " << sum << endl;
}