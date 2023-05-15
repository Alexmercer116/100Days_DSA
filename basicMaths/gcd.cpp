#include<bits/stdc++.h>
using namespace std;

//general approach
int gcd(int a,int b){
   int gcd=1;
   for(int i=1;i<=min(a,b);i++) {
      if(a%i==0&&b%i==0)gcd=i;
   }
   return gcd;
}

// Eculedian algorithm
//the case here is b>a
//following is a recursive approach
int gcd_re(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

//Eculedian algorithm gcd(a,b)=gcd(a%b,b)(where a>b)
int gcd_e(int a,int b){
   while(a>0&&b>0){
      if(a>b) a%=b;
      else b%=a;
   }
   if(a==0) return b;
   else return a;
}

int main(){
   cout<<gcd(9,12)<<endl;
}