// This is for practice purpose only
// These algorithms are inefficient since it uses much stack space.


#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

void recbubble(vector<int> &v,int n){
   //Base Case:n==1;
   if(n==1) return;
   for(int j=0;j<=n-2;j++){
      if(v[j]>v[j+1]) swap(v[j],v[j+1]);
   }

   recbubble(v,n-1);
}

void insertion_sort(vector<int> &v, int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 and v[j - 1] > v[j]) {
        swap(v[j],v[j-1]);
        j--;
    }

    insertion_sort(v, i + 1, n);
}

int main(){
   vector<int> v{10,4,2,1,3};
   int n=v.size();
   cout<<"Before sort: "<<endl;
   display(v);
   // recbubble(v,n);
   insertion_sort(v,0,n);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}