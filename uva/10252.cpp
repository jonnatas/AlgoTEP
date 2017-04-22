#include<iostream>
#include<cmath>
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
	while(getline(cin,A) and getline(cin,B) ){
		map<char, int> HA = hist(A);
		map<char, int> HB = hist(B);
		string x ="";

		for(auto i: HA){
	//		cout<<"HB : "<< HB.find(i.first)->first<<" - "<<HB.find(i.first)->second << '\n';
	//		cout<<"HA : "<<i.first<<" - "<<i.second<<endl<<endl;

			int aa =min(HB.find(i.first)->second, i.second  );
			for(int j =0; j<aa; j++){
				x+=i.first;
			}
		}
		cout<<x<<endl;
	}
}

