#include <iostream>
using namespace std;

int main() {
    const int arraySize = 20;
    char word[arraySize];

    cout << "Enter a word (up to 20 characters): ";
    char currentChar;

    int i = 0;

    while (i < arraySize - 1 && cin >> noskipws >> currentChar && currentChar != '\n') {
        word[i] = currentChar;
        i++;
    }
    word[i] = '\0';

    bool isPalindrome = true;


    for (int j = 0, k = i - 1; j < k; ++j, --k) {
        if (word[j] != word[k]) {
            isPalindrome = false;
            break;
        }
    }


    if (isPalindrome) {
        cout << "The entered word is a palindrome." << endl;
    } else {
        cout << "The entered word is not a palindrome." << endl;
    }

    return 0;
}
