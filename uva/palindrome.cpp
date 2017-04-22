#include<iostream>

using namespace std;

bool is_palindrome(const string& S){
	int tamanho = S.size();
	bool res=true;
	for(int i=0; i<tamanho/2; i++, tamanho--){
		if(S[i]!=S[tamanho-1])
			return false;
	}
	return true;

}

int main(){
	string P;

	cin >> P;
	cout<<"P é palindrome: "<<is_palindrome(P)<<endl;

}
