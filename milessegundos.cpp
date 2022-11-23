#include <iostream>
using namespace std;

int main (){
	int h, m, mili;
	float seg;
	cin >> mili;
	h = mili/3600000;
	mili=mili-3600000*h;
	
	m=mili/60000;
	mili=mili-60000*m;
	
	seg=mili/1000.0;
	mili=mili-1000*seg;
	
	cout << h << " : " << m << " : " << seg << endl;
	return 0;
}
