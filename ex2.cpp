#include <iostream>
using namespace std;

long double y_value(long double x);
int how_many(long double result);

int main() {
    long double x;
    int n;

    cout << endl;
    cout << "How many you want to repeat calculation: ";
    cin >> n;

    if (n >= 1) {
        int negativeCount = 0;

        for (int i = 0; i < n; i++) {
            cout << "\nEnter a value representing for x: ";
            cin >> x;

            long double result = y_value(x);
            cout << "\ny is equal: " << result << endl;

            if (result < 0) {
                cout << "\nY {" << result << "} is negative\n";
                negativeCount += how_many(result);
            } else {
                cout << "\nY {" << result << "} is positive\n";
            }
        }

        cout << "Total negative results: " << negativeCount << endl;
    } else {
        cout << "Invalid!";
    }

    return 0;
}

long double y_value(long double x) {
    long double y;

    if (x > 1) {
        y = 1.0 / (x - 1);
    } else if (x < 1 && x > -1) {
        y = x / 2;
    } else {
        y = 1.0 / (x + 1);
    }

    return y;
}

int how_many(long double result) {
    return 1; // Counting 1 for each negative result
}
