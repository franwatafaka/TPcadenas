////#############################################################################
// ARCHIVO : menu.h
// AUTOR : francisco sosa
// FECHA DE CREACION : dd/mm/aaaa.
// ULTIMA ACTUALIZACION: 11/05/2018.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE : Code::Blocks - 8.02 / 10.05
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// Opciones del programa y muestreo de menu
//
/////////////////////////////////////////////////////////////////////////////////
#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>
#include "CSYSTEM/csystem.h"
#include "cadenas.h"

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : tipo nombre(lista de parametros)
// ACCION : explicar brevemente que es lo que hace la funcion y como.
// PARAMETROS: lista de parametros (uno por linea donde se indique: tipo, nombre,
// que representa, y valores posibles si existieran limitaciones).
// DEVUELVE : tipo --> explicacion si representa algo.
//-----------------------------------------------------------------------------

using namespace std;

void mostrarMenu()
{
    system("cls");
    cout<< "************MENU*****************"<< endl;
    cout<< "*         1- strLen             *"<< endl;
    cout<< "*         2- strCpy             *"<< endl;
    cout<< "*         3- strCat             *"<< endl;
    cout<< "*         4- strCmp             *"<< endl;
    cout<< "*         5- strFind            *"<< endl;
    cout<< "*         6- strCnt             *"<< endl;
    cout<< "*         7- strInv             *"<< endl;
    cout<< "*         8- strRpl             *"<< endl;
    cout<< "*         9- strTrunc           *"<< endl;
    cout<< "*        10- strSub             *"<< endl;
    cout<< "*        11- strToUpper         *"<< endl;
    cout<< "*        12- strToLower         *"<< endl;
    cout<< "*        13- strToInt           *"<< endl;
    cout<< "*        14- intToStr           *"<< endl;
    cout<< "*        15- SALIR              *"<< endl;
    cout<< "*********************************"<< endl;
    int op;
    bool salir = false;
    while(!salir)
    {
        cout<< "Ingrese una opcion: ";
        cin >> op;
        cin.ignore();
        switch(op)
        {
        case 1:
            {
                //largo cadena
                char cadena[20];
                cout << "Ingrese una cadena: ";
                sys::getline(cadena,20);
                int largoCadena = strLen(cadena);
                cout <<"El largo de la cadena es: " << largoCadena << endl;

            }
            break;
        case 2:
            {
                //Reemplazar cadena destino
                char cadenaOrigen[20];
                char cadenaDestino[20];
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                strCpy(cadenaDestino, cadenaOrigen);
                cout << " -------------------"<< endl;
                cout << cadenaDestino << endl;
            }
            break;
        case 3:
            {
                // Concatenar cadenas
                char cadenaOrigen[20];
                char cadenaDestino[20];
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << " -------------------"<< endl;
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaDestino,20);
                strCat(cadenaDestino, cadenaOrigen);
                cout << " -------------------"<< endl;
                cout << cadenaDestino << endl;

            }
            break;
        case 4:
            {
                // Comparar cadenas largo
                char cadenaOrigen[20];
                char cadenaDestino[20];
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << " -------------------"<< endl;
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaDestino,20);
                cout << " -------------------"<< endl;
                cout << strCmp(cadenaDestino, cadenaOrigen)<< endl;

            }
            break;
        case 5:
            {
                // Buscar caracter
                char cadenaOrigen[20];
                char letraBuscar;
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << " -------------------"<< endl;
                cout << "Ingrese una letra a buscar: ";
                cin >> letraBuscar;
                cout << " -------------------"<< endl;
                cout << strFind(letraBuscar, cadenaOrigen) << endl;
            }
            break;
        case 6:
            {
                // Cuantas veces se repite el caracter
                char cadenaOrigen[20];
                char letraBuscar;
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << " -------------------"<< endl;
                cout << "Ingrese una letra a buscar: ";
                cin >> letraBuscar;
                cout << " -------------------"<< endl;
                cout << "la letra buscada se repite: " << strCnt(letraBuscar, cadenaOrigen) << " veces." << endl;
            }
            break;
        case 7:
            {
                // Invertir cadena
                char cadenaOrigen[20];
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << " -------------------"<< endl;
                strInv(cadenaOrigen);
                cout << cadenaOrigen << endl;
            }
            break;
        case 8:
            {
                 // Cambiar indice dado
                char cadenaOrigen[20];
                char caracterNuevo;
                int nroIndiceCambio;
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << " -------------------"<< endl;
                cout << "Ingrese nuevo caracter ";
                cin >> caracterNuevo;
                cout << "Ingrese nro de indice donde aplicar nuevo caracter: ";
                cin >> nroIndiceCambio;
                strRpl(cadenaOrigen, caracterNuevo, nroIndiceCambio);
                cout << cadenaOrigen << endl;

            }
            break;
        case 9:
            {
                // Cortar cadena en indice dado
                char cadenaOrigen[20];
                int nroIndiceCambio;
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,20);
                cout << "Ingrese nro de indice donde aplicar nuevo corte: ";
                cin >> nroIndiceCambio;
                strTrunc(cadenaOrigen, nroIndiceCambio);
                cout << cadenaOrigen << endl;
            }
            break;
        case 10:
            {
                // buscar comienzo subcadena
                char cadenaOrigen[50];
                char subCadena[50];
                cout << "Ingrese una cadena: ";
                sys::getline(cadenaOrigen,50);
                cout << "Ingrese la subcadena: ";
                sys::getline(subCadena,50);
                cout << strSub(cadenaOrigen, subCadena) << endl;
            }
            break;
        case 15:
            {
                salir = true;
            }
            break;
        default:
            {
                cout << "La opción ingresada no corresponde a ninguna de las ofrecidas. Paparulo." << endl;
            }
        }
    cin.get();
    }
}
#endif // MENU_H_INCLUDED
