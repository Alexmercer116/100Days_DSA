// Given an array of integers, rotating array of elements by k elements left

#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

void Reverse(vector<int>&v,int start,int end){
   // reversing the elements
   while(start<=end){
      swap(v[start],v[end]);
      start++;
      end--;
   }
}

void rotateLeft(vector<int>&v,int n,int k){
   // rotates the elements by k places to left
   
   // reverse first k elements
   Reverse(v,0,k-1);
   // reverse remaining n-k elements
   Reverse(v,k,n-1);
   // Finally reverse whole array
   Reverse(v,0,n-1);
}

int main(){
   vector<int> v{1,2,3,4,5,6,7};
   cout<<"Before Shifting: "<<endl;
   display(v);
   rotateLeft(v,7,2);
   cout<<"After Shifting: "<<endl;
   display(v);
   return 0;
}