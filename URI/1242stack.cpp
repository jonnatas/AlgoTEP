#include<iostream>
#include<stack>

using namespace std;

bool compare(char a, char b){
	if(( a=='B' && b=='S' ) || a=='S' && b=='B' ) return true;
	if(( a=='C' && b=='F' ) || a=='F' && b=='C' ) return true;

	return false;
}

int main(){
	string RNA;
	int total;
	while(cin >>RNA){
	    total = 0;
	    stack<char> base; 

	    for(auto i : RNA){
		  if(base.empty()){
			base.push(i);
		  }else{
			if(compare( i, base.top())){
				++total;	
				base.pop();
			}else{
			    base.push(i);
			}
		  }
	    }
	    cout<<total<<endl;
	}
}
