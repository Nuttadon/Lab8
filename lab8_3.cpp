#include<iostream>
using namespace std;
// A65-Z90
//a97-z112
char before(char x){
	char y='0';
	if(64<x&&x<91){
		if(x>65){
			return x-1;
		}
		if(x==65){
			return x+25;
		}
	}
	return y; //ถ้า return เป็น string หรือ char ที่ว่างเปล่า จะติด \x00 << หมายถึงเครื่องหมายเพื่อให้คอมหยุดอ่านstring นั้น
}
int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
