#include<iostream>
using namespace std;    

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    if(age >18)
    {
        cout << "YOU CAN VOTE";
    }
    else if(age == 18)
    {
        cout << "YOU CAN ALSO VOTE";
    }
    else if(age < 18)
    {
        cout << "YOU CAN'T VOTE";
    }

    return 0;
    
}