#include<iostream>
using namespace std;

int main(){

    int arr[3];

    for(int i=0; i<3; i++){
        cin>> arr[i];
    }
    int max_element = arr[0];
    for(int i=1; i<3; i++){
        if (arr[i]> max_element){
            max_element = arr[i];
        }
       
    }
      int min_element = arr[0];
        
       for(int i=1; i<3; i++){
        if (arr[i]< min_element){
            min_element = arr[i];
        }
       

    } 
    cout<< " max element is: "<< max_element << endl;
     cout<< " min element is: "<< min_element << endl;
}
