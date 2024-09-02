#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

string getPassword(int length) {
    std::string Password = "";
    std::string Characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKJLMNOPQRSTUVWXYZ1234567890";
    int charSize = Characters.size();
    srand(time(0));
    int randomIndex;
    for (int i = 0; i<length; i++) {
        randomIndex = rand() % charSize;
        Password = Password + Characters[randomIndex];
    }
    return Password;
}

int main() {
    int length;
    std::cout << "Enter the length of the password: ";
    std::cin >>length;
    std::string password = getPassword(length);
    std::cout << "Generated Password: " << password;







    

   return 0;
}