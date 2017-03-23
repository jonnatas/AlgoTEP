#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;
	string A;
	string B;
	string auxA; 
	cin >> N;
	while(N--){
		cin >> A;
		cin >> B;

		if(A.size()< B.size()){
			cout<<"nao encaixa"<<endl;
		}else{
			auxA = A.substr(A.size()-B.size(),B.size()-1);	
			if(B.find(auxA)!=string::npos){
				cout<<"encaixa"<<endl;
			}else
				cout<<"nao encaixa"<<endl;
		}
	}	
}
