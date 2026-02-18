//write a program to check the prime number
#include <iostream>
using namespace std;

int main() {
    int n, i, count = 0;

    cout << "Enter a number: ";
    cin >> n;
// if value is 0,1 then the is not  a prime number
    if (n <= 1) {
        cout << n << " is not a prime number.";
    }
    else {
        for (i = 2; i < n; i++) // suppose the number is 6 (2<6)  conition true
		{
            if (n % i == 0) //  move next (6 % 2)==0 condition is ture 
			{
                count++; /// count ++ is 1 condition is ture then again for loop run with i increment 3 until loop run divide by itself
            }
        }

        if (count == 0) // if under the for loop if condition is false then the given number is the prime number ( prime number is divide by 1, or itself) 
		{
            cout << n << " is a prime number.";
        }
        else {
            cout << n << " is not a prime number.";
        }
    }

    return 0;
}

