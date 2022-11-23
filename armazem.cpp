#include<iostream>
using namespace std;
int main(){
	int lin,col,prof;
	int ***inf;
	int prod,neg=0;
	inf=new int**[2];
  
	for( lin=0;lin<2;lin++){
    inf[lin]=new int*[2];
	for( col=0;col<2;col++){
    inf[lin][col]=new int[3];
      }
  }
	for( lin=0;lin<2;lin++){
	for( col=0;col<2;col++){
	for( prof=0;prof<3;prof++){
		cin>>inf[lin][col][prof];
        }  
      }
    }
	cin>>prod;
	for( lin=0;lin<2;lin++){
	for( col=0;col<2;col++){
	for( prof=0;prof<3;prof++){
	if(prod==inf[lin][col][prof]){
		cout<<lin<<" "<<col<<" "<<prof <<" "<<endl;
    }else
	neg++;
        }
       }
      }
	if (neg>=12){
		cout<<"-1";
 }
	for( lin=0;lin<2;lin++){
	for( col=0;col<2;col++){
	delete[] inf[lin][col];       
      }  
	delete[] inf[lin];
  }
	delete[] inf;
  
	return 0;
}
