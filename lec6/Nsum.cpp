#include<iostream>
using namespace std;

int main()
{
    int i=1,n,sum=0;

    cout << "Enter The Number: ";
    cin >> n;

    while(i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "The Sum Of All Numbers: " << sum;
}