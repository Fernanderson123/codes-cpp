#include <iostream>
#include <fstream>
using namespace std;
int main (){
	string nomearquivo;
	string texto;
	cin >> nomearquivo;
	cin >> texto;
	
	ofstream arquivo (nomearquivo);
	arquivo << texto;
	
	

	return 0;
}
