#include <iostream>
#include <string>
using namespace std;

int main() {
    string equation = "2 + 3";
    cout << equation << endl;
    int result = 0;
    for (char c : equation) {
        if (c == '+') {
            result++;
        }
        else if (c == '-') {
            result--;
        }
        else if (c == '*') {
            result *= 2;
        }
    }
    cout << "Result: " << result << endl;
    return 0;
}
