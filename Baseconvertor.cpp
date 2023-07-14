#include <iostream>
#include <string>
#include <cmath>

int binaryToDecimal(const std::string &binary)
{
    int decimal = 0;
    int size = binary.size();

    for (int i = 0; i < size; ++i)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, size - 1 - i);
        }
    }

    return decimal;
}

std::string decimalToBinary(int decimal)
{
    if (decimal == 0)
    {
        return "0";
    }

    std::string binary;

    while (decimal > 0)
    {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    return binary;
}

int main()
{
    int choice;
    std::string binary;
    int decimal;

    while (true)
    {
        std::cout << "Menu:\n";
        std::cout << "1. Binary to Decimal\n";
        std::cout << "2. Decimal to Binary\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter binary number: ";
            std::cin >> binary;
            decimal = binaryToDecimal(binary);
            std::cout << "Decimal number: " << decimal << std::endl;
            break;
        case 2:
            std::cout << "Enter decimal number: ";
            std::cin >> decimal;
            binary = decimalToBinary(decimal);
            std::cout << "Binary number: " << binary << std::endl;
            break;
        case 3:
            std::cout << "Exiting..." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
        }
    }

    return 0;
}