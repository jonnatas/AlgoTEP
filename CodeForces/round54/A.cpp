#include<iostream>

using namespace std;

int main(){
	string s;	
	cin >> s;

	string hello = {"hello"};

	int i=0;
	while(s[i]!='h'){
			++i;
	}

	while(s[i]=='h'){
			++i;
	}
	if(s[i] =='e'){
		while(s[i]=='e')
			++i;
		if(s[i]=='l' && s[i+1]=='l'){
			i++;
			while(s[i]=='l')				
				i++;
			if(s[i] =='o')
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}else
			cout<<"NO"<<endl;
	}else
		cout <<"NO"<<endl;;
}
