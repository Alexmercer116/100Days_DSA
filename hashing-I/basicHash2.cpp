#include<bits/stdc++.h>
using namespace std;

//counting no of times a char occurs in a string
//in simple terms character hashing


int main(){
   string s;
   cout<<"Enter a string: ";
   cin>>s;
   //precompute using hash array
   int hash_[26]={0};//hash array initialised with 0
   //26 alphabets
   //here considered only for lower case
   //can use hash_[256] with 256 ASCII values 
   //then the formula c-'a' is not required 
   //hash_[c] is enough it maps to its corresponding ascii value
   for(char c:s){
      hash_[c-'a']++;
      //c-'a' gives the index value
   }

   int q;//no of queries
   cin>>q;
   while(q--){
      char c;
      cin>>c;
      //fetch
      cout<<hash_[c-'a']<<endl;
   }

}