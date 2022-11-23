#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main (){
	float altura_cent, altura_metro;
	cin >> altura_cent;
	cin >> altura_metro;
	altura_metro*=100;
	
	ifstream arquivo ("entrada.txt");
	arquivo >> altura_cent;
	arquivo >> altura_metro;
	
	ofstream arquivo2 ("degraus.txt");
	arquivo2 << int (ceil (altura_metro/altura_cent));
	arquivo2.close();

	return 0;
}
