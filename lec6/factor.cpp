#include<iostream>
using namespace std;

int main()
{
    int i=1,n;

    cout << "Enter The Number: ";
    cin >> n;

    cout << "The Factors Of The Number: " << endl;
    while(i <= n)
    {
        
        if(n%i == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}