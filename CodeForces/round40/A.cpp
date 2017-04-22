#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string wordA, wordB;

	cin >>wordA>>wordB;
	reverse(wordB.begin(), wordB.end());

	if(wordB==wordA)
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;

}
