#include <iostream>
using namespace std;
int main (){
	float comprimento, largura;
	float area;
	cin >> comprimento;
	cin >> largura;
	area=comprimento*largura;
	cout << "a area total eh de: "<< area << "m2" << endl;
	cout << "sao necessarios um total de: " << area*18-area << "W de potencia";
	return 0;
}
