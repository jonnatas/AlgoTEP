#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

int cmp1(const void *i, const void *j){
	return *(char *)i - *(char *)j;
}


int cmp2(const void *i, const void *j){
	return *(char *)i - *(char *)j;
}

int main(){
	int a = 120;
	cout <<a%10;
	

}
