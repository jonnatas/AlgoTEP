#include <bits/stdc++.h>

using namespace std;

string revert(string p){
	string s;
	for(int i=p.size()-1; i>=0; i--){
		s+=p[i];
	}
	return s;
}

int main(){

	string numbers;
	string numRevert;

	int numA, numB;

	while(cin>>numbers){
		if(numbers[0]=='0' && numbers[1]=='\n')
			break;
		string pre;
		string pos;
		pre=numbers;
		pos="";

		while(1){
			
			sort(pre.begin(), pre.end());
			numRevert = revert(pre);

			numA = atoi(pre.c_str());
			numB = atoi(numRevert.c_str());
			pos = to_string(numB-numA);

			cout <<"Original number was "<< pre << endl;
			cout <<numB<< " - "<<numA<<" = "<< pos << endl;
		if(pre!=pos)
			break;
		pre=pos;

		}
	}
}

/*
	stringstream buffer;
	buffer << s;
	int value;
	buffer >> value;
*/
