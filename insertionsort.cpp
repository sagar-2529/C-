#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=1;i<n; i++){
        for(int j=i; j>0; j--){
        if(arr[j]< arr[j-1]){
            swap(arr[j], arr[j-1]);
        }
        else{
            break;
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
  insertionsort(arr, 5);
  cout<< "after sorting array is:";
 
   for(int i=0; i< 5; i++){
      cout<< arr[i]<< "  ";
  }
}
