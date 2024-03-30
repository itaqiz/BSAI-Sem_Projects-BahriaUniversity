    // ** Muhammad Taqui **
    // ** CP Semester Project - Bus Reservation System (Basic) **
    // ** Deadline: 4 July 2022-12:00 AM **

#include <iostream>
using namespace std;

int main() {
    char ch;
    int bus, rent;

    cout << "Welcome to Saviour Travels online system" << endl;
    cout << "To reserve your ticket kindly enter required details" << endl;

    // Selecting destination city
    cout << "Press a for Faisalabad" << endl;
    cout << "Press b for Multan" << endl;
    cout << "Press c for Lahore" << endl;
    cout << "Press d for Karachi" << endl;
    cout << "Press e for Attock" << endl;
    cin >> ch;

    switch (ch) {
    case 'a': // Islamabad to Faisalabad
        cout << "You have selected Faisalabad" << endl;
        cout << "Your total distance is 370km" << endl;
        cout << "Kindly select from available buses" << endl;
        cout << "Press 1 for Luxury Basit Movers" << endl;
        cout << "Press 2 for Economy Talha Tayyara" << endl;
        cin >> bus;
        switch (bus) {
        case 1:
            cout << "Your driver name is Muhammad Talha" << endl;
            cout << "Your rent is 2000" << endl;
            rent = 2000;
            break;
        case 2:
            cout << "Your driver name is Muhammad Waleed" << endl;
            cout << "Your rent is 1500" << endl;
            rent = 1500;
            break;
        }
        break;

    case 'b': // Islamabad to Multan
        cout << "You have selected Multan" << endl;
        cout << "Your total distance is 470km" << endl;
        cout << "Kindly select from available buses" << endl;
        cout << "Press 1 for Luxury Fahad Movers" << endl;
        cout << "Press 2 for Economy Butt Tayyara" << endl;
        cin >> bus;
        switch (bus) {
        case 1:
            cout << "Your driver name is Muhammad Haris" << endl;
            cout << "Your rent is 2500" << endl;
            rent = 2500;
            break;
        case 2:
            cout << "Your driver name is Muhammad Ramzan" << endl;
            cout << "Your rent is 1700" << endl;
            rent = 1700;
            break;
        }
        break;

    case 'c': // Islamabad to Lahore
        cout << "You have selected Lahore" << endl;
        cout << "Your total distance is 290km" << endl;
        cout << "Kindly select from available buses" << endl;
        cout << "Press 1 for Luxury Lahore Movers" << endl;
        cout << "Press 2 for Economy Cheema Tayyara" << endl;
        cin >> bus;
        switch (bus) {
        case 1:
            cout << "Your driver name is Muhammad Akhtar" << endl;
            cout << "Your rent is 2600" << endl;
            rent = 2600;
            break;
        case 2:
            cout << "Your driver name is Muhammad Saim" << endl;
            cout << "Your rent is 1800" << endl;
            rent = 1800;
            break;
        }
        break;

    case 'd': // Islamabad to Karachi
        cout << "You have selected Karachi" << endl;
        cout << "Your total distance is 1384km" << endl;
        cout << "Kindly select from available buses" << endl;
        cout << "Press 1 for Luxury Altaf Movers" << endl;
        cout << "Press 2 for Economy Liari Tayyara" << endl;
        cin >> bus;
        switch (bus) {
        case 1:
            cout << "Your driver name is Farnood Alam" << endl;
            cout << "Your rent is 10000" << endl;
            rent = 10000;
            break;
        case 2:
            cout << "Your driver name is Zaid Billa" << endl;
            cout << "Your rent is 7300" << endl;
            rent = 7300;
            break;
        }
        break;

    case 'e': // Islamabad to Attock
        cout << "You have selected Attock" << endl;
        cout << "Your total distance is 103km" << endl;
        cout << "Kindly select from available buses" << endl;
        cout << "Press 1 for Luxury Attock Movers" << endl;
        cout << "Press 2 for Economy Attock Tayyara" << endl;
        cin >> bus;
        switch (bus) {
        case 1:
            cout << "Your driver name is Alam Khan" << endl;
            cout << "Your rent is 1000" << endl;
            rent = 1000;
            break;
        case 2:
            cout << "Your driver name is Zaid Hamid" << endl;
            cout << "Your rent is 730" << endl;
            rent = 730;
            break;
        }
    }

    int Ans;
    cout << "You have any kids" << endl;
    cout << "If yes press 1" << endl;
    cout << "If no press 0" << endl;
    cin >> Ans;

    // Kids information
    if (Ans == 1) {
        int kids;
        cout << "How many kids you have" << endl;
        cin >> kids;
        switch (kids) {
        case 1:
            cout << "One kid is free";
            break;
        default:
            cout << "You'll be charged 200 more per kid" << endl;
            rent = rent + (200 * kids);
        }
    }
    else if (Ans == 0) {
        cout << "Okay" << endl;
    }
    else {
        cout << "Invalid command" << endl;
    }

    // Luggage information
    int luggage;
    cout << "How many luggage are you carrying" << endl;
    cout << "Kindly answer in kilograms" << endl;
    cin >> luggage;
    if (luggage <= 5) {
        cout << "It is free" << endl;
    }
    else {
        cout << "You have to pay 20 more per kg" << endl;
        rent = rent + (20 * luggage);
    }

    // Refreshment information
    char ref;
    cout << "Do you want refreshment" << endl;
    cout << "Enter Y or N" << endl;
    cin >> ref;
    switch (ref) {
    case 'Y':
        cout << "You have to pay 150 more" << endl;
        rent = rent + 150;
        break;
    default:
        cout << "Okay" << endl;
    }

        // Rent calculation and confirmation
    int confirm;
    cout << "Your total Rent is = " << rent << endl;

    // Confirmation of ticket
    cout << "Kindly confirm your ticket" << endl;
    cout << "Press Y for Yes or N for No" << endl;
    cin >> confirm;

    if (confirm == 'Y' || confirm == 'y') {
        cout << "Thanks for choosing Us" << endl;
        cout << "Enjoy your travel" << endl;
    } else {
        cout << "Sorry for the inconvenience" << endl;
    }

    return 0;
}

