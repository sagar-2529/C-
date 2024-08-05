#include<iostream>
using namespace std;

int main(){
    int amount;
    int a,b,c;
    cout<< "enter the amount:"<<endl;
    cin>> amount;
    switch ( amount>=100 ){
        case 1: a= amount/100;
        cout<< " the no of 100 notes is : "<< a<< endl;
        amount= amount % 100;
    }
    switch( amount >= 20){
        case 1: b= amount/20;
         cout<< " the no of 20 notes is : "<< b<< endl;
         amount= amount%20;

    }
    switch(amount>=1){
        case 1 : c= amount/1;
         cout<< " the no of 1 notes is : "<< c<< endl;
         


    }

}