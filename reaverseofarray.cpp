#include<iostream>
using namespace std;

void reverseofarray(int arr[], int n){
    int s=0;
    int e= n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){

    int arr[7]={7,11,23,3,9,77,100};
    reverseofarray(arr,7);
    for(int i=0; i<7; i++){
        cout<< arr[i]<< "  ";
    }

}