#include <iostream>
using namespace std;

int main(){

    const int Rows = 3;
    const int Columns = 4;
    int sum;
    int myArray[Rows][Columns] = {{1,2,3,4 }, {4,5,6,7}, {7,8,9,10}};


    cout<<"Matrix: "<<Rows<<"x"<<Columns<<endl;
    for (int i=0; i<Rows; ++i){
    sum = 0;
        for (int j=0; j<Columns; ++j){
            cout<<myArray[i][j]<<'\t';

        }
        cout<<endl;
    }
    cout << "Sum of rows: ";

    for (int i = 0; i < Rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < Columns; ++j) {
            rowSum += myArray[i][j];
        }
        cout << rowSum << " ";
    }
    cout << endl;

    return 0;
}
