#include<iostream>
using namespace std;

int pivotelement( int arr[], int n){
    int s= 0;
    int e= n-1;
    int mid= s+ (e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid+1;
        }
        else{
            e= mid;
        }
      mid= s+ (e-s)/2;
    }
     return s;
}

int main(){

    int arr[5]={9,11,1,5,7};

    int ans = pivotelement(arr, 5);

    cout<< " pivot element is : "<< ans;

}