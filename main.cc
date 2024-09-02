#include <iostream>
#include <string>
#include <random> // Include the random library for better random number generation

using namespace std;

string getPassword(int length) {
    if (length <= 0) {
        return "";  // Return an empty string if the length is invalid
    }

    static const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int charSize = characters.size();

    // Random number generation setup
    static random_device rd;  
    static mt19937 generator(rd());  // Mersenne Twister random number engine
    uniform_int_distribution<> distribution(0, charSize - 1);  // Distribution range for indices

    string password;
    password.reserve(length);  // Reserve memory for the password string

    for (int i = 0; i < length; ++i) {
        int randomIndex = distribution(generator);  // Generate a random index
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int length;
    cout << "Enter the length of the password: ";
    cin >> length;

    if (cin.fail() || length <= 0) {
        cout << "Invalid input. Please enter a positive integer for the password length." << endl;
        return 1;  
    }

    string password = getPassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
