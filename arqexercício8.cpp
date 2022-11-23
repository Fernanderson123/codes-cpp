#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main (){
	float custo_total, convite;
	cin >> custo_total;
	cin >> convite;
	
	ifstream arquivo ("teatro.txt");
	arquivo >> custo_total;
	arquivo >> convite;
	cout << int (ceil(custo_total/convite));
	
	ofstream arquivo2 ("convite.txt");
	arquivo2 << int (ceil(custo_total/convite));
	arquivo2.close();
	
	return 0;
}
