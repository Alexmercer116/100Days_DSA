#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
   for(int i=2;i<=sqrt(n);i++){
      if(n%i==0) return false;
   }
   return true;
}

int main() {
  int n = 11;

  bool ans = isPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
  return 0;
}