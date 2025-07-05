#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int low,int mid,int high){
int i=low;
int j=mid+1;
vector<int>result;
while(i<=mid&&j<=high){
if(arr[i]<=arr[j]){
result.push_back(arr[i]);
i++;
}else if(arr[j]<=arr[i]){
result.push_back(arr[j]);
j++;
}
}

while(i<=mid){
result.push_back(arr[i]);
i++;
}
  while (j <= high) {
        result.push_back(arr[j]);
        j++;
    }

for(int i=0;i<result.size();i++){
arr[i+low]= result[i];
}
}




void MergeSort(int arr[],int low,int high){
if(low==high){return;}
int mid=(low+high)/2;
MergeSort(arr,low,mid);
MergeSort(arr,mid+1,high);
Merge(arr,low,mid,high);
}


int main(){
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
MergeSort(arr,0,n-1);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}
