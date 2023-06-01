// Insertion sort:like arranging play cards in hand
// best case TC:O(N) worst case : O(N*N)

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

vector<int> insertionSort(vector<int> &v){
   int n=v.size();
   for(int i=1;i<n;i++){
      int j=i;
      while(j>0 and v[j-1]>v[j]){
         swap(v[j],v[j-1]);
         j--;
      }
   }
   return v;
}


int main(){
   vector<int> v{14,9,15,12,6,8,13};
   cout<<"Before sort: "<<endl;
   display(v);
   insertionSort(v);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}

