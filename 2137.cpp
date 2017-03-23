#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	vector<string> livros;
	string livro;


	while(cin >> N){
		livros.clear();
		while(N--){
			cin >>livro;
			livros.push_back(livro);
		}
		sort(livros.begin(), livros.end());

		for(int i=0; i<livros.size(); i++){
			cout << livros[i] <<endl;

		}
	}
}
