#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int a,b,c;
	cin>>a>>b>>c;
	int r=pow(abs(a),c);
	int s=pow(abs(b),c);
//	cout<<r<<s<<"\n";
	if(r>s){
		cout<<">"<<"\n";
	}
	else if(r<s){
		cout<<"<"<<"\n";
	}
	else{
		cout<<"="<<"\n";
	}
	return 0;
}
