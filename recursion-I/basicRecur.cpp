#include<bits/stdc++.h>
using namespace std;


void print(int c){
   if(c==3) return;
   cout<<c++<<" ";
   print(c);
}

int main(){
   print(0);
   return 0;
}
