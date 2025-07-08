#include<bits/stdc++.h>
using namespace std ;

void SelectionSort(vector<int>&arr){
int n= arr.size();
for(int i=0;i<=n-1;i++){
int min =i;	
for(int j=i+1;j<n;j++){
if(arr[j]<arr[min]){
min=j;
}	
}
if(min!=i){
swap(arr[min],arr[i]);
}	
}
}
int main() {
    random_device rd;
    mt19937 gen(time(0));

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

    SelectionSort(arr);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
