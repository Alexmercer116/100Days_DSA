#include<iostream>
using namespace std;

//print N-1 using recursion
void print2(int n){
   if(n<1)return;
   cout<<n--<<" ";
   print2(n);
}

int main(){
   int n;
   cout<<"Enter N: ";
   cin>>n;
   print2(n);
   return 0;
}