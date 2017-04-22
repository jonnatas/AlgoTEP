#include<iostream>
#include <regex>


using namespace std;

bool validator (const string& number){
	regex reg("[1-9]{4}-[0-9]{4}");

	return regex_match(number, reg);

}

int main(){

	string regex;

	cin>>regex;
	//if (std::regex_match (regex, std::regex("(t)(.*)") ))
	if (validator(regex))
		std::cout << "string literal matched\n";

}
