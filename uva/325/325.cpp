#include <iostream>
#include <cstdio>
#include <regex>


using namespace std;

bool validator (const string& number){
	regex reg("[+|-]?[0-9]+\\.[0-9]+[\\s]?");
	//1.0e-55
	regex reg2("[+|-]?[0-9]+\\.[0-9]+[e|E][-|+]?[1-9]+[\\s]?");
	//1e-12
	regex reg3("[+|-]?[0-9]+[e|E][-|+]?[1-9]+[\\s]?");

	return (regex_match(number, reg3) || regex_match(number,reg)  || regex_match(number,reg2)    ) ;

}

void eliminar(string &number){
	int tam = number.size();
	while(tam--){
		if(number[tam]!=' ')
			break;
		else
			number.pop_back();
	}
}

int main(){

	string number;
	while(getline(cin,number) , number!="*"){
		//if (std::regex_match (regex, std::regex("(t)(.*)") ))
		smatch m;
		regex e ("\\s*");

		//cout<<"PRE:::: ["<<number<<"]"<<endl;
		if(regex_search(number, m, e)){
			number = m.suffix().str();
		}
		
		//cout<<"POS>>>>> ["<<number<<"]"<<endl;
		eliminar(number);
		if (validator(number)){
			cout<<number << " is legal."<<endl;
		}
		else{
			cout<<number << " is illegal."<<endl;
		}

	}

}


       // String regex = "(\\d{3}\\.){2}\\d{3}-\\d{2}";

