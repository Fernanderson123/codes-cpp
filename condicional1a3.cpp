#include <iostream>
using namespace std;
int main (){
	int I;
	float A,B,C;
	cin >> I;
	cin >> A;
	cin >> B;
	cin >> C;
	if (I==1){
		if(A>B and A>C){
		if(B>C)
		cout << C <<" " << B <<" " << A;
		else cout << B <<" " << C <<" " << A;
		}else if (B>A and B>C){
		if (A>C)
		cout << C <<" " << A <<" " << B;
		else cout << A <<" " << C <<" " << B;
	}	else if (C>A and C>B){
		if (B>A)
		cout << A <<" " << B <<" " << C;
		else cout << B <<" " << A <<" " << C;
	}
}
	if (I==2){
		if(A>B and A>C){
		if(B>C)
		cout << A <<" " << B <<" " << C;
		else cout << A <<" " << C <<" " << B;
		}else if (B>A and B>C){
		if (A>C)
		cout << B <<" " << A <<" " << C;
		else cout << B <<" " << C <<" " << A;
	}	else if (C>A and C>B){
		if (B>A)
		cout << C <<" " << B <<" " << A;
		else cout << C <<" " << A <<" " << B;
	}
}
	if (I==3){
		if(A>B and A>C){
		if(B>C)
		cout << B <<" " << A <<" " << C;
		else cout << C <<" " << A <<" " << B;
		}else if (B>A and B>C){
		if (A>C)
		cout << A <<" " << B <<" " << C;
		else cout << C <<" " << B <<" " << A;
	}	else if (C>A and C>B){
		if (B>A)
		cout << B <<" " << C <<" " << A;
		else cout << A <<" " << C <<" " << B;
	}
}
	return 0;
}
