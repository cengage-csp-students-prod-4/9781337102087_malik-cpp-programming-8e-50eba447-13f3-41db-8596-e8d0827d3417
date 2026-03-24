#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float speedOne;
    float speedTwo;
    float timeX, timeY;
    float distance1;
    float distance2;
    float totalDistance;

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
    
    distance1 = timeX * speedOne;
    distance2 = timeX * speedTwo;
    totalDistance = sqrt((distance1 * distance1) + (distance2 * distance2));

    cout << "The distance between the cars is " << totalDistance << " miles" << endl;

    return 0;
}