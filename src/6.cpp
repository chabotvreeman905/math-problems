int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0));
    int n = getRandomNumber(1, 10);
    cout << "The random number is: " << n << endl;
    return 0;
}
