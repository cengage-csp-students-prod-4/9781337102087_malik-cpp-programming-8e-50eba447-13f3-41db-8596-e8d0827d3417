#include <iostream>

using namespace std;

int main() {
    float payRate;
    float hoursWorked;
    const float taxRate = 0.14;
    const float clothesSupR = 0.10;
    const float schoolSupR = 0.01;
    const float savingsR = 0.25;
    double payTotal;
    double taxedTotal;
    double clothesSup;
    double schoolSup;
    double savings;
    double psavings;

    cout << "Enter your payrate and press Enter: ";
    cin >> payRate;
    cout << "Enter number of hours worked and press Enter ";
    cin >> hoursWorked;

    payTotal = payRate * hoursWorked;
    taxedTotal = payTotal - (payTotal * taxRate);
    clothesSup = clothesSupR * taxedTotal;
    schoolSup = schoolSupR * taxedTotal;
    savings = (taxedTotal - clothesSup - schoolSup) * savingsR;
    psavings = savings / 0.5;

    cout << payTotal << endl; 
    cout << taxedTotal << endl;
    cout << clothesSup << endl;
    cout << schoolSup << endl;
    cout << savings << endl;
    cout << psavings << endl;

    return 0;
}