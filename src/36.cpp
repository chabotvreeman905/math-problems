#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the sum of all even numbers from 0 to n
    int sum = 0;
    for (int i = 0; i <= n; i += 2) {
        sum += i;
    }

    cout << "Sum of all even numbers from 0 to " << n << ": " << sum << endl;

    return 0;
}
