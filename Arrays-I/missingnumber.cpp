// Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

// Brute Force is to perform linear search.

// summation
int findNumber(vector<int> v)
{
   int n=v.size()+1,totalSum=n*(n+1)/2;
   int arrsum=0;
   for(int i=0;i<n;i++){
      arrsum+=v[i];
   }

   return (totalSum-arrsum);
}

// xor : is better than sum because in sum 
// we have to worry about size which exceeds integer storage value
// In this there is no worry.It works fine.
int missingNumber(vector<int> v)
{
   // xor properties
   // a^a=0
   // 0^a=a
   int n=v.size(),xor1=0,xor2=0;
   for(int i=0;i<n-1;i++){
      xor2=xor2^v[i];
      xor1=xor1^(i+1);
   }
   xor1=xor1^n;
   return (xor1^xor2);
}

int main(){
   vector<int> v{1,2,3,5,6};
   cout<<"Missing Number is : "<<missingNumber(v);
   return 0;
}