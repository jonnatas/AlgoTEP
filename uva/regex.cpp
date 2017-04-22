#include<iostream>
#include<sstream>

using namespace std;

int main(){
	string token;
	cin>>token;
	
	istringstream is(token);

	getline(is, token, '.');
	cout<<token<<endl;

	getline(is, token, '.');
	cout<<token<<endl;

	getline(is, token, '-');
	cout<<token<<endl;

	getline(is, token);
	cout<<token<<endl;

}
