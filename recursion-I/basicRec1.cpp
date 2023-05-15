#include<bits/stdc++.h>

using namespace std;

// print name n times using recursion
void print1(int n){
   if(n--==0) return;
   cout<<"Hello"<<" ";
   print1(n);
}

int main(){
   print1(3);
   return 0;
}