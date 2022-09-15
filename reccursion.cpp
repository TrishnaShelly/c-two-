#include<iostream>
using namespace std;
/* first and last occurence
int first(int arr[],int n, int i, int key){
    if(i==n)
    return -1;
    if( arr[i]==key)   return i;
    return (first(arr,n,i+1,key));
}
int last(int arr[],int n, int i, int key){
    if(i==0)
    return -1;
    if( arr[i]==key)   return i;
    return (last(arr,n,i-1,key));
}
int main(){
    int n,key; cin>>n; cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int result= first(arr,n,0,key);
    cout<<result<<endl;
    int r= last(arr,n,n-1,key);
    cout<<r;
    return 0;
}
//print in ascending and decending order
void dec(int n){
    if(n==0)
    return ;
    cout<<n<<endl;
    dec(n-1);

}
void inc(int n){
    if(n==0)
    return ;
   
    inc(n-1);
     cout<<n<<endl;
}

int main(){
     int n ;
     cin>>n;
     dec(n);
     inc(n);
    return 0;
}&&*/
//check if array is sorted or not
bool sorted(int arr[],int n){
    if(n==0)
    return true;
    bool restArray=sorted(arr+1,n-1);
    if(arr[0]<arr[1]&& restArray)
    return true;
    return false;
}
int main(){
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<sorted(arr,n);
    return 0;
}