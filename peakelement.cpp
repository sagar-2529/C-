#include<iostream>
using namespace std;

int index(int arr[], int n){

    int max= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];

           
        }
    }
    return max;
 
}
int main(){
    int arr[6]={1,8,9,3,4};
    int ans= index(arr,5);

    cout<< " peak element is : "<< ans<< endl;
}
