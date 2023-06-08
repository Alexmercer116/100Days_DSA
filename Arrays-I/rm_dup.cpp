// Question given is:
// Remove Duplicates in-place from a sorted array

#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

int removeDup(vector<int> &v){
   int i=0,j=1;
   while(j<v.size()){
      if(v[j]!=v[i]) v[++i]=v[j];
      j++;
   }
   // length of array after removing duplicates
   return i+1;
}

int main(){
   vector<int> v{1,1,2,2,2,3,3};
   cout<<"Before Removing duplicates: "<<endl;
   display(v);
   int k = removeDup(v);
   cout<<"After Remving duplicates: "<<endl;
   for(int i=0;i<k;i++) cout<<v[i]<<" ";
   return 0;
}