#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	
		for(int j=1;i<n;j++){
			if(i<j && a[i]!=a[j]){
				count++;
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
