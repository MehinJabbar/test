#include <iostream>
using namespace std;

int main() {
    const int ArraySize = 50;
    char sentence[ArraySize];


    cout << "Enter a sentence (up to 50 characters): ";

    char currentChar;
    int i = 0;


    while (i < ArraySize - 1 && cin >> noskipws >> currentChar && currentChar != '\n') {
        sentence[i] = currentChar;
        i++;
    }
    sentence[i] = '\0';


    int lowercaseCount = 0;
    for (int j = 0; sentence[j] != '\0'; ++j) {
        if (sentence[j] >= 'a' && sentence[j] <= 'z') {
            lowercaseCount++;
        }
    }


    cout << "Number of lowercase letters in the sentence: " << lowercaseCount << endl;

    return 0;
}
