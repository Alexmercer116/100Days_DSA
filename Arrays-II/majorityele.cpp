#include<bits/stdc++.h>

using namespace std;

// Betterapproach.TC:O(N)[Two traverse] SC:O(N)
int majorityEle(vector<int>& v){
   int n=v.size();
   unordered_map<int,int> mp;
   for (int i:v){
      mp[i]++;
   }
   for(int i:v){
      if(mp[i]>n/2) return i;
   }
   return -1;
}

// Moore's Voting Algorithm
// Optimal.TC:O(N)[SIngle] Sc:O(N)
int votingAlgo(vector<int>& v){
   int ele=0;
   int cnt=0;
   int n=v.size();
   // Finding the candidate element
   for(int i=0;i<n;i++){
      if(cnt==0){
         cnt=1;
         ele=v[i];
      }
      else if(v[i]==ele){
         cnt++;
      }
      else cnt--;
   }
   /*
   Only when there is a doubt about the majority
   // validating the candidate element
   cnt=0;
   for(int i:v){
      if(i==ele) cnt++;
   }
   if(cnt>(n/2)){
      return ele;
   }*/
   return ele;
}

int main(){
   vector<int> nums={2,2,1,1,1,2,2};
   cout<<votingAlgo(nums);
   return 0;
}