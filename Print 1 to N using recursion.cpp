#include<bits/stdc++.h>
using namespace std;
void print(int n){
static int i=1;;
if(i>n){
return;
}
cout<<i<<" ";
i++;
print(n);
}
int main(){
int n;
cin>>n;
print(n);
}
