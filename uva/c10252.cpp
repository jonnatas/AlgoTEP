#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

map<char, int> hist(const string& s){
	map<char, int> H;
	for(auto c : s){
		++H[c];		
	}
	return H;
}

int main(){
	string A, B;
	
	while(cin>>A>>B){
		string x="";	

		map<char, int> H = hist(A);
		for(auto i : H){
		cout<<i.fisrt;
		}
	}
}
