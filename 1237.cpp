#include <bits/stdc++.h>

using namespace std;

int main(){

	string a, b;

	while(getline(cin, a) && getline(cin,b)){
		int parcialSum = 0;
		int sum = 0;
		char check;
		string cont =a[0];
		
		int i=0, j=0;
		

		while(check!='\0'){
			while(a[i]!='\0'){
				cont=a[i];
				if(cont.find(b)!=string::npos){
					parcialSum++;
				}
				/*
				   aux+=a[i];
				   if(aux.find(b){
				   parcialSum++;
				   }	
				   */
				i++;
			}
		}

	}

}
