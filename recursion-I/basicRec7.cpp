#include<iostream>
using namespace std;

//checking palindrome using recursion
//base case start>=end
bool isPalindrome(int start,string s){
   if(start>=s.length()/2) return true;
   if(s[start]!=s[s.length()-start-1]) return false;
   return isPalindrome(start+1,s);
}

int main(){
  string s;
  cout<<"Enter a string: ";
  cin>>s;
  cout<<(isPalindrome(0,s)?"Yes":"No");
}