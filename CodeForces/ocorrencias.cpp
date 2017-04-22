#include<iostream>

using namespace std;

int occurrences(const string& text, const string& pat)
{
	int n = text.size();
	int m = pat.size();

	int occ = 0;    // Número de ocorrências de pat em text

	for (int i = 0; i <= n - m; ++i) 
		if(pat==text.substr(i,m)){
			occ += 1;
			i+=m-1;
		}
	return occ;
}

int main(){
	string text;
	string pat;
	
	cin>>text>>pat;
	cout<<occurrences(text,pat)<<endl;
}
