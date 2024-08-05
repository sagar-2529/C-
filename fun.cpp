#include<iostream>
using namespace std;
int factorial(int num1){
    int ans=1;
    int num=2;
    int fact;
    for(int i=1; i<num1; i++){
       ans= ans*num;
       num= num+1;

    }
    return ans;
}


    int ncr(int num1, int  num2){
        int ans= factorial(num1)/(factorial(num2)*factorial(num1-num2));
       return ans;
     }
    int main(){
        int ans= ncr(6,2);
        cout<< " answer is "<<ans<< endl;
        
    }