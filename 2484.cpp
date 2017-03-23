#include <bits/stdc++.h>

using namespace std;

int main(){
	string magic;
	vector<string> V;

	while(cin >> magic){
		string space="";

		int sz=magic.sizdde();
		cout<<space;

		for(int j=0; j<sz; j++){
			cout<<space;
			for(int i= 0; i<magic.size(); i++){
				cout<<magic[i];
				if(i<magic.size()-1)
					cout<<" ";
			}
			magic.pop_back();
			space+=" ";	
			cout<<endl;
		}
		cout <<endl;


	}

}
