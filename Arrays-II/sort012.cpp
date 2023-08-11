#include<iostream>
#include<vector>

using namespace std;

// TC=O(N)[2 passes] SC:O(1)
/*
void sorted(vector<int> &v){
   int z=0;
   int one=0;
   int two=0;
   for(int i=0;i<v.size();i++){
      if(v[i]==0) z++;
      if(v[i]==1) one++;
      if(v[i]==2) two++;
   }
   v.clear();
   while(z>0){v.push_back(0);z--;}
   while(one>0){v.push_back(1);one--;}
   while(two>0){v.push_back(2);two--;}
   
}
*/


// TC=O(N)[1 pass] SC:O(1)
// DNF Algorithm
void sortArray(vector<int>& v){
   int low=0,mid=0,high=v.size()-1;
   while(mid<=high){
      if(v[mid]==0){
         swap(v[low],v[mid]);
         low++;
         mid++;
      }
      else if(v[mid]==1){
         mid++;
      }
      else{
         swap(v[mid],v[high]);
         high--;
      }
   }
}

int main(){
   vector<int> v={2,0,2,1,1,0};
   cout<<"Before: "<<endl;
   for(int i:v){
      cout<<i<<" ";
   }
   cout<<endl;
   cout<<"After: "<<endl;
   sortArray(v);
   for(int i:v){
      cout<<i<<" ";
   }
   return 0;
}