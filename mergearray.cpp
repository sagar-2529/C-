#include<iostream>
using namespace std;

void mergearray(int arr1[], int n, int arr2[], int m, int arr3[]){
   int i=0; int j=0;
   int k=0;
   while(i<n & j<m){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    else{
        arr3[k]=arr2[j];
        k++;
        j++;
    }
   }
   while(i<n){
      arr3[k]=arr1[i];
        k++;
        i++;
   }
   while(j<m){
     arr3[k]=arr2[j];
        k++;
        j++;
    
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
    int arr3[9];
    mergearray(arr1,5,arr2,4,arr3);
    printarray(arr3,9);


    }

