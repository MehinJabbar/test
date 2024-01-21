#include <iostream>
#include <limits>  // For numeric_limits
using namespace std;

// Function declarations
bool isZero(int number);
bool isEven(int number);
bool isPositive(int number);
double averageOfOddNumbers(int number);

int main() {
    int n;

    // Get the number of repetitions from the user
    cout << "Enter the number of times to repeat the calculations (n >= 1): ";
    cin >> n;

    // Validate input for n
    while (n < 1) {
        cout << "Please enter a value greater than or equal to 1 for n: ";
        cin >> n;
    }
    int highestValue = numeric_limits<int>::min();  // Initialize to smallest possible integer value

    for (int repetition = 1; repetition <= n; ++repetition) {
        int number;

        // Get input from the user
        cout << "Enter an integer: ";
        cin >> number;

        // Update the highest value if the current input is greater
        if (number > highestValue) {
            highestValue = number;
        }
        // Check if the number is zero
        if (isZero(number)) {
            cout << "Zero" << endl;
        } else {
            // Check if the number is even or odd
            if (isEven(number)) {
                cout << "Even ";
            } else {
                cout << "Odd ";
            }

            // Check if the number is positive or negative
            if (isPositive(number)) {
                cout << "and Positive" << endl;
            } else {
                cout << "and Negative" << endl;
            }

            // Calculate and display arithmetic average of odd numbers
            double average = averageOfOddNumbers(number);
            cout << "Arithmetic average of odd numbers: " << average << endl;
        }
    }

    // Display the integer with the highest value
    cout << "The integer with the highest value is: " << highestValue << endl;
    cout << "Calculations completed." << endl;

    return 0;
}

// Function to check if the number is zero
bool isZero(int number) {
    return (number == 0);
}

// Function to check if the number is even
bool isEven(int number) {
    return (number % 2 == 0);
}

// Function to check if the number is positive
bool isPositive(int number) {
    return (number > 0);
}

// Function to calculate arithmetic average of odd numbers
double averageOfOddNumbers(int number) {
    if (isEven(number) || (!isPositive(number))) {
        return 0.0; // No odd numbers in case of an even input
    }

    int sum = 0;
    int count = 0;

    // Calculate sum and count of odd numbers
    for (int i = 1; i <= number; i += 2) {
        sum += i;
        count++;
    }

    // Calculate arithmetic average
    return static_cast<double>(sum) / count;
}
