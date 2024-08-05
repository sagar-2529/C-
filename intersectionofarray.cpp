#include<iostream>
using namespace std;

int intersection( int arr[], int brr[], int n, int m){
    int ans;
    

    for(int i=0; i<n; i++){

        for(int j= 0; j<m; j++ ){
           if(arr[i]==brr[j]){
        
              ans=arr[i];
                  cout<< ans<< "  ";
                  brr[j]= -7890;


            
            break;
            
        }


    }

}
}

int main(){

    int arr[9]={1,2,3,4,5,6,7,8,4};
    
    int brr[3]={2,5,4};

    intersection(arr,brr, 9,3);


}