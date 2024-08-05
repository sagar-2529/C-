#include<iostream>
using namespace std;

bool isprime(int n){

    for(int i=2; i<n; i++){
        if (n%i==0){
            return 1;
        }
        return 0;
    }
}

int main(){
    int n;
    cin>> n;
    int ans= isprime(n);
    if (isprime(n)){
        cout<< " no is not prime"<< endl;
    }
        else{
            cout<< " no is prime"<< endl;
        }
    
}