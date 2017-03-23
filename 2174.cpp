#include <bits/stdc++.h>

using namespace std;

int main(){
	int C;
	string pokemon;
	map<string, string> pokebola;

	cin>>C;
	while(C--){
		cin >>pokemon;
		pokebola.emplace(pokemon,pokemon);
	}
	int rest =151- pokebola.size();
	cout<<"Falta(m) "<<rest <<" pomekon(s)."<<endl;
}
