#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

int binarySearch(vector<int> &v,int low,int high,int key){
   while(low<=high){
      int mid=low+(high-low)/2;
      if(v[mid]==key) return mid;
      else if(v[mid]>key) high=mid-1;
      else low=mid+1;
   }
   return low;
}

vector<int> binaryInsertionSort(vector<int> &v){
   int n=v.size();
   for(int i=1;i<n;i++){
      int key=v[i];
      int pos=binarySearch(v,0,i-1,key);
      for(int j=i-1;j>=pos;j--){
         v[j+1]=v[j];
      }
      v[pos]=key;
   }
   return v;
}


int main(){
   vector<int> v{14,9,15,12,6,8,13};
   cout<<"Before sort: "<<endl;
   display(v);
   binaryInsertionSort(v);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}