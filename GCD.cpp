#include<bits/stdc++.h>
using namespace std;
int GCD(int N1,int N2){
int n=0;
if(N1>N2){
n=N1;
}else if(N2>N1){
n=N2;
}
int GCD=0;
vector<int>result;
for(int i=1;i<=n;i++){


if(N1%i==0&&N2%i==0){
result.push_back(i);
}
}
GCD=*max_element(result.begin(), result.end());
return GCD;
}

int main(){
int n1,n2;
cout<<"Enter the Numbers"<<endl;
cin>>n1;
cin>>n2;
cout<<GCD(n1,n2);
}
