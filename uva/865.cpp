#include<iostream>
#include<cctype>
#include<map>
#include<string>

using namespace std;

map<char, char> cypher(const string& A, const string& B){
	map<char, char> Hist;

	int i =0;
	for(auto c : A){
		Hist[c] = B[i]; 
		char cU = c-32;
		Hist[cU] = cU; 
		i++;
	}
	return Hist;
}


int main(){
	string orginal, sub;
	int casos;
	cin>>casos;
	string lixo;
	getline(cin,lixo);

	while(casos--){

		getline(cin,orginal);
		getline(cin,sub);

		string texto;

		cout<<sub<<endl;
		cout<<orginal<<endl;

		while(getline(cin, texto), texto[0]){

			map <char, char> cifra = cypher(orginal, sub);
			string res ="";
			for(auto c : texto){
				res += cifra[c];
				if(!cifra[c])
				//	if(c<0)
				//		c=39;
					res+=c;
			}
			cout<<res<<endl;
		}
	}
}
