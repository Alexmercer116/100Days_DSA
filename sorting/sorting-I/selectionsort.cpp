// Selection sort : take a minimum value and swap the value.
// TC: O(n*n)



#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

vector<int> selectionSort(vector<int> &v){
   int n=v.size();
   for (int i=0;i<=n-2;i++){
      int min=i;
      for(int j=i+1;j<=n-1;j++){
         if(v[min]>v[j]) min=j;
      }
      swap(v[min],v[i]);
   }
   return v;
}

int main(){
   vector<int> v{10,4,2,1,3};
   cout<<"Before sort: "<<endl;
   display(v);
   selectionSort(v);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}