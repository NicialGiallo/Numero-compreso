#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
    setlocale(LC_ALL, "Italian");
	float A,B,C;
	cout << "Inserisci 3 valori" << endl;
	cin >> A >> B >> C;
	
	if(A<C and C<B) {
		cout << C << " � compreso tra " << A << " e " << B << endl;
	}
	 else if(A>C and C>B) {
		cout << C << " � compreso tra " << A << " e " << B << endl;
	}
	else
	{
		cout << C << " non � compreso tra " << A << " e " << B << endl;
	}
	return 0;
}
