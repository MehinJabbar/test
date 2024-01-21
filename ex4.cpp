#include <iostream>
#include <limits>
using namespace std;

long double arithmetic_average(int *a, int n, int lowerBound, int upperBound);
long double arithmetic_average2(int *a, int n, int lowerBound, int upperBound);
int sum_odd(int* a, int n);
int* divisible_by(int *a, int n, int &resultSize);
int largest(int* a, int n);
int smallest(int* a, int n);
int greatest_odd(int* a, int n);

int main (){

    const int arraySize = 5;
    int n, a, b;

    int myArray[arraySize];
    cout<<"add numbers: \n";
    for (int i = 0; i < arraySize; i++){
        cin>>n;
        myArray[i] = n;
}
    for (int i = 0; i < arraySize; i++){
        cout<<myArray[i]<<" ";
}
    cout<<endl;
    cout<<"lower bound (a): ";
    cin>>a;
    cout<<"upper bound (b): ";
    cin>>b;

    long double result = arithmetic_average(myArray, arraySize, a, b);
    cout<<"arithmetic_average: "<<result;
    cout<<endl;
    long double result2 = arithmetic_average2(myArray, arraySize, a, b);
    cout<<"arithmetic_average: "<<result2;

    cout<<endl;
    int sum = sum_odd(myArray, arraySize);
    cout<<"Sum_odd: "<<sum<<endl;
    int resultSize;
    int* divisible = divisible_by(myArray, arraySize, resultSize);
    cout << "Divisible by 3: ";
    for (int i = 0; i < resultSize; i++) {
        cout << divisible[i] << " ";
    }
    cout << endl;

    delete[] divisible;  // Deallocate dynamically allocated memory


    cout<<endl;
    int large = largest(myArray, arraySize);
    cout<<"Largest: "<<large<<endl;

    cout<<endl;
    int small = smallest(myArray, arraySize);
    cout<<"Smallest: "<<small<<endl;

    cout<<endl;
    int greatOdd = greatest_odd(myArray, arraySize);
    cout<<"greatest_odd: "<<greatOdd<<endl;

    return 0;
}

long double arithmetic_average(int *a, int n, int lowerBound, int upperBound){
    int sum=0;
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]<lowerBound || a[i]>upperBound){
            sum+=a[i];
            c++;
        }
    }
     return (c != 0) ? static_cast<long double>(sum) / c : 0.0;
}


long double arithmetic_average2(int *a, int n, int lowerBound, int upperBound){
    int sum=0;
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]>lowerBound && a[i]<upperBound){
            sum+=a[i];
            c++;
        }
    }
    return (c != 0) ? static_cast<long double>(sum) / c : 0.0;


}
int sum_odd(int* a, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            sum+=a[i];
        }
    }
    return sum;
}

int* divisible_by(int *a, int n, int &resultSize) {
    resultSize = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            resultSize++;
        }
    }

    if (resultSize == 0) {
        return nullptr;  // No elements are divisible by 3
    }

    int* anyArray = new int[resultSize];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            anyArray[count++] = a[i];
        }
    }
    return anyArray;
}


int largest(int* a, int n){
    int largest = a[0];  // Assume the first element is the largest initially
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    return largest;
}

int smallest(int* a, int n){
    int smallest = a[0];  // Assume the first element is the smallest initially
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    return smallest;
}

int greatest_odd(int* a, int n){
    int greatestOdd = numeric_limits<int>::min();
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (a[i] > greatestOdd) {
                greatestOdd = a[i];
            }
        }
    }
    return greatestOdd;
}
















