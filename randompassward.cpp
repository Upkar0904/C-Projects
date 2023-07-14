#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string generateRandomPassword(int length)
{
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    const int charCount = characters.length();

    std::string password;
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < length; ++i)
    {
        int randomIndex = rand() % charCount;
        password += characters[randomIndex];
    }

    return password;
}

int main()
{
    int passwordLength;
    std::cout << "Enter the length of the password: ";
    std::cin >> passwordLength;

    std::string password = generateRandomPassword(passwordLength);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}