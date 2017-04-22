#include<iostream>

using namespace std;

string O(const string& text, const string& pat){ 
	int n = text.size();
	int m = pat.size();

	for(int i=0; i<=(n-m); ++i){
		if(pat==text.substr(i,m)){
			return "verdadeira";
			i+=m-1;
		}
	}
	return "falsa";

}

int main(){
	string ass;
	string panel;

	int i =1;
	while(cin >> ass>>panel){
	if(i!=1)
		cout<<endl;
	cout<<"Instancia "<<i<<endl<<O(panel, ass)<<endl;
	i++;
	}


}
