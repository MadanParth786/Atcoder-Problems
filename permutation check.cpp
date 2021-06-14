#include<iostream>
using namespace std;
int main()
{
	int n,x,k=1;
	cin>>n;
	int a[10001];
	for(int i=0;i<n;i++){
		
		cin>>a[i];
		
	}
	for(x=0;x<n;x++){
		for(int i=0;i<n;i++){
			if(x==a[i]){
				k++;
			    break;
			}
		}
	}
	cout<<k;
			if(k==n){
				cout<<"Yes"<<"\n";
			}
			else{
				cout<<"No"<<"\n";
			}
   
          
    return 0;
}    
	
