#include <iostream>
using namespace std;

long double arithmetic_average(int *a, int *n, int lowerBound, int upperBound);
long double arithmetic_average2(int *a, int *n, int lowerBound, int upperBound);
int sum_odd(int* a, int *n);
int* divisible_by(int *a, int *n, int &resultSize);
int largest(int* a, int *n);
int smallest(int* a, int *n);
int greatest_odd(int* a, int *n);

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

    long double result = arithmetic_average(myArray,myArray+arraySize, a, b);
    cout<<"arithmetic_average: "<<result;
    cout<<endl;
    long double result2 = arithmetic_average2(myArray, myArray+arraySize, a, b);
    cout<<"arithmetic_average: "<<result2;

    cout<<endl;
    int sum = sum_odd(myArray, myArray+arraySize);
    cout<<"Sum_odd: "<<sum<<endl;
    int resultSize;
    int* divisible = divisible_by(myArray, myArray+arraySize, resultSize);
    cout << "Divisible by 3: ";
    for (int i = 0; i < resultSize; i++) {
        cout << divisible[i] << " ";
    }
    cout << endl;

    delete[] divisible;  // Deallocate dynamically allocated memory


    cout<<endl;
    int large = largest(myArray, myArray+arraySize);
    cout<<"Largest: "<<large<<endl;

    cout<<endl;
    int small = smallest(myArray, myArray+arraySize);
    cout<<"Smallest: "<<small<<endl;

    cout<<endl;
    int greatOdd = greatest_odd(myArray, myArray+arraySize);
    cout<<"greatest_odd: "<<greatOdd<<endl;

    return 0;
}

long double arithmetic_average(int *begin, int* end, int lowerBound, int upperBound){
    int sum=0;
    int c=0;
    for(int *ptr = begin; ptr<end; ++ptr){
        if(*ptr<lowerBound || *ptr>upperBound){
            sum+=*ptr;
            c++;
        }
    }
     return (c != 0) ? static_cast<long double>(sum) / c : 0.0;
}


long double arithmetic_average2(int *begin, int *end, int lowerBound, int upperBound){
    int sum=0;
    int c=0;
    for(int *ptr=begin; ptr<end; ++ptr){
        if(*ptr>lowerBound && *ptr<upperBound){
            sum+=*ptr;
            c++;
        }
    }
    return (c != 0) ? static_cast<long double>(sum) / c : 0.0;


}
int sum_odd(int* begin, int* end){
    int sum=0;
    for(int *ptr=begin; ptr<end; ++ptr){
        if(*ptr%2!=0){
            sum+=*ptr;
        }
    }
    return sum;
}

int* divisible_by(int *begin, int *end, int &resultSize) {
    resultSize = 0;
    for (int *ptr=begin; ptr<end; ++ptr) {
        if (*ptr % 3 == 0) {
            resultSize++;
        }
    }

    if (resultSize == 0) {
        return nullptr;  // No elements are divisible by 3
    }

    int* anyArray = new int[resultSize];
    int count = 0;
    for (int *ptr=begin; ptr<end; ++ptr) {
        if (*ptr % 3 == 0) {
            anyArray[count++] = *ptr;
        }
    }
    return anyArray;
}
//int count_divisible_by(int *begin, int *end, int divisor) {
//   int count = 0;
//   for (int *ptr = begin; ptr < end; ++ptr) {
//     if (ptr % divisor == 0) {
//         count++;
//       }
//    }
//   return count;
//}

int largest(int *begin, int *end){
    int largest = *begin;  // Assume the first element is the largest initially
    for (int *ptr=begin; ptr<end; ++ptr) {
        if (*ptr > largest) {
            largest = *ptr;
        }
    }
    return largest;
}

int smallest(int *begin, int *end){
    int smallest = *begin;  // Assume the first element is the smallest initially
    for (int *ptr=begin; ptr<end; ++ptr) {
        if (*ptr < smallest) {
            smallest = *ptr;
        }
    }
    return smallest;
}

int greatest_odd(int *begin, int *end){
    int greatestOdd = -1;  // Initialize to a value smaller than any possible odd number
    for (int *ptr=begin; ptr<end; ++ptr) {
        if (*ptr % 2 != 0) {
            if (*ptr > greatestOdd) {
                greatestOdd = *ptr;
            }
        }
    }
    return greatestOdd;
}
















