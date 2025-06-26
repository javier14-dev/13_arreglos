#include <iostream>
using namespace std;

struct EMP{
    string nombre;
    char sexo[10];
    float sueldo;
};

int main(){
    EMP EMPLEADOS[100];
    int n, pos_menor, pos_mayor;
    float mayor = 0, menor = 99999;

    cout<<"Ingrese la cantidad de trabajadores: ";
    cin>> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout <<"Nombre: ";
        getline(cin, EMPLEADOS[i].nombre);
        cout <<"Sexo: ";
        cin.getline(EMPLEADOS[i].sexo, 10);
        cout <<"Sueldo: ";
        cin >> EMPLEADOS[i].sueldo;
        cin.ignore();

        if(EMPLEADOS[i].sueldo > mayor) {
            mayor = EMPLEADOS[i].sueldo;
            pos_mayor = i;
        }
        if(EMPLEADOS[i].sueldo < menor) {
            menor = EMPLEADOS[i].sueldo;
            pos_menor = i;
        }
        cout<<" "<<endl;
    }

    cout<<"Empleado con mayor salario:\n";
    cout<<"Nombre: "<< EMPLEADOS[pos_mayor].nombre<< endl;
    cout<<"Sexo: "<< EMPLEADOS[pos_mayor].sexo<< endl;
    cout<<"Sueldo: "<< EMPLEADOS[pos_mayor].sueldo<< endl;

    cout<<"\nEmpleado con menor salario:\n";
    cout<<"Nombre: "<< EMPLEADOS[pos_menor].nombre<< endl;
    cout<<"Sexo: "<< EMPLEADOS[pos_menor].sexo<< endl;
    cout<<"Sueldo: "<< EMPLEADOS[pos_menor].sueldo<< endl;

    return 0;
}
