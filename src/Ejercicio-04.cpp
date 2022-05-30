// Ejercicio-04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

/*
 * Completar la funcion 'kangaroo'.
 *
 * La funcion retornara un STRING.
 * Esta funcion acepta los siguientes parametros:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {

}


int main()
{

    int x1 = 0;

    int v1 = 0;

    int x2 = 0;

    int v2 = 0;

    cout << "Ingrse la posicion y velocidad del primer Canguro" << endl;
    cin >> x1;
    cin >> v1;

    cout << "Ingrese la posicion y velocidad del segundo Canguro" << endl;
    cin >> x2;
    cin >> v2;
    string result = kangaroo(x1, v1, x2, v2);

    cout << "Se encuentran los Canguros?" << endl;
    cout << result << "\n";

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
