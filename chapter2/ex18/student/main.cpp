#include <iostream>

using namespace std;

int main() {
    float payRate;
    float hoursWorked;
    float taxRate;
    float clothesSupR;
    float schoolSupR;
    float savingsR;
    double payTotal;
    double taxedTotal;
    double clothesSup;
    double schoolSup;
    double savings;
    double psavings;

    taxRate = 0.14;
    clothesSupR = 0.10;
    schoolSupR = 0.01;
    savingsR = 0.25;

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

    cout << payTotal; 
    cout << taxedTotal << endl;
    cout << clothesSup << endl;
    cout << schoolSup << endl;
    cout << savings << endl;
    cout << psavings << endl;

    return 0;
}