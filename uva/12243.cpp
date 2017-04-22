#include <iostream>
#include <sstream>


using namespace std;

int main(){

	string palavra;

	while(getline(cin, palavra), palavra!="*"){
		istringstream iss(palavra);
		string word;
		iss>>word;
		char first = word[0];
		int sim = 0;

		while(iss>>word){
			if(word[0]%32!=first%32){
				cout<<"N"<<endl;
				sim++;
				break;
			}
		}			
		if(sim==0)
			cout<<"Y"<<endl;
		
	}
}
