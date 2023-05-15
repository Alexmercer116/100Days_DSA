#include<iostream>
using namespace std;

//print 1-N using recursion
void print2(int n){
   if(n<1)return;
   print2(n-1);
   cout<<n<<" ";
}

int main(){
   int n;
   cout<<"Enter N: ";
   cin>>n;
   print2(n);
   return 0;
}