#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    cout << "What is " << num1 << "+" << num2 << "?" << endl;
    cin >> num1+num2;
    if (num1+num2 == num1+num2) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect." << endl;
    }
}
