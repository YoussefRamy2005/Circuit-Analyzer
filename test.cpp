#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str1, str2;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    cout << "Integer: " << n << endl;
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

    return 0;
}
