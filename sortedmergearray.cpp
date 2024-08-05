#include<iostream>
using namespace std;

void mergearray(int arr1[], int n, int arr2[], int m){
    int i = n-1;
    int j= m-1;
    int k= n+m-1;
    while(i>=0 & j>=0){

        if(arr1[i]>arr2[j]){
            arr1[k--]=arr1[i--];
        }
        else{
            arr1[k--]=arr2[j--];
        }

    }
    while(j>=0){
        arr1[k--]=arr2[j--];
    }
}
void printarray(int arr3[], int n){
    for(int i=0; i<n; i++){
        cout<< arr3[i]<< "  ";
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[4]={0,7,8,9};
    mergearray(arr1,5,arr2,4);
    printarray(arr1,9);


    }