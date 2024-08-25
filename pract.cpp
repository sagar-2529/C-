#include<iostream>
using namespace std;

int leftindex ( int arr[], int n, int key){

    int s =0;
    int e= n-1;
    int mid= s + (e - s)/2;
    int ans= -1;
    while(s<=e){

        if(arr[mid]==key){
            ans= mid;
            e = mid - 1;

        }
        else if( key> arr[mid] ){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ( e - s )/2;
    }
    return ans;
}
int rightindex ( int arr[], int n, int key){

    int s =0;
    int e= n-1;
    int mid= s + (e - s)/2;
    int ans= -1;
    while(s<=e){

        if(arr[mid]==key){
            ans= mid;
            s = mid + 1;

        }
        else if( key> arr[mid] ){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ( e - s)/2;
    }
    return ans;
}

int main(){

    int even[6] = {1,2,3,3,3,5};

    int ans= leftindex( even, 6, 3);

    int sans= rightindex(even, 6, 3);

    cout<< " leftmost index is : "<< ans<< endl;

        cout<< " rightmost index is : "<< sans;
        cout << " this is code";

    

} 