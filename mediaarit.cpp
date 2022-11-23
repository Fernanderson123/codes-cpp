#include <iostream>
using namespace std;
int main (){
	int quantinum, limite=0;
	float valor, total;
	
	cin >> quantinum;
	while (limite<quantinum){
		cin >> valor;
		total+=valor;
		limite++;
	}	total=total/limite;
		cout << total << endl;

	return 0;
}
