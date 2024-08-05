#include<iostream>
using namespace std;


int binarysearch(int arr[], int n, int key){

   int start =0;
   int end= n-1;

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

int main(){

    int even[6]={1,4,5,6,8,9};
    int odd[5]= {2,5,6,7,10};

    int index= binarysearch(even, 6, 9);

    cout<< " the given index is : "<< index;

    int index_2 = binarysearch(odd, 5, 10);

    cout<< " the given index is : "<< index_2;

}