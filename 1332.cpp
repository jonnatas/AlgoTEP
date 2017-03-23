#include <iostream>
#include <string>

using namespace std;

int main(){
	string number;
	int N;

	cin >> N;

	while(N--){
		cin >> number;
		if(number.length() > 3){
			cout << 3 << endl;
		}else {
		   if(((number[0]=='o') && (number[1]=='n')) || ((number[1]=='n') && (number[2]=='e')) || ((number[0]=='o') && (number[2]=='e')) ){
				cout << 1<<endl;
		   }else{
			   cout << 2<<endl;
		   }
		}	
	}

}

