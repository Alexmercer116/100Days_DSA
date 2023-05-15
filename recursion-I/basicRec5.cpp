#include<iostream>
using namespace std;

//factorial of number using recursion
int factN(int n){
   if(n==0) return 1;
   return n*factN(n-1);
}

int main(){
   int n;
   cout<<"Enter N: ";
   cin>>n;
   cout<<factN(n)<<" ";
   return 0;
}