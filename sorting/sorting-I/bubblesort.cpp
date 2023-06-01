//Bubble Sort: Pushes max ele to the last by Adjacent swapping of the values.
// Worst caseTC: O(n*n) Best case: O(n)


#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

vector<int> bubbleSort(vector<int> &v){
   int n=v.size();
   for (int i=n-2;i>=1;i--){
      bool swapped=false;
      for(int j=0;j<=i;j++){
         if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
            swapped=true;
         }
         if(!swapped) break;
      }
   }
   return v;
}

int main(){
   vector<int> v{10,4,2,1,3};
   cout<<"Before sort: "<<endl;
   display(v);
   bubbleSort(v);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}