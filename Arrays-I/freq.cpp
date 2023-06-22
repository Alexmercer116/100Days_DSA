// Find the number that appears once, and the other numbers twice

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int getSingleElement(vector<int> v){
   map<int,int> mp;
   // storing the count of each element
   for(int i=0;i<v.size();i++){
      mp[v[i]]++;
   }
   // finding the element with count 1
   for (auto it : mp) {
        if (it.second == 1)
            return it.first;
    }

    return -1;
}

int main(){
    vector<int> v = {4, 1, 2, 1, 2};
    cout << "The single element is: " <<getSingleElement(v);
    return 0;
}
