#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    const int rows = 3;
    const int columns = 4;
    int a,b;

    cout<<"Matrix: "<<rows<<"x"<<columns<<endl;
    int myArray[rows][columns];

    cout<<"Give the range [a,b]: "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    srand(time(NULL));

if(b>a){
    for (int i=0; i<rows; ++i){
        for (int j=0; j<columns; ++j){
            int results = rand() % (b-a+1)+a;
            myArray[i][j]=results;
        }
    }
    cout<<endl;

    for (int i=0; i<rows; ++i){
        for (int j=0; j<columns; ++j){

            cout<<myArray[i][j]<<'\t';
        }
        cout<<endl;
    }
}else {

    cout<<"INVALID! a should be less than b";
}
    cout<<endl;
    cout<<"Sum of rows: ";

     for (int i=0; i<rows; ++i){
     int sumRows=0;
        for (int j=0; j<columns; ++j){

            sumRows+=myArray[i][j];
        }
        cout<<sumRows<<" ";
    }

    cout<<endl;


    return 0;
}
