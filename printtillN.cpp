#include<iostream>
using namespace std;

void dec(int n ){
    if(n==0){
        cout<<n;
         return  ;
    }
   
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n ){
     if(n==0){
        cout<<n<<" ";
         return  ;
    }
    inc(n-1);
    cout<<n<<" ";
   
   
    
    
}

int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}