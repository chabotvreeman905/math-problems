#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1 = rand() % 10 + 1; // generate a random number between 1 and 10
    int num2 = rand() % 10 + 1; // generate another random number between 1 and 10

    cout << "What is " << num1 << " + " << num2 << "?" << endl;

    int answer;
    cin >> answer;

    if (answer == num1 + num2) {
        cout << "Correct! The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << "." << endl;
    } else {
        cout << "Incorrect. The correct answer is " << num1 + num2 << "." << endl;
    }

    return 0;
}
