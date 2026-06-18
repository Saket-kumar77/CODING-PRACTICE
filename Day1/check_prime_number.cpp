#include<iostream>
using namespace std;
int main(){
int arr[]={11,10,13,9,17,19,20};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
  int prime=1;
  int num=arr[i];
  if(num<=1)
    prime=0;
  else{
    for(int j=2;j*j<=num;j++){
      if(num%j==0){
        prime=0;
        break;
      }
    }
  }
if(prime)
  cout<<num<<" ";
}
}
