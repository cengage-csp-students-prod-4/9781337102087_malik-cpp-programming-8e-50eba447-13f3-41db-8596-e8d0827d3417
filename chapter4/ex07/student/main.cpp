#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double coefficientOfXSquare;
    double coefficientOfX;
    double constantTerm;

    double discriminant;
    double sqrtOfDiscriminant;

    double root1, root2;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the coefficient of x square: ";
    cin >> coefficientOfXSquare;
    cout << endl;

    cout << "Enter the coefficient of x: ";
    cin >> coefficientOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;
    discriminant = pow(coefficientOfX, 2) + (-4 * coefficientOfXSquare * constantTerm);
    ///cout << discriminant;
    sqrtOfDiscriminant = sqrt(discriminant);

    if (discriminant == 0)
    {
        root1 = (-1 * coefficientOfX) / (2 * coefficientOfXSquare);
        cout << "The program has a single (repeated) root " << root1;
    }
    else if (discriminant > 0)
    {
        cout << "The program has two real roots " << root1 << " " << root2;
    }
    else

        cout << "The equation has complex roots";

    return 0;
}
