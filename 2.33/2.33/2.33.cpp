#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double milesPerDay, costPerGallon, milesPerGallon, parkingFees, tolls;

    cout << "Total miles driven per day: ";
    cin >> milesPerDay;
    cout << "Cost per gallon of gasoline: ";
    cin >> costPerGallon;
    cout << "Average miles per gallon: ";
    cin >> milesPerGallon;
    cout << "Parking fees per day: ";
    cin >> parkingFees;
    cout << "Tolls per day: ";
    cin >> tolls;

    double dailyCost = (milesPerDay / milesPerGallon) * costPerGallon + parkingFees + tolls;

    cout << fixed << setprecision(2);
    cout << "Your daily driving cost is: $" << dailyCost << endl;

    return 0;
}
