#include <ctime> // biblioteco de funciones del reloj
#include <iostream> // Funciones E/S
#include <math.h> // Funciones matem�ticas
using namespace std;
void mostrarTiempo(clock_t tiempo);
int main () {
	clock_t tiempo = clock();      // iniciar reloj patra calcular tiempo   
	 // variables
	 long long i = 0;
	 double sum = 0;
	 // Inicia el ciclo de al rededor de 28 segundos
	 for (i = 1; i < 10000000000;i++);{
}

// Mostramos el tiempo que le tomo ejecutar
mostrarTiempo(tiempo);

// Salimos
cout << "Pulse para salir...";
cin.get();
return 0;
}

// Funci�n que calcula la ejecuci�n
 void mostrarTiempo (clock_t tiempo){
 	tiempo = clock() - tiempo;
 	cout<< endl << "Tiempo de ejecuci�n es " << double (tiempo) / CLOCKS_PER_SEC << "seg." << endl; 
 }
	
	

