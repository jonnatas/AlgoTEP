#include <bits/stdc++.h>
#include <locale>


using namespace std;


bool compare(const string& a, const string& b){
	int siz = a.size();

	if(siz != b.size())
		return false;
	for(int i =0; i<siz; i++)
		if(tolower(a[i]) != tolower(b[i]))
			return false;
	
	return true;
	
}

string lower(const string& a){
	string rest;
	for(int i=0; i<a.size(); i++){
		rest+=tolower(a[i]);
	}
	return rest;
}

int main(){
	map<string, string> boas;
	string nome;

	while(getline(cin, nome)){
		boas.emplace(lower(nome),nome);	
	}
/*
	for(auto& x:boas){
		cout << x.first <<" -- "<<x.second<<endl;	
	}
*/
	map<string, string>::reverse_iterator it = boas.rbegin();
	cout << it->second<<endl;


}
