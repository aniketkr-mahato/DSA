/* Q. Given a number 'n' reverse the number and print it.*/
#include <iostream>
using namespace std;
int main() {
    int n = 85692;
    int num = n;
    int reverse = 0;

    while(num != 0) {
        reverse = (reverse * 10) + (num % 10);
        num = num/10;
    }
    cout<<"The reverse of the number "<< n <<" is "<<reverse;
    return 0;
}