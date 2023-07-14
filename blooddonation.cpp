#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a blood donor
struct Donor
{
    string name;
    string bloodType;
    int age;
};

// Structure to represent a blood receiver
struct Receiver
{
    string name;
    string bloodType;
    int age;
};

// Admin login credentials
const string ADMIN_USERNAME = "upkar";
const string ADMIN_PASSWORD = "chaudhary";

int main()
{
    vector<Donor> donors;       // Vector to store the list of donors
    vector<Receiver> receivers; // Vector to store the list of receivers

    int choice;
    bool loggedIn = false;
    string username, password;

    do
    {
        cout << "Blood Donation Management System" << endl;

        if (!loggedIn)
        {
            // Login section for admin
            cout << "Admin Login" << endl;
            cout << "Username: ";
            cin >> username;

            cout << "Password: ";
            cin >> password;

            if (username == ADMIN_USERNAME && password == ADMIN_PASSWORD)
            {
                loggedIn = true;
                cout << "Login Successful!" << endl;
            }
            else
            {
                cout << "Invalid username or password. Please try again." << endl;
                continue;
            }
        }

        // Display menu options after successful login
        cout << "1. Add Donor" << endl;
        cout << "2. Add Receiver" << endl;
        cout << "3. View Donors" << endl;
        cout << "4. View Receivers" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Donor newDonor;
            cin.ignore();

            // Input donor details
            cout << "Enter donor name: ";
            getline(cin, newDonor.name);

            cout << "Enter donor blood type: ";
            getline(cin, newDonor.bloodType);

            cout << "Enter donor age: ";
            cin >> newDonor.age;

            // Add the donor to the list
            donors.push_back(newDonor);

            cout << "Donor added successfully!" << endl;
            break;
        }
        case 2:
        {
            Receiver newReceiver;
            cin.ignore();

            // Input receiver details
            cout << "Enter receiver name: ";
            getline(cin, newReceiver.name);

            cout << "Enter receiver blood type: ";
            getline(cin, newReceiver.bloodType);

            cout << "Enter receiver age: ";
            cin >> newReceiver.age;

            // Add the receiver to the list
            receivers.push_back(newReceiver);

            cout << "Receiver added successfully!" << endl;
            break;
        }
        case 3:
        {
            if (donors.empty())
            {
                cout << "No donors found." << endl;
            }
            else
            {
                cout << "List of Donors:" << endl;
                for (const auto &donor : donors)
                {
                    cout << "Name: " << donor.name << endl;
                    cout << "Blood Type: " << donor.bloodType << endl;
                    cout << "Age: " << donor.age << endl;
                    cout << "---------------------------" << endl;
                }
            }
            break;
        }
        case 4:
        {
            if (receivers.empty())
            {
                cout << "No receivers found." << endl;
            }
            else
            {
                cout << "List of Receivers:" << endl;
                for (const auto &receiver : receivers)
                {
                    cout << "Name: " << receiver.name << endl;
                    cout << "Blood Type: " << receiver.bloodType << endl;
                    cout << "Age: " << receiver.age << endl;
                    cout << "---------------------------" << endl;
                }
            }
            break;
        }
        case 5:
            cout << "Exiting the program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}
