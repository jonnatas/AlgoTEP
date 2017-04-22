#include<iostream>
#include<cstring>
#include<map>

using namespace std;

map<char, int> hist(const string& s){
	map<char, int> histograma;
	for(auto i : s){
		++histograma[i];	
	}
	return histograma;
}
/*
void arrayHist(int H[256], const string& s){
	memset (H, 0, sizeof H );

	for(auto c : s){
		++H[c];
	}

}
*/
int main(){
	string palavra;
	cin >> palavra;
	cout<<palavra<<endl;
	map<char, int> histograma = hist(palavra);

	for(auto i : histograma){
		cout<< i.first <<" - "<<i.second <<endl;
	}

	
}
