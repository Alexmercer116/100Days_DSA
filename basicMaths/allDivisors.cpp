#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){
   for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
         cout<<i<<" ";
         if(i!=n/i) cout<<n/i<<" ";
      }
   }
   cout<<"\n";
}

int main(){
   int N;
   cout<<"Enter N: ";
   cin>>N;
   printDivisors(N);
   return 0;
}