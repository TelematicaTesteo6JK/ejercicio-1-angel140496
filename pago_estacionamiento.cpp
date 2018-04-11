#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>10)
		cant = horas*7;
    
	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES  EP" << endl;
    // Agrega tus casos de prueba
    cout << "Test Data: -4| Expeted: 0"<<  endl;
	cout << "Test Data:  2| Expeted: 20"<<  endl;
	cout << "Test Data:  7| Expeted: 63"<<  endl;
	cout << "Test Data: 13| Expeted: 91"<<  endl;
	
	cout << "TEST CASES  BVA" << endl;
	// Agrega tus casos de prueba
	cout << "Test Data:  0| Expeted: 0"<<  endl;
	cout << "Test Data:  1| Expeted: 20"<<  endl;
	cout << "Test Data:  5| Expeted: 50"<<  endl;
	cout << "Test Data:  6| Expeted: 54"<<  endl;
	cout << "Test Data: 10| Expeted: 70"<<  endl;
	cout << "Test Data: 11| Expeted: 77"<<  endl;
	cout << "Test Data: 24| Expeted:168"<<  endl;
    cout << endl;

}

int main()
{
    int r,v;
    casos_de_prueba();
//    pago_estacionamiento(-4);
//	pago_estacionamiento(2);
//	pago_estacionamiento(7);
//	pago_estacionamiento(13);
//	pago_estacionamiento(0);
//	pago_estacionamiento(1);
//	pago_estacionamiento(5);
//	pago_estacionamiento(6);
//	pago_estacionamiento(10);
//	pago_estacionamiento(11);
//	pago_estacionamiento(24);
	cout<<pago_estacionamiento(-4)<<endl;
	cout<<pago_estacionamiento(2)<<endl;
	cout<<pago_estacionamiento(7)<<endl;
	cout<<pago_estacionamiento(13)<<endl;
	cout<<pago_estacionamiento(0)<<endl;
	cout<<pago_estacionamiento(1)<<endl;
	cout<<pago_estacionamiento(5)<<endl;
	cout<<pago_estacionamiento(6)<<endl;
	cout<<pago_estacionamiento(10)<<endl;
	cout<<pago_estacionamiento(11)<<endl;
	cout<<pago_estacionamiento(24)<<endl;
}
