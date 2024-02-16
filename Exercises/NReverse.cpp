#include <iostream>
using namespace std;

/*
    WAP to Reverse Any Number with Algorithm
*/

int main()
{
    int n, rem, rev = 0;

    cout << "Enter Numbers: ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << "The Reverse Number is: " << rev;
}

/*

                        ---------Algorithm------

    step 1 : start
    step 2 : Take input of Number from User choice and store it in variable n.
    step 3 : intialize reverse=0 & remainder.
    step 4 : then the while loop is iterated until n!=0 is false,
    step 5 : Extract the last digit of number (rem=n%10).
    step 6 : Multiply reverse with 10 & add Remainder (reverse = reverse * 10 + remainder),
    step 7 : Reduce the original number(number = number/10).
    step 8 : keep doing this until original number becomes 0.
    step 9 : now print the rev number.
    step 10 : End.

*/