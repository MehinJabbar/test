#include <iostream>
using namespace std;

int main() {
    const int arraySize = 50;
    char sentence[arraySize];

    cout << "Enter a sentence (up to 50 characters): ";
    char currentChar;

    int i = 0;

    while (i < arraySize - 1 && cin >> noskipws >> currentChar && currentChar != '\n') {
        sentence[i] = currentChar;
        i++;
    }
    sentence[i] = '\0';


    for (int j = 0; sentence[j] != '\0'; ++j) {
        if (sentence[j] >= 'a' && sentence[j] <= 'z') {
            sentence[j] = sentence[j] - 'a' + 'A';
        }
    }

    cout << "Modified sentence: " << sentence << endl;

    return 0;
}
