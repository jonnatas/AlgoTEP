#include <bits/stdc++.h>

using namespace std;

int main(){

    string code;
    int n = 0;
    cin >> code;

    for(int i =0; i<code.size(); i++){
	  if(code[i]=='H' || code[i]=='Q' || code[i]=='9'){
		cout << "YES"<<endl;
		n++;
		break;
	  }
    }
    if(n==0)
	  cout << "NO"<<endl;

}


