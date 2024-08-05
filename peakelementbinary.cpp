#include<iostream>
using namespace std;

int peakelement( int arr[], int n){
    int s=0;
    int e= n-1;
    int mid= s+ (e-s)/2;

    while(s<e){
        if(arr[mid+1]>arr[mid]){
           
            s=mid+1;
        }
        else {
           e = mid;

        }
        
        
        mid= s + (e-s)/2;
        
    }
     return s;
    
}
int main(){
    int arr[6]={1,6,99,100,109,2};
    int ans= peakelement(arr,6);
    cout<< "peak element at index is : "<< ans;
}