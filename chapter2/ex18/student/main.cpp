#include <iostream>

using namespace std;

int main() {
    float payRate;
    float hoursWorked1;
    float hoursWorked2;
    float hoursWorked3;
    float hoursWorked4;
    float hoursWorked5;
    float totalHoursWorked;
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
    cout << "Enter number of hours worked week 1 and press Enter ";
    cin >> hoursWorked1;
    cout << "Enter number of hours worked week 2 and press Enter ";
    cin >> hoursWorked2;
    cout << "Enter number of hours worked week 3 and press Enter ";
    cin >> hoursWorked3;
    cout << "Enter number of hours worked week 4 and press Enter ";
    cin >> hoursWorked4;
    cout << "Enter number of hours worked week 5 and press Enter ";
    cin >> hoursWorked5;

    totalHoursWorked = hoursWorked1 + hoursWorked2 + hoursWorked3 + hoursWorked4 + hoursWorked5;
    payTotal = payRate * totalHoursWorked;
    taxedTotal = payTotal - (payTotal * taxRate);
    clothesSup = clothesSupR * taxedTotal;
    schoolSup = schoolSupR * taxedTotal;
    savings = (taxedTotal - clothesSup - schoolSup) * savingsR;
    psavings = savings / 2;

    cout << payTotal << endl; 
    cout << taxedTotal << endl;
    cout << clothesSup << endl;
    cout << schoolSup << endl;
    cout << savings << endl;
    cout << psavings << endl;

    return 0;
}