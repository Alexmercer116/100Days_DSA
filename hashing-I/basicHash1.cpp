#include<bits/stdc++.h>
using namespace std;

//counting no of times an element occurs in an array
//in simple terms number hashing

void display(int *arr){
   for(int i=0;i<10;i++) cout<<arr[i]<<" ";
}

int main(){
   int arr[10];
   for(int i=0;i<10;i++) cin>>arr[i];
   display(arr);
   //precompute using hash array
   int hash_[10]={0};//hash array initialised with 0
   for (int i=0;i<10;i++){
      hash_[arr[i]]++;
   }

   //fetch
   int q;//no of queries
   cin>>q;
   while(q--){
      int num;
      cin>>num;
      //fetch
      cout<<hash_[num]<<" ";
   }

}