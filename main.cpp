#include <iostream>
#include <iomanip>
#include <time.h>
#include "cmath"
using namespace std;
int main() {
    double x, y, R;
    srand((unsigned) time(NULL));
    cout << "R = ";
    cin >> R;
    for (int i = 0; i < 10; i++) {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << endl;
        if (y <= R && y >= 0 && y >= -x && x <= 0 ||
            y >= -R && y <= 0 && x <= 0 && y <= x ||
            y <= R && y >= -R && x >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2))
            cout << "потрапив" << endl;
        else
            cout << "не потрапив" << endl;

    }
    cout << endl << fixed;
    cout << "__________________________________________" << endl;
    for (int i = 0; i < 10; i++) {
        {
            x = 2 * R * rand() / RAND_MAX - R;
            y = 2 * R * rand() / RAND_MAX - R;
            if (y <= R && y >= 0 && y >= -x && x <= 0 ||
                y >= -R && y <= 0 && x <= 0 && y <= x ||
                y <= R && y >= -R && x >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2))
                cout << setw(8) << setprecision(4) << x << setw(3) << "|"
                     << setw(8) << setprecision(4) << y << setw(3) << "|" << setw(7) << "Потрапив" << endl;
            else
                cout << setw(8) << setprecision(4) << x << setw(3) << "|"
                     << setw(8) << setprecision(4) << y << setw(3) << "|" << setw(10) << "Не потрапив" << endl;
        }
        return 0;
    }
}

