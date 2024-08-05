#include<iostream>
using namespace std;

void rotatearray( int arr[], int n, int k, int arr2[]){
  
   

    for(int i=0; i<n; i++){
        arr2[(i+k)%n]=arr[i];
        
    }
}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<< "  ";
    }
}
int main(){
   int arr[5]={1,2,3,4,5};
   int arr2[5];
   rotatearray(arr,5,3,arr2);
   printarray(arr2,5);
}