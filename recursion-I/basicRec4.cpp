#include<iostream>
using namespace std;

//sum of N natural numbers using recursion
int sumN(int n){
   if(n==0) return 0;
   return n+sumN(n-1);
}

int main(){
   int n;
   cout<<"Enter N: ";
   cin>>n;
   cout<<sumN(n)<<" ";
   return 0;
}