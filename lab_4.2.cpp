#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double x, x_start, x_end, dx, A, B, y;

    cout << "Enter x_start: "; cin >> x_start;
    cout << "Enter x_end: "; cin >> x_end;
    cout << "Enter dx: "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = x_start;
    while (x <= x_end)
    {
        A = pow(x, 2) * sin(x / 2);
        if (x <= -5)
            B = atan(exp(x));
        else
            if (x > 0)
                B = log(fabs(x)) - (x / 5);
            else
                B = 1 + pow(x, 3) / 4;
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}