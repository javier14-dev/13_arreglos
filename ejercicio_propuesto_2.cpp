#include <iostream>
using namespace std;

struct PERSONA{
    string nombre;
    int DNI;
    int edad;
}PER[100];

int main(){
    int n;
    cout<<"Ingrese el numero de personas: ";
    cin>>n;
 
    for(int i=0; i<n; i++){
        cout<<"Nombre: ";
        cin.getline(PER[i].nombre);
        cout<<"DNI: ";
        cin>>PER[i].DNI;
        cout<<"Edad: ";
        cin>>PER[i].edad;
    }
    for(int i=0; i<n; i++){
        if(PER[i]>50){
        cout<<"Nombre: "<<PER[i].nombre<<endl;
        cout<<"DNI: ";<<PER[i].DNI<<endl;
        cout<<"Edad: ";<<PER[i].edad<<endl;
        }
        else{
            cout<<"ERROR ingrese un numero mayor a 50. ";
        }
    }
    return 0;
}