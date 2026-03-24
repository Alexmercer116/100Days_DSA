// Moving zeroes to the end of an array

#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> v)
{
   for (int i = 0; i < v.size(); i++)
      cout << v[i] << " ";
   cout << endl;
}

void moveZeroes(vector<int> &v)
{
   int n = v.size();
   int i = 0, j = 0;
   while (j < n)
   {
      if (v[j] != 0)
      {
         swap(v[i], v[j]);
         i++;
      }
      j++;
   }
}

int main()
{
   vector<int> v{1, 2, 0, 1, 0, 4, 0};
   cout << "Before: " << endl;
   display(v);
   moveZeroes(v);
   cout << "After: " << endl;
   display(v);
   return 0;
}