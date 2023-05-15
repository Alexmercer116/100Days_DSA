#include <iostream>
#include <unordered_map>
using namespace std;

//Find highest/lowest frequency

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (auto m : mp) {
        cout << m.first << "->" << m.second << endl;
    }
    int maxFreqEle = arr[0], minFreqEle = arr[0];
    int maxFreq = mp[arr[0]], minFreq = mp[arr[0]];
    for (int i = 0; i < n; i++) {
        if (mp[arr[i]] > maxFreq) {
            maxFreq = mp[arr[i]];
            maxFreqEle = arr[i];
        }
        if (mp[arr[i]] < minFreq) {
            minFreq = mp[arr[i]];
            minFreqEle = arr[i];
        }
    }
    cout << "Max frequency element: " << maxFreqEle << ", Frequency: " << maxFreq << endl;
    cout << "Min frequency element: " << minFreqEle << ", Frequency: " << minFreq << endl;
    return 0;
}
