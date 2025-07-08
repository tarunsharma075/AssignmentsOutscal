#include<bits/stdc++.h>
using namespace std;

int Partiation(int arr[],int low,int high){
int pivet=arr[low];
int i=low;
int j=high;
while(i<j){
while(arr[i]<=pivet){
i++;
}
while(arr[j]>pivet){
j--;
}
if(i<j){
swap(arr[i],arr[j]);
}
}
swap(arr[low],arr[j]);
return j;
}

void QuickSort(int arr[],int low , int high){
if(low<high){
int location = Partiation(arr,low,high);
QuickSort(arr,low,location-1);
QuickSort(arr,location+1,high);
}
}
int main() {
    random_device rd;
    mt19937 gen(time(0));

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    uniform_int_distribution<> dist(1, 1000);

    for (int i = 0; i < n; i++) {
        arr[i] = dist(gen);
    }

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    QuickSort(arr, 0, n - 1);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
