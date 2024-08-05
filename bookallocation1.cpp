#include<iostream>
using namespace std;

bool istrue(int arr[], int n, int m, int mid){
    int pagesum=0;
    int studentcount=1;

    for(int i=0; i<n;i++){
        if (pagesum + arr[i]< mid){
            pagesum = pagesum+ arr[i];

        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]> mid){
                return false;
            }
            pagesum= arr[i];
        }
    }
    return true;

}

int allocatebook(int arr[], int n, int m){
    int s=0;
    int sum=0;
    int ans= -1;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    int e= sum;
    int mid = s +(e-s)/2;
    while(s<=e){
        if( istrue( arr,n,m, mid )){
               ans = mid;
            e = mid-1;
         
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans-1;
}

int main(){

    int array[4]= {20, 20, 30 ,40 };

    int ans= allocatebook(array, 4, 2 );

    cout<< ans;

}