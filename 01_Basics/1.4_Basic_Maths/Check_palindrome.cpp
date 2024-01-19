/* Q. Given a number check if it is a palindrome. */
#include <iostream>
using namespace std;
int main() {
    int n = 4321234;  // is a palindrome
    int num = n;
    int reverse;

    while(num!=0) {
        reverse = (reverse*10) + (num%10);
        num = num/10;
    }
    if(n == reverse) cout<<n<<" is a palindrome.";
    else cout<<n<<" is not a palindrome.";

    return 0;
}