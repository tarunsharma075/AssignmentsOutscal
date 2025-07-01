#include<bits/stdc++.h>
using namespace std;
void processBubbleSort(int arr[],int n){
//int size=n;
bool swapped=false;
for(int i =0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
int temp =arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;	
swapped=true;
}
}
if(swapped==false){
break;
}	
}
for(int i=0;i<n;i++){
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
