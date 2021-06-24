#include<iostream>
using namespace std;
int main()
{
	int n,count,s=0;
	cin>>n;
	count=0;
		while(s<n){
		    count++;
            s+=count;
		}

cout<<count<<"\n";

	return 0;
}
