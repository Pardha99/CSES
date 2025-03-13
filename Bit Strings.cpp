#include <iostream>
#include <cmath>

using namespace std;

const long long int  SIZE = 1e9 + 7;

long long EXPO(long long base ,long long exp , long long mod){
	
	long long result = 1;
	
	while(exp>0){
		if(exp % 2){result = (result*base)%mod;}
		base = (base*base)%mod;
		exp/=2;
	}
	return result;
}
int main(){

	int n;
	cin>>n;
	
	cout<< EXPO(2,n,SIZE)<<endl;
}