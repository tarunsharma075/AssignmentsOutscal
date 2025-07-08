#include<bits/stdc++.h>
using namespace std;

vector<int>InsertionSort(vector<int>&nums){
for(int i=1;i<nums.size();i++){
int temp= nums[i];
int j=i-1;
while(j>=0&&nums[j]>temp){
nums[j+1]=nums[j];
j--;
}
nums[j+1]=temp;
}
return nums;
}
int main() {
    random_device rd;
    mt19937 gen(rd());

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

  vector<int> arr(n);
    uniform_int_distribution<> dist(1, 100);

    for (int i = 0; i < n; i++) {
        arr[i] = dist(gen);
    }

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    InsertionSort(arr);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
