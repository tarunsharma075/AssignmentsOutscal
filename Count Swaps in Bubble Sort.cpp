#include<bits/stdc++.h>
using namespace std;
int CountTheSwaps(int arr[],int n){
 int Count =0;

for(int i=0;i<n-1;i++){
bool isSwapped=false;
for(int j=0;j<n-1-i;j++){
if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
Count++;
isSwapped=true;

}
}
if(!isSwapped){
break;
}
}
return Count;
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
cout<< CountTheSwaps(arr,n);
return 0;

}


