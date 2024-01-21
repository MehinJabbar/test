#include <iostream>
#include <cmath>  // Include cmath for the sqrt function
#include <limits>
using namespace std;

double triangleArea(double a, int &c);
double triangleCircumference(double a);  // Corrected the return type

int main() {
    double side;
    char option;
    int c=0;
    double smallestArea = numeric_limits<double>::max();
    do{
    cout << "Enter the value for the side of the triangle: \n";
    cin >> side;

    if (side > 0) {
        double triangle_area = triangleArea(side, c);
        cout << "Area: " << triangle_area << endl;

        smallestArea = min(smallestArea, triangle_area);

        double circ = triangleCircumference(side);
        cout << "Circumference: " << circ << endl;
    } else {
        cout << "Error: Side length must be greater than 0." << endl;
    }
    cout<<"Do you want to continue? Y/N: ";
    cin>>option;

}while(option == 'Y'|| option == 'y');

cout << "Smallest area for " << c << " triangles: " << smallestArea << endl;

    return 0;
}

double triangleArea(double a,int &c) {
    c++;
    return (sqrt(3.0) / 4.0) * a * a;
}

double triangleCircumference(double a) {
    return 3.0 * a;  // Assuming an equilateral triangle, where circumference = 3 * side length
}
