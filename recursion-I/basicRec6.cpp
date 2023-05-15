#include<iostream>
using namespace std;

void display(int arr[],int n){
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

//reverse an array using recursion
//base case start<end
void reverseArray(int *arr,int start,int end){
   if(start<end){
      swap(arr[start],arr[end]);
      reverseArray(arr,start+1,end-1);
   }
}
int main(){
   int arr[] = { 5, 4, 3, 2, 1 };
   int n=sizeof(arr)/sizeof(int);
   reverseArray(arr,0,n-1);
   display(arr,n);
}