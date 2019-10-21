#include<iostream>

void suma(double numero1,double numero2);
void resta(double numero1, double numero2);
void division(double numero1, double numero2);
void multiplicacion(double numero1, double numero2);
double numeros();
double numero1=0, numero2=0;
double res = 0;
int main() {
	int op = 1;
	do {
		std::cout << "Menu v2           \n";
		std::cout << "[1]Suma            \n";
		std::cout << "[2]Resta           \n";
		std::cout << "[3]Division        \n";
		std::cout << "[4]Multiplicacion  \n";
		std::cout << "[5]Salir           \n";
		std::cin >> op;
		switch (op) {
		case 1:
			numeros();
			suma(numero1, numero2);
			break;
		case 2:
			numeros();
			resta(numero1, numero2);
			break;
		case 3:
			numeros();
			division(numero1, numero2);
			break;
		case 4:
			numeros();
			multiplicacion(numero1, numero2);
			break;
		default:
			break;
		}
	} while (op!=5);
}

double numeros() {
	std::cout << "Inserte Numero 1   \n";
	std::cin >> numero1;
	std::cout << "Inserte Numero 2   \n";
	std::cin >> numero2;
	return numero1, numero2;
}

void suma(double numero1, double numero2) {
	res = numero1 + numero2;
	std::cout << "La Suma de los 2 Numeros es: " << res << "\n";
}
void resta(double numero1, double numero2) {
	res = numero1 - numero2;
	std::cout << "La Resta de los 2 Numeros es: " << res << "\n";
}
void division(double numero1, double numero2) {
	res = numero1 / numero2;
	std::cout << "La Division de los 2 Numeros es: " << res << "\n";
}
void multiplicacion(double numero1, double numero2) {
	res = numero1 * numero2;
	std::cout << "La multipliacion de los 2 Numeros es: " << res << "\n";
}
