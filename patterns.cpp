//Author: Akram Shaik
//Dated: Apr23,2023
//This is module containing of patterns
//Resource: strivers SDE 

#include<bits/stdc++.h>

using namespace std;

//Easy pace
void pattern1(int n) {
   for (int i=0;i<n;i++){
      for(int j=0;j<n;j++) cout<<"* ";
      cout<<endl;
   }
   cout<<endl;
}

void pattern2(int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++) cout<<"* ";
      cout<<endl;
   }
   cout<<endl;
}

void pattern3(int n){
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++) cout<<j<<" ";
      cout<<endl;
   }
   cout<<endl;
}

void pattern4(int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++) cout<<i+1<<" ";
      cout<<endl;
   }
   cout<<endl;
}

void pattern5(int n){
   for(int i=n;i>0;i--){
      for(int j=0;j<i;j++) cout<<"* ";
      cout<<endl;
   }
   cout<<endl;
}

void pattern6(int n){
   for(int i=n;i>=1;i--){
      for(int j=1;j<=i;j++) cout<<j<<" ";
      cout<<endl;
   }
   cout<<endl;
}

//Medium pace && Hard pace

void pattern7(int n){
   //outer loop
   for(int i=1;i<=n;i++){
      //space
      for(int j=0;j<=n-i-1;j++) cout<<" ";
      //stars
      for(int j=1;j<=2*i-1;j++) cout<<"*";
      cout<<endl;
   }
}

void pattern8(int n){
   //outer loop
   for(int i=n;i>=1;i--){
      //space
      for(int j=0;j<=n-i-1;j++) cout<<" ";
      //stars
      for(int j=1;j<=2*i-1;j++) cout<<"*";
      cout<<endl;
   }
}

void pattern9(int n){
   pattern7(n);
   pattern8(n);
}

void pattern10(int n){
   for(int i=1;i<=2*n-1;i++){
      int stars = (i>n)?2*n-i:i;
      for(int j=1;j<=stars;j++) cout<<"*";
      cout<<endl;
   }
}

void pattern11(int n){
    for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++) cout<<(i+j+1)%2<<" ";
      cout<<endl;
   }
   cout<<endl;
}

void pattern12(int n){
   for(int i=1;i<=n;i++){
      //number
      for(int j=1;j<=i;j++) cout<<j;
      //spaces
      for(int s=1;s<=2*(n-i);s++) cout<<" ";
      //number
      for(int j=i;j>=1;j--) cout<<j;
      cout<<endl;
   }
}

void pattern13(int n){
   int num=1;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++) cout<<num++<<" ";
      cout<<endl;
   }
}

void pattern14(int n){
   for(int i=1;i<=n;i++){
      for(int j=0;j<i;j++) cout<<char('A'+j);
      cout<<endl;
   }
}

void pattern15(int n){
   for(int i=n;i>=1;i--){
      for(int j=0;j<i;j++) cout<<char('A'+j);
      cout<<endl;
   }
}

void pattern16(int n){
   for(int i=1;i<=n;i++){
      for(int j=0;j<i;j++) cout<<char('A'+i-1);
      cout<<endl;
   }
}

void pattern17(int n){
   for(int i=0;i<n;i++){
      //spaces
      for(int s=0;s<n-i-1;s++) cout<<" ";
      char ch = 'A';
      //chars
      for(int j=1;j<=(2*i+1);j++){
            cout<<ch;
            if(j<=(2*i+1)/2) ch++;
            else ch--;
      }
      cout<<endl;
   }
}

void pattern18(int n){
   for(int i=0;i<n;i++){
      for(char j='E'-i;j<='E';j++) cout<<j;
      cout<<endl;
   }
}

void pattern19(int n){
   for(int i=n;i>=1;i--){
      //number
      for(int j=i;j>=1;j--) cout<<'*';
      //spaces
      for(int s=1;s<=2*(n-i);s++) cout<<" ";
      //number
      for(int j=1;j<=i;j++) cout<<'*';
      cout<<endl;
   }
   for(int i=1;i<=n;i++){
      //number
      for(int j=i;j>=1;j--) cout<<'*';
      //spaces
      for(int s=1;s<=2*(n-i);s++) cout<<" ";
      //number
      for(int j=1;j<=i;j++) cout<<'*';
      cout<<endl;
   }
}

void pattern20(int n){
   int space=2*n-2;
   for(int i=1;i<=2*n-1;i++){
      int star = (i>n)?2*n-i:i;
      //stars
      for(int j=1;j<=star;j++) cout<<"*";
      //spaces
      for(int j=1;j<=space;j++) cout<<' ';
      //stars
      for(int j=1;j<=star;j++) cout<<'*';
      if(i<n) space-=2;
      else space+=2;
      cout<<endl;
   }
}

void pattern21(int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         if(i==0 or j==0 or i==n-1 or j==n-1) cout<<'*';
         else cout<<' ';
      }
      cout<<endl;
   }
}

void pattern22(int n){
   for(int i=0;i<2*n-1;i++){
      for(int j=0;j<2*n-1;j++){
         int top = i;
         int left = j;
         int right = (2*n-2)-j;
         int bottom = (2*n-2)-i;
         cout<<n-min(min(top,bottom),min(left,right))<<" ";
      }
      cout<<endl;
   }
}

int main(){
   pattern1(5);
   pattern2(5);
   pattern3(5);
   pattern4(5);
   pattern5(5);
   pattern6(5);
   pattern7(5); 
   cout<<endl;
   pattern8(5);
   cout<<endl;
   pattern9(5);
   cout<<endl;
   pattern10(5);
   pattern11(5);
   pattern12(4);
   pattern13(5);
   pattern14(5);
   cout<<"-----"<<endl;
   pattern15(5);
   cout<<"-----"<<endl;
   pattern16(5);
   pattern17(4);
   pattern18(5);
   pattern19(5);
   pattern20(5);
   pattern21(5);
   pattern22(5);
}