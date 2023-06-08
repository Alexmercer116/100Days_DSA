#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

int largeElement(vector<int> v){
   int largest=0;
   for(int i : v){
      if(i>largest) largest=i;
   }
   return largest;
}

int main(){
   vector<int> v{14,9,15,12,6,8,13};
   display(v);
   cout<<"Largest Element : "<<largeElement(v);
   return 0;
}
