#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float speedOne;
    float speedTwo;
    float timeX, timeY;

    cout << fixed << setprecision(2);

    cout << "Enter the average speed of the first car: ";
    cin >> speedOne;
    cout << "Enter the average speed of the second car: ";
    cin >> speedTwo;
    cout << "Enter the elapsed time (hours than minutes) since the cars left: ";
    cin >> timeX >> timeY;

    if (timeY > 0) {
        timeY = timeY / 60;
        timeX = timeX + timeY;
    }

    cout << "The distance between the cars is " <<
    (timeX * speedOne) + (timeX * speedTwo) << " miles" << endl;

    return 0;
}