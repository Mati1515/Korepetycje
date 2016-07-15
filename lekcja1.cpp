#include <iostream>

using namespace std;

int main() {
	int a=10,b=2;
	
	while(b>0){
		a = 10;
		while( (a<=11) || (a>=20) ) {
			cout << "podaj liczbe mniejsza od 20 i wieksza od 11: ";
			cin >> a;
			if((a>11)&&(a<20)){
				cout << "prawda " << endl << endl;
			}
			else{
				cout << "falsz" << endl << endl;
			}
		}
		
		b=b-1;
	}
	
	
	return 0;
}
