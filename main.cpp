#include<iostream>
#include "arreglo.h"
#include"Computadora.h"
#include<string>
using namespace std;

int main()
{
    Arreglo<Computadora>computadoras;

    Computadora p01("256 Gb", "12 Gb", "Windows", "Lenovo");
    Computadora p02("500 Gb", "8 Gb", "Windows", "HP");
    Computadora p03("500 Gb", "12 Gb", "MacOs", "Apple");
    Computadora p04("1 Tb", "12 Gb", "Ubuntu", "Asus");

    computadoras << p01 << p02 << p03 << p04 << p02 << p02;
    Computadora p05("256 Gb", "8 Gb", "Windows", "HP");

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(p05);

    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else{
        cout << "No existen coincidencias" << endl;
    }

    /*Computadora *ptr = computadoras.buscar(p05);

    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else
    {
        cout << "No existe" << endl;
    }

    cout << *ptr << endl;*/
    

    /*Arreglo<string>arreglo;

        arreglo.insertar_inicio("bienvenido");
        arreglo.insertar_inicio("Hola");
        arreglo.insertar_final("al");
        arreglo.insertar_final("mundo");
        
        arreglo.insertar("persona", 2);
        arreglo.eliminar_inicio();
        arreglo.eliminar_final();
        arreglo.eliminar(2);

    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;*/


    return 0;
}