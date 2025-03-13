#include<iostream>
#include<deque>
#include<vector>

using namespace std;
typedef long long int  ll; 

const int SIZE = 1e6;

void Sum(ll &sum , int n){
	for(ll i=1;i<=n;i++) sum +=i;
}

int main(){

	int n;
	cin>>n;
	ll sum = 0;
	 ll vis[SIZE]={0};
	Sum(sum,n);
	deque<ll>second;
	vector<ll>first;
	if(sum%2) cout<<"NO"<<endl;
	else{
	cout<<"YES"<<endl;
		ll sec  = sum/2;
		int s =0,f=0;
		for(ll i=n;i>0;i--){
			
			if(sec>i){sec -=i ;
				second.push_front(i);
				vis[i-1] = 1;
				s++;
			}else if( sec ==i){
			second.push_front(sec);vis[i-1]=1;
			s++;
			break;
			}
		}
		
		for(int i=1;i<=n;i++){
			
			if(!vis[i-1]){
			first.push_back(i);
			f++;
			}
		}
		cout<<f<<endl;
		for(ll i=0;i<first.size();i++) cout<<first[i]<<" ";
		cout<<endl;
		cout<<s<<endl;
		for(auto it = second.begin();it!=second.end();++it) cout<<*it<<" ";
		cout<<endl;
		
	}

}