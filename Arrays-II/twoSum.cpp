#include<bits/stdc++.h>

using namespace std;

// hashing approach
vector<int> twoSum(vector<int> &v,int tar)
{
   unordered_map<int,int> mp;
   for(int i=0;i<v.size();i++){
      int val=tar-v[i];
      if(mp.find(val)!=mp.end()){
         return {mp[val],i};
      }
      else{
         mp[v[i]]=i;
      }
   }
   return {-1,-1};
} 

// two pointer approach 
/*
vector<int> twoSum(int n, vector<int> &arr, int target) {
   unordered_map<int, int> mpp;
   // sort the array=>O(N*logN)
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {left,right};
        }
      //   sum<tar increase left pointer since we need larger number
        else if (sum < target) left++;
      //   if sum>tar decrease right pointer since we need lesser number
        else right--;
    }
    return {-1,-1};
}
*/

int main()
{
   int n = 5;
   vector<int> arr = {2, 6, 5, 8, 11};
   int target = 14;
   vector<int> v=twoSum(arr,target);
   for (int i:v) cout<<i<<" ";
   return 0;
}