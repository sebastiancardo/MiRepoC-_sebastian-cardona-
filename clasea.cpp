#include "clasea.h"
#include<iostream>
using namespace std;
clasea::clasea(int serial,string nombre)
{
    serial=0;
    nombre="";

}


void clasea::agregarEntradas(int serial_, string nombre_)
{
    static int serial=serial_;
    static string nombre=nombre_;
}
