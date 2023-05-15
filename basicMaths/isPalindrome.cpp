#include<bits/stdc++.h>

using namespace std;

//conevert to string and check
bool isPalindrome(int N){
   string num=to_string(N);
   int i=0,j=num.length()-1;
   while(i<j){
      if(num[i]!=num[j]) return 0;
      i++;
      j--;
   }
   //TC:O(N)
   return 1;
}

int main(){
   int N;
   cout<<"Enter N: ";
   cin>>N;
   string res=isPalindrome(N)?"Palindrome":"Not a palindrome";
   cout<<res;
}
