// Finding maximum consecutive 1's in an array of 1's and 0's

#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v){
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

int maxConsecutiveones(vector<int> v){
   int count=0,max_count=0;
   for(int i=0;i<v.size();i++){
      // if current value is 1 increase the count
      if(v[i]==1) count++;
      // if 0 make the count 0
      else count=0;
      // getting the max consecutive ones using max
      // assign the attained count to a max_count variable
      max_count=max(count,max_count);
   }
   return max_count;
}

int main(){
   vector<int> v(6);
   cout<<"Input elements"<<endl;
   for(int &i:v){
      cin>>i;
   }
   display(v);
   cout<<maxConsecutiveones(v);

}