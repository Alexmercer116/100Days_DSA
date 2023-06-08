// Linear search in an array of elements

#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int> v,int num){
   for(int i=0;i<v.size();i++){
      if(v[i]==num) return i;
   }

   return -1;
}

int main(){
   vector<int> v{1,2,3,4,5};
   cout<<linearSearch(v,3);
   return 0;
}

