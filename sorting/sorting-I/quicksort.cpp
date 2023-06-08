#include<iostream>
#include<vector>

using namespace std;

// In quick sort we choose pivot element and place elements less than pivot on its left
// greater than pivot on its right

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}


int partition(vector<int>&v,int low,int high){
   // setting pivot and left and right pointers
   int pivot=v[low],i=low+1,j=high;
   while(i<=j){
      // if elements on left is less than pivot continue 
      if(v[i]<=pivot) i++;
      // if elements on right is greater than pivot continue
      else if(v[j]>pivot)j--;
      // if neither cases true then swap left and right values
      else{
         swap(v[i],v[j]);
         i++;
         j--;
      } 

   }
   // swap the pivot elemet with the j index element
   swap(v[low],v[j]);
   // getting the partition index
   return j;
}

void quickSort(vector<int> &v,int low,int high){
   // if low is less than high then there are atleast two elements in array
   if(low<high){
      // getting the partition index
      int partIndex=partition(v,low,high);
      // applying quicksort to left part of array
      quickSort(v,low,partIndex-1);
      // applying quciksort to right part of array
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




