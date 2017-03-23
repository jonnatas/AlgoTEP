#include <bits/stdc++.h>

using namespace std;

int main(){
	string palavra;

	while(getline(cin, palavra)){
		if(palavra[0] == '*' && palavra[1] == '\0')
			break;

		stringstream sin(palavra);
		string word;

		sin >> word;

		cout << word<<endl;

	}

}
