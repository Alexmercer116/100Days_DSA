#include<iostream>

using namespace std;

//fibanocci using recursion
int fib(int n){
   if(n<=1) return n;
   return fib(n-1)+fib(n-2);
}

int main(){
   int n;
   cout<<"Enter N: ";
   cin>>n;
   cout<<fib(n)<<" ";
   return 0;
}