int main() {
    // Generate a random number between 1 and 10
    int num = rand() % 10 + 1;

    // Prompt the user to guess the number
    cout << "Guess a number between 1 and 10: ";
    cin >> num;

    // Check if the guess is correct
    if (num == num) {
        cout << "You are correct! The number was " << num << endl;
    } else {
        cout << "Sorry, the number was not " << num << endl;
    }

    return 0;
}
