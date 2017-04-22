#include<iostream>
#include<set>
#include<map>

using namespace std;

int main(){
	map<char, int> hist;

	string s = "TesteaaoiT";
	for(auto c : s){
		++hist[c];
		auto res = hist.find(c);
		cout<<res->first<<" "<<res->second<<endl;
		if(res->second >=2){
			cout<<"Achou "<< res->first << endl;
			break;
		}
	}	
}
