#include<bits/stdc++.h>

using namespace std;

//general approach:Extraction of digits
int reverseNum(int N){
   int rev=0;
   while(N>0){
      rev=rev*10+N%10;
      N/=10;      
   }
   return rev;
   //TC:O(N)
}


int main(){
   int N;
   cout<<"Enter N:";
   cin>>N;
   cout<<reverseNum(N);
}
