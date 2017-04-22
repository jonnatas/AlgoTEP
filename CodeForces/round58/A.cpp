#include <iostream>
#include <regex>
#include <stack>

using namespace std;

bool compare(map<char, int> &position, char i){
	if (i != 'h' || i!='e' || i!='l' || i != 'o')
		return false;

	if(i=='l'){
		if(position[i]<2)
			++position[i];
		return true;
	}
	else if(position[i]==0){
		++position[i];
		return true;
	}
	return false;
}

int main(){
	string word;
	int yes=0;

	cin >> word;
	
	//stack<char> hello;
	string hello ="";
	string teste ="hello";

	map<char, int> position;
	position['h'] = 0;
	position['e'] = 0;
	position['l'] = 0;
	position['l'] = 0;
	position['o'] = 0;

	int cont =0;
	for(auto i: word){
		if( i=='h' and hello==""){
			hello+=i;
			cout<<"H >> "<<i<<endl;
			yes+=1;
			//hello.push(i);
		}
		else if( compare(position, i) )	
			cout<<"H >> "<<i<<" P >>"<<position[i]<<endl;
			hello+=i;
			if(hello[cont] == teste[cont]) 
			{
				cout<<"H >> "<<i<<endl;
				yes+=1;
			}
		}
	
	if(yes==5)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}
