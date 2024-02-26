#include <iostream>
using namespace std;

// TEMPERATURE CONVERTER

int main()
{

    float temp; // you used int instead of float the answer could be in point

    int t;
    int c;

    float conv; // you used int instead of float the answer could be in point

    int a;

    cout << "ENTER YOUR TEMPERATURE " << endl;
    cin >> temp;

    cout << "IF THE TEMPERATURE YOU ENTERED IS IN CELCIUS TYPE 1 , FOR FARENHEIT PRESS 2, FOR KELVIN PRESS 3 " << endl;
    cin >> t;

    cout << "TO CONVERT TO CELCIUS PRESS 1, TO CONVERT TO FARENHEIT PRESS 2 , TO CONVERT TO KELVIN PRESS 3" << endl;
    cin >> c;

    if (t == 1 && c == 2) // Use == for comparison
    {
        conv = (temp * 9.0 / 5) + 32;
    } // Use 9.0 to force floating-point division....idk what is this
    else if (t == 2 && c == 1)
    {

        conv = (temp - 32) * 5.0 / 9;
    }
    else if (t == 3 && c == 1)
    {

        conv = temp - 273.15;
    }
    else if
        (t == 3 && c == 2)
    {
        conv = (temp - 273.15) * 9 / 5 + 32;
    }
    else {
        cout << "Invalid input! Please enter valid choices for temperature scales and conversion types." << endl;
        return 1; // Exiting with an error code
    }

    cout << "YOUR CONVERTED TEMPERATURE IS " << conv << endl;

    return 0;
}