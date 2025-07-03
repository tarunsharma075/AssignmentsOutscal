#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
for(int i=0;i<n-1;i++){
int key=i;
for(int j=i;j<n;j++){
if(arr[j]<arr[key]){
key=j;}
}
if(key!=i){
swap(arr[key],arr[i]);
}
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
SelectionSort(arr,n);
return 0;

}
