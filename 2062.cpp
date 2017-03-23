#include <bits/stdc++.h>
#include <locale>

using namespace std;

int main(){
	string nome;
	int palavras;

	cin >> palavras;

	while(palavras--){
		cin >> nome;
		if(nome.size()>3){
			cout<<nome;
		}else if(nome.size()==3){
			if((nome[0]=='O' && nome[1]=='B') || (nome[0]=='U' && nome[1]=='R'))
				nome[2] = 'I';
				cout<<nome;
		}else{
			cout<<nome;
		}
		if (palavras == 0)
			cout <<endl;
		else
			cout <<" ";
	}
}
