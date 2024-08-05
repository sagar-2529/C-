#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a = {1,2,3,4};
    for(int i=0; i<4; i++){
        cout<< a[i]<< endl;
    }
    cout<< " element at 2nd position : "<< a.at(1);
}