#include <cmath>
#include <limits>
#include <iostream>
using namespace std;    

int main()
{

	// ejercicio 1

	/*cout << "dame un numero : ";
	int numero;
	cin >> numero;
	int cuadrado = numero * numero;
	cout << "el cuadrado de " << numero << " es " << cuadrado << endl;
*/


// ejercicio 2
	/*/cout << "dame la apotema y el perimetro de un hexagono : ";
	double apotema, perimetro;
	cin >> apotema >> perimetro;
	double area = (perimetro * apotema) / 2;
	cout << "el area del hexagono es : " << area << endl;
	*/

	// ejercicio 3

		/*cout << "dame un numero : ";
		int numero;
		cin >> numero;
		if (numero % 2 == 0) {
			cout << "el numero es par" << endl;
		}
		else {
			cout << "el numero es impar" << endl;
		}
		if (numero >= 0) {
			cout << "el numero es positivo" << endl;
		}
		else {
			cout << "el numero es negativo" << endl;
		}
		*/



		// ejercicio 4

		/*cout << "dame la altura a la que cae el objeto : ";
		double altura;
		cin >> altura;
		const double gravedad = 9.81;
		double tiempo = sqrt((2 * altura) / gravedad);
		cout << "el tiempo que tarda en caer el objeto es : " << tiempo << " segundos" << endl;
		*/

		// ejercicio 5

	/*for (int i = 0; i < 10; i++) {
		cout << i + 1 << endl;
	}
	*/

	// ejercicio 6
	 
	/*for (int i = 0; i < 20; i++) {
		if (i % 2 != 0) {

			cout << i  << endl;

		}

	}
	*/
	// ejercicio 7
	/*
		int filas;
		cout << "Ingrese el numero de filas: ";
		cin >> filas;

		int num = 1;

		for (int i = 1; i <= filas; i++) {
			for (int j = 1; j <= i; j++) {
				cout << num << " ";
				num++;
			}
			cout << endl;
		}

		return 0;
	*/
	// ejercicio 8

	/*long long binario;
	int decimal = 0, octal = 0, resto, i = 0, j = 1;

	cout << "Ingrese un numero binario: ";
	cin >> binario;

	
	while (binario != 0) {
		resto = binario % 10;
		decimal += resto * pow(2, i);
		i++;
		binario /= 10;
	}

	
	i = 1;
	while (decimal != 0) {
		resto = decimal % 8;
		octal += resto * i;
		decimal /= 8;
		i *= 10;
	}

	cout << "El numero en octal es: " << octal << endl;

	*/

	// ejercicio 9

	/*int decimal, binario[32], i = 0;

	cout << "Ingrese un numero decimal: ";
	cin >> decimal;

	
	while (decimal > 0) {
		binario[i] = decimal % 2;  
		decimal = decimal / 2;     
		i++;
	}

	cout << "El numero en binario es: ";
	for (int j = i - 1; j >= 0; j--) {
		cout << binario[j];
	}
	cout << endl;

	return 0;
	*/

	// ejercicio 10 
 int numero;
 float suma = 0, promedio;

 cout << "Ingrese 10 numeros:" << endl;

 for (int i = 1; i <= 10; i++) {
	cout << "Numero " << i << ": ";
	cin >> numero;
	suma += numero;
 }

 promedio = suma / 10;

 cout << "\nLa suma de los numeros es: " << suma << endl;
 cout << "El promedio de los numeros es: " << promedio << endl;

}


