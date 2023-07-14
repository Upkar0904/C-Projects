#include <iostream>

double convertFahrenheitToCelsius(double fahrenheit)
{
    double celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

double convertCelsiusToFahrenheit(double celsius)
{
    double fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int main()
{
    double temperature;
    int choice;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    std::cout << "Choose conversion:\n";
    std::cout << "1. Fahrenheit to Celsius\n";
    std::cout << "2. Celsius to Fahrenheit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    double convertedTemperature;

    switch (choice)
    {
    case 1:
        convertedTemperature = convertFahrenheitToCelsius(temperature);
        std::cout << "Converted temperature: " << convertedTemperature << " Celsius" << std::endl;
        break;
    case 2:
        convertedTemperature = convertCelsiusToFahrenheit(temperature);
        std::cout << "Converted temperature: " << convertedTemperature << " Fahrenheit" << std::endl;
        break;
    default:
        std::cout << "Invalid choice!" << std::endl;
        break;
    }

    return 0;
}