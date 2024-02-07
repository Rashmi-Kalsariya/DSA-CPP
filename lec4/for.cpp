#include<iostream>
using namespace std;

int main()
{
    int i=1;

    for(i=1; i<=10; i++)
    {
        if(i%2 == 1)
        {
            cout << i << endl;
        }
        i++;
    }
}