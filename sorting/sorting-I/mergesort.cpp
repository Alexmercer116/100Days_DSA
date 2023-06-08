#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}


void merge(vector<int> &v,int low,int mid,int high){
   vector<int> temp;
   int l=low,r=mid+1;
   while(l<=mid and r<=high){
      if(v[l]<=v[r]){
         temp.push_back(v[l]);
         l++;
      }
      else{
         temp.push_back(v[r]);
         r++;
      }
   }
   while(l<=mid){
      temp.push_back(v[l]);
      l++;
   }
   while(r<=high){
      temp.push_back(v[r]);
      r++;
   }
   
   for(int i=low;i<=high;i++){
      v[i]=temp[i-low];
   }
}


void mergesort(vector<int> &v,int low,int high){
   if(low>=high) return;
   // Divide the array
   int mid=low+(high-low)/2;

   mergesort(v,low,mid);
   mergesort(v,mid+1,high);
   merge(v,low,mid,high);
}


int main(){
   vector<int> v{14,9,15,12,6,8,13};
   int n=v.size();
   cout<<"Before sort: "<<endl;
   display(v);
   mergesort(v,0,n-1);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}