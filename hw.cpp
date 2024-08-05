#include<iostream>
using namespace std;

int nsb(int n){
       int count=0;
     
    while(n){
        
            count= count + n&1;
            n >>= 1;
         }
   return count;


}
int main(){
    int a;
    cin>> a;
    int ans= nsb(a);
    cout<< " answer is "<< ans<< endl;

}