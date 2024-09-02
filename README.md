# Password Generator

This is a simple C++ program to generate a random password of a specified length using a mix of lowercase letters, uppercase letters, and digits.

## Features

- Generates a password of user-defined length.
- Uses modern C++ random number generation for better randomness.
- Validates user input to ensure the password length is a positive integer.

## Requirements

- C++11 or higher is required to compile this program.

## Usage

1. Compile the program using a C++ compiler. For example:
```console
g++ main.cc -o password_generator 
```
2. Run the executable:
```console
./password_generator 
```
3. Enter the desired length of the password when prompted.

## Example

```console
User@Github:~$ ./password_generator 
Enter the length of the password: 12
Generated Password: BWlHLkovc9TP
```

## Improvements
The program has been improved to use modern C++ features and best practices:

- **Random Number Generation:** Replaced the use of `rand()` and `srand()` with `std::random_device` and `std::mt19937` for better randomness.
- **Input Validation:** Added checks to ensure the user provides a valid password length.
- **Efficiency Enhancements:** Reserved memory for the password string to reduce the number of memory allocations.
- **Bug Fixes:** Corrected the character set to include all uppercase and lowercase letters and digits.

## To-Do 

Here are some potential future improvements to enhance the functionality and usability of the password generator:

- [ ] **Add Special Characters:** Include special characters (e.g., `!@#$%^&*()`) in the password generation to increase password strength.
- [ ] **Command-Line Arguments:** Allow users to specify the password length and character types (e.g., letters, numbers, special characters) via command-line arguments.
- [ ] **Password Strength Evaluation:** Implement a feature to evaluate and display the strength of the generated password.
- [ ] **Multiple Passwords:** Provide an option to generate multiple passwords at once.
- [ ] **Unit Tests:** Add unit tests to ensure the reliability and correctness of the password generation function.
- [ ] **Cross-Platform Build Scripts:** Create build scripts (e.g., Makefile or CMake) to simplify compiling on different platforms.