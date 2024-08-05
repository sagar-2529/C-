#include<iostream>
#include<cmath>
using namespace std;

int sumofarrays (int arr1[], int arr2[], int n, int m){
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum+ arr1[i]*( pow(10, n-i-1));
    }
     for(int j=0; j<m; j++){
        sum = sum+ arr2[j]*(pow(10, m-j-1));
    }
    return sum;
}
void printarray( int arr[], int sum,int n){
    int factor=0;
    for(int i=0; i<n; i++){
        arr[i]= (sum/pow(10,n-i-1))-(factor*1);
        factor= factor+10;

    }
    for(int i=0; i<n; i++){
        cout<< arr[i]<< endl;
    }

}
int main(){
    int arr1[4]={1,2,3,4};
    int arr2[3]={3,4,5};
    int arr[4];
   
    int ans= sumofarrays (arr1, arr2,4,3);
     cout<< ans<< endl;
     cout<< ans/ pow(10, 3)<< endl;
   printarray(arr,ans, 4);
}