#include <bits/stdc++.h>

using namespace std;

int main(){
	string D;
	string S;

	while(cin >> D>>S){
		if(D.find(S)!=string::npos){
			cout << "Resistente"<<endl;
		}else
			cout << "Nao resistente"<<endl;
	}
}
