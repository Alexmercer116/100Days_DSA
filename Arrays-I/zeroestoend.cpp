// Moving zeroes to the end of an array

#include<iostream>
#include<vector>

using namespace std;


void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}


void moveZeroes(vector<int> &v){
   int k=0,n=v.size();
   // finding first occurence of zero
   while(k<n){
      if(v[k]==0) break;
      else k++;
   }

   // parsing the elements from the first occurence of zero
   int i=k,j=k+1;
   while(i<n and j<n){
      if(v[j]!=0){
         swap(v[i],v[j]);
         i++;
      }
      j++;
   }
}


int main(){
   vector<int> v{1,2,0,1,0,4,0};
   cout<<"Before: "<<endl;
   display(v);
   moveZeroes(v);
   cout<<"After: "<<endl;
   display(v);
   return 0;
}