#include <fstream>
using namespace std;
int main(){
	ifstream arquivo("meus_dados.txt");
	string dados;
	arquivo >> dados;
	cout << dados << endl; 
	arquivo.close();
	}
	return 0;
}
