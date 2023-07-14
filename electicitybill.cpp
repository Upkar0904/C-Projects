
#include <iostream>

using namespace std;

int main()
{
    // Constants for tariff rates
    const double UNIT_RATE_1 = 5.50;
    const double UNIT_RATE_2 = 6.50;
    const double UNIT_RATE_3 = 7.50;
    const double UNIT_RATE_4 = 8.50;

    // Variables for user input
    int previousReading, currentReading;
    double totalUnits, totalAmount;

    // Input previous and current meter readings
    cout << "Enter previous meter reading: ";
    cin >> previousReading;

    cout << "Enter current meter reading: ";
    cin >> currentReading;

    // Calculate total units consumed
    totalUnits = currentReading - previousReading;

    // Calculate total bill amount based on units consumed
    if (totalUnits <= 100)
    {
        totalAmount = totalUnits * UNIT_RATE_1;
    }
    else if (totalUnits <= 200)
    {
        totalAmount = 100 * UNIT_RATE_1 + (totalUnits - 100) * UNIT_RATE_2;
    }
    else if (totalUnits <= 300)
    {
        totalAmount = 100 * UNIT_RATE_1 + 100 * UNIT_RATE_2 + (totalUnits - 200) * UNIT_RATE_3;
    }
    else
    {
        totalAmount = 100 * UNIT_RATE_1 + 100 * UNIT_RATE_2 + 100 * UNIT_RATE_3 + (totalUnits - 300) * UNIT_RATE_4;
    }

    // Display the electricity bill
    cout << "Total units consumed: " << totalUnits << endl;
    cout << "Total amount to be paid: " << totalAmount << endl;

    return 0;
}
