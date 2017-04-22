#include <iostream>
#include <vector>

using namespace std;

//Maximo periodo
vector<int> z_function(const string &s) {
	int n = s.size();
	vector<int> z(n, 0);
	int L = 0, R = 0;
	for(int i = 1; i < n; i++) {
		if(i <= R) {
			z[i] = min(z[i - L], R - i + 1);
		}
		while(z[i] + i < n && s[z[i] + i] == s[z[i]]) {
			z[i]++;
		}
		if(R < i + z[i] - 1) {
			L = i, R = i + z[i] - 1;
		}
	}
	return z;
}


int main(){
	string word;
	int casos;

	vector<int> z_vector;
	cin >>casos;
	while(casos--){
		cin>>word;
		z_vector=z_function(word);

		int min=0;
		for(int i =0; i<z_vector.size();++i){
			if(z_vector[i]!=0)
				break;
			++min;
		}
		if(min==0)
			++min;
		cout<<min<<endl;
	}
}
