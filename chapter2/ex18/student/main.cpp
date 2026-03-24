#include <iostream>

using namespace std;

int main() {
    float payRate;
    float hoursWorked;
    float taxRate;
    float clothesSupR;
    float schoolSupR;
    float savingsR;
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

    taxedTotal = payRate * hoursWorked;
    clothesSup = clothesSupR * taxedTotal;
    schoolSup = schoolSupR * taxedTotal;
    savings = (taxedTotal - clothesSup - schoolSup) * savingsR;
    psavings = savings / 0.5;

    cout << "Income before taxes is $" << payRate * hoursWorked; 
    cout << " and after is$ " << taxedTotal;
    cout << "The money spent on clothes and accessories is $" << clothesSup << endl;
    cout << "The money spent on school supplies is $" << schoolSup << endl;
    cout << "The money put into savings bonds is $" << savings << endl;
    cout << "The money your parents invested is $" << psavings << endl;

    return 0;
}