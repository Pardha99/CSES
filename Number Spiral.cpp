#include<iostream>
using namespace std;
int main(){

	
	int t;
	cin>>t;
	
	while(t--)
	{
		
		long long int  x , y;
		cin>>x>>y;
		
		if(x==y){
			cout<< (x*y) -x + 1<<endl;
		}else if(x>y){
			
			if(x%2){
				cout<< ((x*x) -x + 1 )  - abs(x-y)<<endl;
			}else{
				cout<< ((x*x) -x + 1)  + abs(x-y)<<endl;
			}
			
		}else{
			
			if(y%2){
					cout<< ((y*y) -y + 1)  + abs(x-y)<<endl;
			}else{
					cout<< ((y*y) -y + 1 )  - abs(x-y)<<endl;
			}
			
		}
	}
}
