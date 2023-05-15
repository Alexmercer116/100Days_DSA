#include<bits/stdc++.h>

using namespace std;

bool isArmStrong(int N){
   int dig=ceil(log10(N));
   int sum=0;
   int X=N;
   while(X>0){
      sum +=pow(X%10,dig);
      X/=10;
   }
   if(N==sum) return 1;
   return 0;
}

int main(){
   int N;
   cout<<"Enter N: ";
   cin>>N;
   cout<<(isArmStrong(N)?"Yes":"No");

}