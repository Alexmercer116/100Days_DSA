#include<iostream>
#include<vector>

using namespace std;


void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}


int secondLargest(vector<int> v){
   int largest=v[0],slargest=INT16_MIN;
   for(int i=1;i<v.size();i++){
      if(v[i]>largest){
         slargest=largest;
         largest=v[i];
      }
      else if(v[i]<largest and v[i]>slargest){
         slargest=v[i];
      }
   }
   return slargest;
}

int secondSmallest(vector<int> v){
   int smallest=v[0],ssmallest=INT16_MAX;
   for(int i=1;i<v.size();i++){
      if(v[i]<smallest){
         ssmallest=smallest;
         smallest=v[i];
      }
      else if(v[i]>smallest and v[i]<ssmallest) ssmallest=v[i];
   }
   return ssmallest;
}

// vector<int> getSecondOrderEle(vector<int> v){
//    int slargest=secondLargest(v);
//    int ssmallest=secondSmallest(v);
//    return {slargest,ssmallest};
// }



int main() {
   vector<int> v{14,9,15,12,6,8,13};
   display(v);
   int second_largest=secondLargest(v);
   int second_smallest=secondSmallest(v);
   cout<<"Second smallest is "<<second_smallest<<endl;
   cout<<"Second largest is "<<second_largest<<endl;
   return 0;
}


