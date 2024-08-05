#include<iostream>
using namespace std;

void selectionsort( int arr[], int n){
     for(int i=0; i<n-1; i++){
            int minindex=i;
            for(int j= i+1; j<n; j++){
                if(arr[minindex]>arr[j]){
                    minindex=j;
                }
                swap(arr[minindex], arr[i]);
            }
        
    }
}
int main(){
    int arr[5]={100,90,200,70,60};
    for(int i=0; i<5; i++){
        cout<< arr[i]<< "  ";
    }
    cout<<  endl;
    selectionsort(arr,5);
    cout<< " after selection sort array is: ";
    for(int i=0; i<5; i++){
        cout<< arr[i]<< "  ";
    }
   
}