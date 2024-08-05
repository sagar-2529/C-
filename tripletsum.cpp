#include<iostream>
using namespace std;

int main(){
   int sum=6;

   int arr[5]={2,2,2,4,5};

   for( int i=0; i<5; i++){
    for(int j= i+1; j<5; j++){
        for(int k=j+1; k<5; k++){
        if( arr[i] +arr[j]+arr[k]==sum){
            cout<< arr[i]<<"  "<< arr[j]<< "  " << arr[k]<< "  " ;
             

        }

    }
   }
}
}