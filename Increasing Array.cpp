#include<iostream>
using namespace std;

int main(){

		
			long long int  n;
			cin>>n;
		long long int result = 0;
			long long int pre  = -1;
		for(long long int i=0;i<n;i++){
			
			int x;
			cin>>x;
			
			if(pre==-1) pre = x;
			else if(x<pre){
				int change = abs(pre-x);
				result +=change;
				pre = x+change;
			}else{
			pre = x;
			}
					

		}
		cout<<result;
}