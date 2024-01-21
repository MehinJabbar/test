#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void generate_array(int *a,int n, int p, int q);
void display_array(int* a, int m);
int count_occurrences(int *a, int n, int x);
int find_integer(int *a,int n,int x);

int main(){


    int p, q, n, x ;

    // Get user input for the range
    cout << "Enter the size of the array (n): ";
    cin >> n;

     if (n <= 0)
    {
        cout << "Invalid array size. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the lower bound (p): ";
    cin >> p;

    cout << "Enter the upper bound (q): ";
    cin >> q;

    int *myArray = new int[n];
    // Generate the array
    generate_array(myArray, n, p, q);

    cout << "Generated Array: ";
    for (int i = 0; i < n; i++) {
        cout << myArray[i] << " ";
    }

    display_array(myArray, n);

    cout<<endl;

    cout << "Enter the number to count occurrences: ";
    cin >> x;

    int result = count_occurrences(myArray, n, x);
    cout << "Occurrences of " << x << ": " << result << endl;

    cout<<endl;

    int index = find_integer(myArray, n, x);
    cout<<"Index of the x is: "<<index<<endl;


    delete []myArray;
    myArray = NULL;

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

















