#include <iostream> 
using namespace std;

string intToBinary(long long n) {
    if (n == 0) return "0";
    
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
}

bool isPalindrome(string str, int start, int end) {
    // base case 
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    } else {
        return isPalindrome(str, start + 1, end - 1);
    }
}

bool checkPalindrome(long long N) {
    string str = intToBinary(N);
    cout << "Binary representation: " << str << endl;

    return isPalindrome(str, 0, str.length() - 1);
}

int main() {
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    if (checkPalindrome(number)) {
        cout << "The binary representation is a palindrome." << endl;
    } else {
        cout << "The binary representation is not a palindrome." << endl;
    }

    return 0;
}
