#include<iostream>
#include<vector>

using namespace std;

bool isArraySorted(vector<int> v){
   int i=0,n=v.size();
   for(int i=0;i<n-1;i++){
      if (v[i] > v[i + 1]) {
         return false;  // If any adjacent elements are out of order, the array is not sorted
      }
   }
   return true;
}

int main(){
   vector<int> v{14,9,15,12,6,8,13};
   if(isArraySorted(v)) cout<<"Sorted";
   else cout<<"Not Sorted";
   return 0;
}