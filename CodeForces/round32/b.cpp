#include<iostream>
#include<stack>

using namespace std;

int main(){
	string borze;
	cin >> borze;

	int i =0;
	while(i< borze.size()){
	    if(borze[i]=='.'){
		cout<<0;		
		++i;
	    }else{
		if(borze[i]=='-' && borze[i+1]=='.')	
		    cout<<1;
		else 
		    cout<<2;
		i=i+2;
	    }

	}
}
