#include <iostream>
#include <limits>
using namespace std;

const int MAX_SIZE = 100; // Choose a suitable maximum size for your array

void fun_array(int *myarray, int n);
int count_less(int *myarray, int n, int x);
int sum_less(int *myarray, int n, int x);
int average_less(int *myarray, int n, int x);
int largest_less(int *myarray, int n, int x);

int main()
{
    int n, x;
    cout << "Define the size of the array (up to " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE)
    {
        cout << "Invalid array size. Exiting program." << endl;
        return 1;
    }

    cout << "Add an integer for x value to count less: ";
    cin >> x;

    int myarray[MAX_SIZE];

    fun_array(myarray, n);

    int result = count_less(myarray, n, x);
    cout << "count_less returns " << result << endl;

    int resultSum = sum_less(myarray, n, x);
    cout << "sum_less returns " << resultSum << endl;

    if (result != 0)
    {
        int resultAverage = average_less(myarray, n, x);
        cout << "average_less returns " << resultAverage << endl;

        int largest = largest_less(myarray, n, x);
        cout << "largest_less returns the index of the largest element less than x: " << largest << endl;

        // Display the value of the largest element less than x
        cout << "Value of the largest element less than x: " << myarray[largest] << endl;
    }
    else
    {
        cout << "No element in the array is less than x." << endl;
    }

    return 0;
}

void fun_array(int *myarray, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "add integers: ";
        cin >> myarray[i];
    }
}

int count_less(int *myarray, int n, int x)
{
    int countNumber = 0;
    for (int i = 0; i < n; i++)
    {
        if (myarray[i] < x)
        {
            countNumber += 1;
        }
    }
    return countNumber;
}

int sum_less(int *myarray, int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (myarray[i] < x)
        {
            sum += myarray[i];
        }
    }
    return sum;
}

int average_less(int *myarray, int n, int x)
{
    int sum = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (myarray[i] < x)
        {
            sum += myarray[i];
            c += 1;
        }
    }
    return sum / c;
}

int largest_less(int *myarray, int n, int x){
    int myint = numeric_limits<int>::min();
    int maxind = -1;
    for (int i = 0; i<n; i++){
         if (myarray[i] < x && myarray[i] > myint)
        {
            myint = myarray[i];
            maxind = i;
        }
    }
    return maxind;
}
