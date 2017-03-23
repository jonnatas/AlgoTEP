#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	int T;
	long long M, N;
	string sum;

	cin >> M;
	cin >> N;
	
	sum = to_string(M+N);	

	while((M && N)!= 0){
		for(auto p= sum.begin(); p!= sum.end(); p++){
			if(*p != '0')
				cout<<*p;	
		}
	cout <<endl;	
	cin >> M >> N;
	sum = to_string(M+N);	
	}	
}

