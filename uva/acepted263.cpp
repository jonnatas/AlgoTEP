#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){

	string number;
	map<string, int> chain;
	map<string, int>::iterator res;

	while(cin>>number, number!="0"){
		cout <<"Original number was "<<number<<endl;
		chain.clear();
		string orderN = number;

		int cont = 0;
		
		do{
			sort(orderN.begin(), orderN.end());
			long anterior = atol(orderN.c_str());
			reverse(orderN.begin(), orderN.end());
			long resultado = atol(orderN.c_str()) -anterior ; 
			cout<<orderN<<" - "<<anterior<<" = "<<resultado<<endl;

			orderN = to_string(resultado);
			++chain[orderN];	
			res = chain.find(orderN);	
		++cont;	
		}while(res->second<2);
	cout<<"Chain length "<<cont<<endl<<endl;
			
	}

}

