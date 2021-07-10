#include<iostream>
using namespace std;
int main(void)
{
	int n,x;
	cin>>n>>x;
	int a[n];
	int sum=0;
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(i%2==0){
			a[i]-=1;
		}
	  sum+=a[i];
	}
	if(x>=sum){
		cout<<"Yes"<<"\n";
	}
	else{
		cout<<"No"<<"\n";
	}
}
