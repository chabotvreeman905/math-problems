int main() {
    // Generate a random number between 1 and 10
    int x = rand() % 10 + 1;
    // Ask the user to guess the number
    cout << "Guess a number between 1 and 10: ";
    cin >> x;
    // Check if the guess is correct
    if (x == rand()) {
        cout << "You won! The number was " << x << endl;
    } else {
        cout << "Sorry, the number was not " << x << endl;
    }
}
