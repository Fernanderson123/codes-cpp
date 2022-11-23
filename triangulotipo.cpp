#include <iostream>
using namespace std;
int main (){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a+b)>c and (b+c)>a and (a+c)>b){
		if ((a==b) and (b==c)){
			cout <<"triangulo equilatero";
	}	if ((a!=b) and (b!=c) and (a!=c)){
		cout <<"triangulo escaleno";
	}	else {cout <<"triangulo isosceles";}
	}else{cout <<"nao eh possivel formar um triangulo";}
	return 0;
}
