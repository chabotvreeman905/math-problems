#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            if (i == (n - i)) {
                cout << "Fizz";
            } else {
                cout << "Buzz";
            }
        }
    } else {
        cout << n;
    }
    
    return 0;
}
