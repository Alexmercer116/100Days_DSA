#include<bits/stdc++.h>

using namespace std;

//general approach:Extraction of digits
int countDigits(int N){
   int count=0;
   while(N>0){
      count++;
      N/=10;      
   }
   return count;
   //TC:O(N)
}

//string approach 
int countDigits_str(int N){
   string num=to_string(N);
   return num.size();
   // TC:O(log(n))
}

int main(){
   int N;
   cout<<"Enter N: ";
   cin>>N;
   int digits=int(log10(N))+1;//->TC:O(1)
   cout<<digits<<" "<<countDigits(N)<<" "<<countDigits_str(N);


}