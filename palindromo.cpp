#include <iostream>
using namespace std;
int main (){
	char cor1[10], cor2[10];
	int num;
	cin >> cor1;
	cin >> cor2;
	cin >> num;
	if (num/100000%10==num%10
	and num/10000%10==num/10%10 
	and num/1000%10==num/100%10
	and num/100%10==num/1000%10 
	and num%10==num/100000%10){
		cout << cor1 << endl;
	}	else {
		cout << cor2;
	}
	
	return 0;
}
