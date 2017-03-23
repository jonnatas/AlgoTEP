#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;

	string game[2];


	map<string, vector<string>> names;

	names["tesoura"].emplace_back("papel");
	names["tesoura"].emplace_back("lagarto");
	names["papel"].emplace_back("pedra");
	names["papel"].emplace_back("spock");
	names["pedra"].emplace_back("lagarto");
	names["pedra"].emplace_back("tesoura");
	names["lagarto"].emplace_back("spock");
	names["lagarto"].emplace_back("papel");
	names["spock"].emplace_back("tesoura");
	names["spock"].emplace_back("pedra");

	sort(names.begin(), names.end());
	cin >>N;
	while(N--){

		cin >> game[0] >>game[1];
		if (game[0]==game[1])
		{
			cout << "empate" <<endl;
		} else{
			if (names[game[0]][0] == game[1]  || names[game[0]][1] == game[1])
			{
				cout << "rajesh"<< endl;
			}else
			{
				cout << "sheldon"<<endl;
			}
		}

	}
}
