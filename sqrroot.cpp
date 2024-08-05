#include<iostream>
using namespace std;

int sqroot(int n){
    int start=0;
    int end= n;
    int mid = ( start + end) / 2;

    while( start <= end ){
        if(mid*mid== n){
            return mid;
        }

      else if(mid*mid>n){
        end = mid - 1;
      }
      else{
        start= mid +1;
      }
      mid = (start + end)/2;

    }
    return mid;
}
double precision(int n, int precision, int ans){
     double factor=1;
     double anss= ans;
     for(int i=0; i<precision; i++){
      factor = factor/10;
      for(double j=anss; j*j<n; j= j+ factor){
         anss=j;

      }

     }
     return anss;
}
int main(){
   int n;
   cout<< " enter the number : ";
   cin>> n;

    int ans= sqroot(n);

    double perfect=  precision(n, 3, ans);





    cout<< "perfect answer is: "<< perfect;
}