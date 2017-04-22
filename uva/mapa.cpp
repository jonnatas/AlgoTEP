#include<iostream>
#include<cctype>

using namespace std;

char uppercase(char c)
{
	return (char) toupper(c);
}

void smap(string& s, char (*f)(char))
{
	for (size_t i = 0; i < s.size(); ++i)
		s[i] = f(s[i]);
}

int main(){

	string s;
	cin>>s;

	smap(s, uppercase);
	cout<<s<<" "<<s<<endl;

}
