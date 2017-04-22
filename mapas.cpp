#include<iostream>
#include<map>

using namespace std;

bool is_vowel(char c){
	string vowel {'a','e','i','o','u'};
	return vowel.find(c) != string::npos;
}

bool s_vowel(const string& s, char c){
	return s.find(c) != string::npos;
}

int main(){
	string palavra;
	char c = 'c';
	char a = 'a';

	cin>> palavra;
	cout<<"c - "<<is_vowel(c)<<" : a -"<<is_vowel(a)<<endl;
	cout<<"c - "<<s_vowel(palavra, c)<<" : a -"<<s_vowel(palavra,a)<<endl;



	
}
