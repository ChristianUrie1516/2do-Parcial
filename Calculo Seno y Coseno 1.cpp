#include <iostream>
#include <cmath>    // Para funciones sin() y cos()
#include <iomanip>  // Para setprecision()

using namespace std;

int main() {
    double angulo_radianes;
    
    // Paso 1: Leer el ángulo en radianes
    cout << "CALCULADORA DE SENO Y COSENO\n";
    cout << "Ingrese el angulo en radianes: ";
    cin >> angulo_radianes;
    
    // Validar la entrada
    while(cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Entrada invalida. Por favor ingrese un numero: ";
        cin >> angulo_radianes;
    }
    
    // Paso 2: Calcular seno y coseno
    double seno = sin(angulo_radianes);
    double coseno = cos(angulo_radianes);
    
    // Paso 3: Mostrar resultados con 4 decimales de precisión
    cout << fixed << setprecision(4);
    cout << "\nRESULTADOS:\n";
    cout << "Seno(" << angulo_radianes << " rad) = " << seno << endl;
    cout << "Coseno(" << angulo_radianes << " rad) = " << coseno << endl;
    
    return 0;
}
