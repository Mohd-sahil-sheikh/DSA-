#include <iostream>
using namespace std;
int main()
{
    float farenheit;
    float celsius;
    int choice;
    do
    {
        cout << "TYPE 1 TO CONVERT FARENHEIT INTO CELSIUS" << endl;
        cout << "TYPE 2 TO CONVERT CELSIUS TO FARENHEIT" << endl;
        cout << "type 3 for EXIT" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter the temperatrure in farenheit" << endl;
            cin >> farenheit;
            celsius = (5 * (farenheit - 32)) / 9;
            cout << celsius << endl;
            break;
        case 2:
            cout << "enter the temperaturte in celsius" << endl;
            cin >> celsius;
            farenheit = (9 * celsius) / 5 + 32;
            cout << farenheit << endl;

            break;
        case 3:
            cout << "exited  sucessfully" << endl;
            break;
        default:
            cout << "INVALID OPTION" << endl;

            break;
        }
    } while (choice != 3);
    return 0;
}