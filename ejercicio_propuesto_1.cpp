#include <iostream>
using namespace std;

struct EMP{
    string nombre;
    char sexo[10];
    float sueldo;
};

int main(){
    EMP EMPLEADOS[100];
    int n;
    
    cout <<"Ingrese la cantidad de trabajadores: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cout<<"Nombre: ";
        getline(cin, EMPLEADOS[i].nombre);
        cout<<"Sexo: ";
        cin.getline(EMPLEADOS[i].sexo, 10);
        cout<<"Sueldo: ";
        cin>>EMPLEADOS[i].sueldo;
        cin.ignore();
    }
    for(int i=0; i<n; i++){
    	cout<<"Datos del empleado de la Empresa Data Tech: "<<endl;
    	cout<<EMPLEADOS[i].nombre<<endl;
    	cout<<EMPLEADOS[i].sexo<<endl;
    	cout<<EMPLEADOS[i].sueldo<<endl;
		}
    return 0;
}