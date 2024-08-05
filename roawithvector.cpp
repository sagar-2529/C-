#include<iostream>
#include<vector>
using namespace std;

vector<int> roa(vector<int> v ){
    int s=0 ; 
    int e= v.size()-1;
    while(s<e){
        swap(v[s], v[e]);
        s++;
        e--;

    }
    return v;
}
void printvector (vector<int> a){
    for(int i=0; i< a.size(); i++){
        cout<< a[i]<< " ";
    }
    
}
int main(){
    vector<int> a;
    a.push_back(1);
     a.push_back(6);
      a.push_back(9);
       a.push_back(11);
        a.push_back(23);
        
        vector<int> ans= roa(a);
        vector<int> printvector(a);

}