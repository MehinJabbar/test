#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void generate_array(int *a,int n, int p, int q);
void display_array(int* a, int n);
int count_occurrences(int *a, int n, int x);
int find_integer(int *a,int n,int x);

int main(){

    const int arraySize = 10;
    int p, q, n, x;

    // Get user input for the range
     int myArray[arraySize];

    cout << "Enter the lower bound (p): ";
    cin >> p;

    cout << "Enter the upper bound (q): ";
    cin >> q;


    // Generate the array
    generate_array(myArray, arraySize, p, q);


    cout << "Generated Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << myArray[i] << " ";
    }

    display_array(myArray, n);

    cout << "\nEnter the number to count occurrences: ";
    cin >> x;

    int result = count_occurrences(myArray, arraySize, x);
    cout << "Occurrences of " << x << ": " << result << endl;

    cout<<endl;

    int index = find_integer(myArray, arraySize, x);
    cout<<" Index of the x is: "<<index<<endl;

    return 0;
}

void generate_array(int *a,int n, int p, int q){

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        // Generate a random number in the range [p, q]
        a[i] = rand() % (q - p + 1) + p;
    }

}

void display_array(int* a, int n){
    cout<<"\n How many numbers you want to display: ";
    cin>>n;
    for(int i=0; i<n; i++){

        cout<<a[i]<<" ";
    }

}
int count_occurrences(int *a, int n, int x){
    int countx=0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            countx++;
        }
    }
    return countx;
    }
int find_integer(int *a,int n,int x){
    int indx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            indx = i;
            break;
        }
    }
    return indx;

}









