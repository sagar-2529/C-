#include<iostream>
using namespace std;

void printarray(int arr[], int n){
        for(int i=0 ; i<n; i++){
        cout<< arr[i]<< "  ";
    } cout<< endl;

}
 
void swap_number( int arr[], int size){

    for(int i=0; i<size; i+=2)
    if(i+1<size){
        swap(arr[i], arr[i+1]);
    }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,7};

    swap_number( even, 6);
    printarray(even, 6);
    swap_number( odd, 5);
    printarray(odd, 5);


}


