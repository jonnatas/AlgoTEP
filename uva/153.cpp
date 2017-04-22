#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<char, int> hist(const string& s){
	map<char, int> histograma;
	for(auto i : s){
		++histograma[i];
	}
	return histograma;
}

int F(int n){
	return n<2 ? 1 : F(n-1)*n;
}


int main(){
	string anagrama;
	int posicao;
	int i;
	map<string,int> maps;

	while(cin>>anagrama, anagrama!="#"){
		maps.clear();
		map<char,int> A = hist(anagrama);

		i=1;
		string res = anagrama;
		sort(anagrama.begin(), anagrama.end());
		do{
			maps[anagrama] = i;
			++i;
		}while(next_permutation(anagrama.begin(), anagrama.end()));

	cout<<maps[res]<<endl;	

	}
}

