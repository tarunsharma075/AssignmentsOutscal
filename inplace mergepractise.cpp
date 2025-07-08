#include<bits/stdc++.h>
using namespace std;
void InPlaceMergeSort(vector<int>&nums,int low,int mid,int high){
int i=low;
int j= mid+1;
while(i<=mid&&j<=high){
if(nums[i]<nums[j]){
i++;
}else{
int value=nums[j];
int index=j;
while(index>i){
nums[index]=nums[index-1];
index--;
}
nums[index]=value;
i++;
j++;	
}
}
}

void MergeSort(vector<int>&nums,int low, int high){
if(low<high){
int mid=(high+low)/2;
MergeSort(nums,low,mid);
MergeSort(nums,mid+1,high);
InPlaceMergeSort(nums,low,mid,high);
}
}

int main(){
mt19937 gen(time(0));
int n;
cin>>n;
vector<int>nums(n);
uniform_int_distribution<> dist(1, 100);
for(int i=0;i<n;i++){
nums[i]=dist(gen);	
}
cout<<"Before sorting"<<endl;
for(int i=0;i<n;i++){
cout<<nums[i]<<" ";	
}
cout<<endl;
MergeSort(nums,0,n-1);
cout<<"After Sorting"<<endl;
for(int i=0;i<n;i++){
	
cout<<nums[i]<<" ";	
}

}
