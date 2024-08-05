#include<iostream>
using namespace std;

int index(int arr[], int n, int key){

    int count=0;

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
 
}
int main(){
    int arr[6]={1,2,2,2,3,4};
    int ans= index(arr,6,2);

    cout<< " answer is: "<< ans<< endl;
}
