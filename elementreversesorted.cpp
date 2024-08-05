#include<iostream>
using namespace std;

int getpivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s= mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;

}

int binarysearch(int arr[], int start, int end, int key){

  

int mid= (start )+( end-start)/2;

   while(start<=end){


    if(arr[mid]==key){

        return mid;
    }

    if(key>arr[mid]){
        start = mid+1;

    }
    else{
        end= mid-1;
    }
    mid=(start+end)/2;
   


   }
    return -1;
}

int findposition(int arr[], int n, int k){

    int pivot = getpivot( arr,6);

    if(k>=arr[0]  && k<=arr[pivot-1]){
        return binarysearch(arr,0,pivot-1,k);
    }
    else{
        return binarysearch(arr,pivot,n-1,k);
    }


}
int main(){
    int arr[6]= { 12 ,43 , 45, 7 , 9, 10};
    int ans= getpivot(arr,6);
    int sans= binarysearch(arr,0,5,9);
     int tans= findposition(arr,6,10);
    cout<< " answer is: "<< ans<< endl;
       cout<< " answer is: "<< sans<< endl;
       cout<< " answer is: "<< tans;

}