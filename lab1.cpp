#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,char**argv){
int n=atoi(argv[1]);
if(n==1)
cout<<n<<endl;
else{
while(n!=1){
cout<<n<<" ";
if(n%2==1)
n=3*n+1;
else 
n/=2;
}
cout<<"1"<<" "<<endl;
}
return 0;
}
