#include<iostream>
using namespace std;

int fib(int n){
    int a=0;
    int b=1;
    for(int i=1; i<(n-1); i++){
        int nt= a+b;
           a=b;
         b= nt;
         
      
      

    }
    return b;
}

int main(){
    int a;
    cin>> a;
    int ans= fib(a);
    cout<< "answer is: "<< ans<<endl;


}