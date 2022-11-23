#include <iostream>
#include <fstream>
using namespace std;
int main (){
	int min, hora;
	cin >> hora;
	cin >> min;
	
	ofstream arquivo ("saida.txt");
	arquivo << hora*60 << endl;
	arquivo << hora*60+min << endl;
	arquivo << (hora*60+min)*60;
	
	return 0;
}
