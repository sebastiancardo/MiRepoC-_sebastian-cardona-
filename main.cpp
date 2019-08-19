#include <iostream>
#include<clasea.h>
#include<listadeobjetos.h>
#include<string>
using namespace std;

void nuevoObjetoLista()
{
    int serial=0;
    string nombre;
    cout<<"ingrese el serial:"<<endl;
    cin>>serial;
    cout<<"ingrese el nombre:"<<endl;
    cin>>nombre;
    clasea::agregarEntradas(serial, nombre);
    //ListadeObjetos::agregarObjetoLista();

}

int main()
{
    int opcion=0;
    int serial=0;
    void nuevoObjetoLista();

    string nombre;


    cout<<"Bienvenido a la aplicacion de manipulacion de listas:"<<endl;
    cout<<"Por favor indique la funcion que quiere realizar:"<<endl;
    cout<<"Presione 1. para agregar un objetos a la lista."<<endl;
    cout<<"Presione 2. para borrar un  objetos a la lista."<<endl;
    cout<<"Presione 3. para desplegar información de un objeto individual."<<endl;
    cout<<"Presione 4. para desplegar información de todos los objetos de la lista."<<endl;

    cin>>opcion;


    ListadeObjetos lista[20];
    clasea entradas(serial, nombre);

    switch(opcion){
    case 1:nuevoObjetoLista();


        break;
    case 2:;
        break;
    case 3:;
        break;
    case 4:;
        break;
    }




return 0;
}

