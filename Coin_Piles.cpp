#include<iostream>
using namespace std;

int coinpiles(int a,int b){
		
		if(a<=0 || b<=0 ) return 0;
		else if ( (a==1 && b==2) || (a==2 && b==1)) return 1;
		
		return coinpiles(a-1,b-2) || coinpiles(a-2,b-1);
		
}
int main(){
	 int t;
	 cout<<"INput";
	 cin>>t;
	 
	 while(t--){
		
		int x,v;
		cin>>x>>v;
		
	 int result = coinpiles(x,v);
	 
	 if(result) cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;

	 }
}