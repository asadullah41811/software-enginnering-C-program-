//  write a program to check whether a number is a palindrome 
#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0, digit;

 
    cout << "Enter a positive integer: ";
    cin >> number;

   
    original = number; // orginal =number // 121 =121

  
    if (number < 0) {
        cout << original << " is not a palindrome (negative numbers are not palindromes).\n";
        return 0;  
    }
    // if negative value the program exit

    
    while (number > 0) {
        digit = number % 10;        // digit = 121 % 10 = 1  
        reversed = reversed * 10 + digit; // 0= 0 * 10 +1=1
        number /= 10;              // number = number /10; // 121 = 121 /10 = 12   
    }
    // three times while loop run then revserved value and original value is same;// value is panlidrome.

   
    if (original == reversed) {
        cout << original << " is a palindrome.\n";
    } else {
        cout << original << " is not a palindrome.\n";
    }

    return 0;
}

