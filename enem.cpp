#include <iostream>
using namespace std;

int main (){
	float mat, cien, ling, red, cihum;
	cin >> mat;
	cin >> cien;
	cin >> ling;
	cin >> red;
	cin >> cihum;
	if (red<200){
		cout << "-1" << endl;
	}else {
		mat*=0.3;
		cien*=0.2;
		ling*=0.2;
		red*=0.2;
		cihum*=0.1;
		cout << mat+cien+ling+red+cihum << endl;
	}
	return 0;
}
