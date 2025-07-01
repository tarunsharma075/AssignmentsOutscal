#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
int temp;
for(int i=1;i<n;i++){
 temp=arr[i];
int j=i-1;
while(j>=0&&arr[j]>temp){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}

int main(){
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the values of the array"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
InsertionSort(arr,n);
return 0;

}
