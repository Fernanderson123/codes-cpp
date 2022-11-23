#include <iostream>
using namespace std;
int main (){
	int n1,n2;
	int cont=0;
	cin >> n1 >> n2;
	int n3=n2;
	while (n3<=n1){
		n3+=n2;
		cont++;
	}
	cout << cont;
	return 0;
}
