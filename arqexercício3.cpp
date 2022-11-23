#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main (){
	float x1, y1, x2, y2;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	
	ifstream arquivo ("entrada.txt");
	arquivo >> x1 >> y1 >> x2 >> y2;
	cout << sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
	arquivo.close();
	return 0;
}
