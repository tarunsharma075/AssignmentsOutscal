#include<bits/stdc++.h>
using namespace std;

void CountSort(int arr[],int n,int pos){
vector<int>count(10);
vector<int>result(n);
for(int i=0;i<n;i++){
count[(arr[i]/pos)%10]++;
}
for(int i=1;i<10;i++){
count[i]=count[i]+count[i-1];	
}
for(int i=n-1;i>=0;i--){
result[count[(arr[i]/pos)%10]-1]=arr[i];
count[(arr[i]/pos)%10]--;
}
for(int i=0;i<n;i++){
arr[i]=result[i];
}
}
void RadixSort(int arr[],int n){
int max = *max_element(arr,arr+n);
for(int pos=1;max/pos>0;pos*=10){
CountSort(arr,n,pos);	
}
}
int main(){
int n;
cin>>n;
int arr[n];
srand(time(0));
for(int i=0;i<n;i++){
arr[i]=rand()%100;
}
cout<<"Before sorting"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
RadixSort(arr,n);
cout<<"After sorting"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";

}
return 0;
}
