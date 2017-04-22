#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main(){
	string word;
	vector<string> linha;
	int tamanho = 0;

	while(getline(cin, word)){
		linha.push_back(word);	
		if(word.size()>tamanho){
			tamanho= word.size();
		}
	}


	string quebra = "**";
	for(int i =0; i<tamanho; i++){
		quebra+="*";		
	}		
	cout<<quebra<<endl;

	int ordenador = 1;
	for(auto i : linha){
		int espaco = ( tamanho-i.size())/2 ;	
		string blank="";
		for(int i=0; i<espaco; i++)
			blank+=" ";

		if(i.size()!=1) 
			if(i.size()&1){
				if(ordenador&1)
					i=" "+i;
				else
					i=i+" ";
				++ordenador;
			}
	cout<<"*"<<blank<<i<<blank<<"*"<<endl;
	}
}
