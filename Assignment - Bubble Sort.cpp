#include<bits/stdc++.h>
using namespace std;
void processBubbleSort(int arr[],int n){
int size=n;
while(n>=0){
for(int i=0;i<n-1;i++){
	
if(arr[i]>arr[i+1]){
int temp=arr[i+1];
arr[i+1]=arr[i];
arr[i]=temp;
}
}
n--;
}

for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";	
}
}

int main(){
cout<<"Enter the size of the array "<<endl;
int n;
cin>>n;
int arr[n];
cout<<"Now Enter the elemets in the array"<<endl;
for(int i=0;i<n;i++){
	cin>>arr[i];}
processBubbleSort(arr,n);

}
