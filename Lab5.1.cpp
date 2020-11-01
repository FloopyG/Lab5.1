

#include <iostream>
#include <cmath>;

using namespace std;

double f(const double a, const double b, const double c);

int main()
{
    double s, t, P;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    P = (f(1, t+s, s) + f(t, t * s, 1)) / (1 + f(s, 1, t) * f(s, 1, t));

    cout << P << endl;

    cin.get();
    system("pause");
    return 0;
}

double f(const double a, const double b, const double c) {
    return a * sin(b) + b * sin(a) * c * c;
}

