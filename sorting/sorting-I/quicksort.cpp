#include<iostream>
#include<vector>

using namespace std;


void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}


int partition(vector<int>&v,int low,int high){
   int pivot=v[low],i=low+1,j=high;
   while(i<=j){
      if(v[i]<=pivot) i++;
      else if(v[j]>pivot)j--;
      else{
         swap(v[i],v[j]);
         i++;
         j--;
      } 

   }
   swap(v[low],v[j]);
   return j;
}

void quickSort(vector<int> &v,int low,int high){
   if(low<high){
      int partIndex=partition(v,low,high);
      quickSort(v,low,partIndex-1);
      quickSort(v,partIndex+1,high);
   }
}


int main(){
   vector<int> v{14,9,15,12,6,8,13};
   cout<<"Before sort: "<<endl;
   display(v);
   quickSort(v,0,v.size()-1);
   cout<<"After sort: "<<endl;
   display(v);
   return 0;
}




