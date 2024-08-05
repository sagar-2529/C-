#include<iostream>
using namespace std;

int main(){
   int sum=0;

   int arr[5]={1,-3,3,4,5};

   for( int i=0; i<5; i++){
    for(int j= i+1; j<5; j++){
        if( arr[i] +arr[j]==sum){
            cout<< min(arr[i],arr[j])<< "  ";
             cout<< max(arr[i],arr[j])<< "  ";

        }
    }
   }
}