#include <iostream>
using namespace std;
int main (){
	int mat=1, mat1, mat2;
	float nota, notamaior=-1, notamaior1=-1; 
	cin >> mat; 
	do {
		cin >> nota;
	if (nota>notamaior){
			notamaior1 = notamaior; 
			mat2 = mat1;
			notamaior=nota;
			mat1=mat;
			if(notamaior1 == -1){ 
				notamaior1 = nota;
				mat2 = mat;
			}
	}	else if (nota<notamaior and nota>notamaior1){
			notamaior1=nota;
			mat2=mat;
	} 
		cin >> mat;
	} while (mat!=0);
	cout << mat1 << " " << notamaior << endl;
	cout << mat2 << " " << notamaior1 << endl;
	return 0;
}
