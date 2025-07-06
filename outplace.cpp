#include<bits/stdc++.h>
#include<random>
using namespace std;
void InPlaceMerge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    vector<int> result;

    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            result.push_back(arr[i++]);
        } else {
            result.push_back(arr[j++]);
        }
    }

    // Copy remaining left
    while (i <= mid) {
        result.push_back(arr[i++]);
    }

    // Copy remaining right
    while (j <= right) {
        result.push_back(arr[j++]);
    }

   
    for (int k = 0; k < result.size(); k++) {
        arr[left + k] = result[k];
    }
}



void MergeSort(int arr[],int left,int right){
if(left>=right){return;}
int mid = (left+right)/2;
MergeSort(arr,left,mid);
MergeSort(arr,mid+1,right);
InPlaceMerge(arr,left,mid,right);
}

int main(){
random_device rd;
mt19937 gen(rd());   
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
int low= 0;
int high=n-1;
uniform_int_distribution<> dist(1, 100); 
for(int i=0;i<n;i++){
arr[i]=dist(gen);
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
MergeSort(arr,low,high);

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}
