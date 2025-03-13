#include<iostream>
using namespace std;
typedef long long ll;
void T_count(ll &ten ,ll &f, ll x){
	
	while(x){
	if(x%10==0) {
		ten++;
		x=x/10;}
	else if(x%5==0){x =x/5;	f++;}	
	else {return ;}}

}
void fives_count(ll &f,ll x){
	
	while(x){
		if(x%5==0)f++;
		x/=5;
	}
}
int main(){

	ll n;
	cin>>n;
	ll t=0,f=0,ten=0;
	
	for(int i=1;i<=n;i++){
		
		if(i%10==0) T_count(ten,f,i);
		else if(i%2==0) t++;
		else if(i%5==0) fives_count(f,i);
	}
	cout<<ten+f<<endl;
}