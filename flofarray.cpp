#include<iostream>
using namespace std;

int firstindex(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid=(start+end)/2;
    int ans = -1;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            end= mid-1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid= (start+end)/2;
    }
    return ans;
 
        
    
}
int secondindex(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid=(start+end)/2;
    int ans = -1;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            start= mid+1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int main(){

    int array[8]={1,1,1,1,1,2,2,2};

    int answer= firstindex(array, 8, 1);

    int sanswer= secondindex(array, 8, 1);

   cout<< " left most occurence is : " << answer;

   cout<< " right most occurence is : " << sanswer;


   

    


}