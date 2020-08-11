#include <iostream>
#include <fstream>
int busqueda(int a[], int n, int dato);
using namespace std;

int main()
{
    ofstream archivodata;
    int arre[10] = { 4,6,15,3,5,23,14,8,12,10 };
    int dato;
    cout << "Ingrese el Numero a buscar: ";
    cin >> dato;
    archivodata.open("Lineal", ios::out);

    archivodata << "Arreglo { ";
    for (int y = 0; y < 10; y++)
    {
        archivodata << arre[y] << ",";
    }
    archivodata << " }\n";

    archivodata << "Elemento a buscar: " << dato << endl;

    if (busqueda(arre, 5, dato) == -1)
    {
        archivodata << "Elemento no encontrado";
        cout << "Elemento no encontrado";
    }
    else
    {
        archivodata << "Elemento encontrado en la posision: " << busqueda(arre, 5, dato);

        cout << "Elemento encontrado en la posision: " << busqueda(arre, 5, dato);

    }

    archivodata.close();



    return 0;
}

int busqueda(int a[], int n, int dato)
{
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == dato)
        {
            return i;
        }
    }
    return -1;
}