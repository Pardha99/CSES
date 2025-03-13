#include<iostream>
using namespace std;

int main(){

	int A =0,C=0,G=0,T=0;
	int t_a=0,t_c=0,t_g=0,t_t=0;
	
	string ip;
	cin>>ip;
	int size=ip.size();
	
	for(int i=0;i<size;i++){
		
			if(ip[i]=='A'){
				t_a++;
				A = max(A,t_a);
				t_c=0,t_g=0,t_t=0;
			}else if(ip[i]=='C'){
				t_c++;
				C=max(C,t_c);
				t_a=0,t_g=0,t_t=0;
			}else if(ip[i]=='T'){
			t_t++;
			T=max(T,t_t);
				t_c=0,t_g=0,t_a=0;
			}else{
				t_g++;
				G=max(G,t_g);
				t_c=0,t_a=0,t_t=0;
			}
			
	}
	cout<<max(A,max(C,max(T,G)));
	
}