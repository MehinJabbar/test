#include <iostream>
using namespace std;

int main(){

    cout<<"Add two 3x4 matrices. \n";
    int firstArray[3][4] = {{1,2,3,4}, {4,5,6,7}, {7,8,9,10}};
    int secondArray[3][4] = {{1,1,3,4}, {2,5,6,7}, {7,8,3,10}};

    for (int i = 0; i<3; ++i){
        for (int j = 0; j<4; ++j){
        firstArray[i][j]+=secondArray[i][j];
        }
    }

    for (int i = 0; i<3; ++i){
        for (int j = 0; j<4; ++j){
        cout<<firstArray[i][j]<<'\t';
        }
        cout<<endl;
    }


    return 0;
}
