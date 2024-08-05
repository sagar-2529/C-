#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main(){
  int arr[5]={1,7,9,3,5};
  cout<< " befor sorting array is: ";
  for(int i=0; i< 5; i++){
      cout<< arr[i]<< "  ";
  }
   cout<< endl;
  bubblesort(arr, 5);
  cout<< "after sorting array is:";
 
   for(int i=0; i< 5; i++){
      cout<< arr[i]<< "  ";
  }
}