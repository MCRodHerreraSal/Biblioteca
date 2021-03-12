#include<iostream>
#include "LibroCalificaciones.h"
using namespace std;


int main()
{
LibroCalificaciones libroCalificaciones1("CS101 Introducción a la programación en C++");
LibroCalificaciones libroCalificaciones2("CS102 Estructuras de datos en C++");
cout<<"libroCalificaciones 1 se creo paara el curso: "<<libroCalificaciones1.obtenerNombreCurso()<<"\n libroCalificaciones 2 se creo paara el curso"<<libroCalificaciones2.obtenerNombreCurso()<<endl;
}
