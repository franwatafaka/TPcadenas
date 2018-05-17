////#############################################################################
// ARCHIVO : cadenas.h
// AUTOR : Francisco Sosa
// FECHA DE CREACION : 27/04/2018.
// ULTIMA ACTUALIZACION: dd/mm/aaaa.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE : Code::Blocks - 8.02 / 10.05
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// Libreria de funciones generales del programa
//
/////////////////////////////////////////////////////////////////////////////////
#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#include <iostream>
#include "CSYSTEM/csystem.h"

using namespace std;

int resultado;

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strLen
// ACCION :  cuenta la cantidad de caracteres que integran una cadena.
// PARAMETROS:  cadena de caracteres
//lista de parametros
// cadena ( recibe char)
// DEVUELVE : int --> devuelve la cantidad de caracteres ingresados
//-----------------------------------------------------------------------------

char strLen (char *cadena)
{
    int i = 0;
     while (cadena[i]!='\0')
     {
           i++;
     }
        return i;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strCpy
// ACCION :  : copia una cadena en otra.
// PARAMETROS:  2 cadenas de caracteres
// cadena-destino string donde se va a almacenar la cadena seleccionada.
// cadena-origen string  del cual proviene, es la que se va a copiar.
// DEVUELVE : nada
// tipo --> void
//-----------------------------------------------------------------------------

void strCpy(char *cDestino, char *cOrigen)
{
    int i = 0;
    while(cOrigen[i]!='\0')
    {
        cDestino[i] = cOrigen[i];
        i++;
    }
    cDestino[i] = '\0';
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strCat
// ACCION :  : Concatena dos cadenas dejando el resultado en la cadena inicial
// PARAMETROS:  cadena inicial cadena final
// cdestino string donde se va a concatenar la cadena seleccionada.
// cOrigen string  del cual proviene, es la que se va a anexar.
// DEVUELVE : nada
// tipo --> void
//-----------------------------------------------------------------------------

void strCat(char *cDestino, char *cOrigen)
{
    int largoDestino = strLen(cDestino);
    int largoOrigen = strLen(cOrigen);
    int largoCadena = largoDestino + largoOrigen;

    for (int i=0; i <= largoOrigen; i++)
    {
     cDestino[largoDestino] = cOrigen[i];
     largoDestino++;
    }
    cDestino[largoCadena+1] = '\0';
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strCmp
// ACCION :  : Compara dos cadenas
// PARAMETROS:
// cdestino a comparar
// cOrigen a comparar
// DEVUELVE :
//Un 0 si son iguales.
//Un número positivo si la primera es mayor que la segunda.
//Un número negativo si la segunda es mayor que la primera
// tipo --> int
//-----------------------------------------------------------------------------

int strCmp(char *cad1, char *cad2)
{
   int largoC = strLen(cad1);
   int largoB = strLen(cad2);

    if(cad1[largoC] == cad2[largoB]  )
    {
        resultado = 0;
    }
    else if( cad1[largoC] > cad2[largoB] )
   {
       resultado = 1;
   }
   else if(cad1[largoC] > cad2[largoB])
   {
       resultado = -1;
   }

   return resultado;
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strFind
// ACCION :  : busca un caracter dentro de una cadena
// PARAMETROS:
// caracBuscar a buscar
// cOrigen donde buscar
// DEVUELVE :
//numerp de indice donde se encuentra
// -1 si no lo encuentra
// tipo --> int
//-----------------------------------------------------------------------------

int strFind(char caracBuscar, char *cOrigen)
{
    int nroIndice = 0;
    int i = 0;
    while (cOrigen[i]!='\0')
    {
        if(cOrigen[i]==caracBuscar)
        {
            nroIndice = i;
            break;
        }
        else
        {
            nroIndice = -1;
        }
        i++;
    }
    return nroIndice;
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strCnt
// ACCION :  :  cuenta cuántas de veces aparece un carácter dentro de una cadena.
// PARAMETROS:
// cadena
// caracter
// DEVUELVE :
//numero de veces que aparece un caracter dicho en una cadena
// tipo --> int
//-----------------------------------------------------------------------------
int strCnt(char caracBuscar, char *cOrigen)
{
    int nroIndice = 0;
    int i = 0;
    while (cOrigen[i]!='\0')
    {
        if(cOrigen[i]==caracBuscar)
        {
            nroIndice++;
        }
        i++;
    }

    return nroIndice;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strInv
// ACCION :  :  Invierte los caracteres de una cadena
// PARAMETROS:
// cadena
// DEVUELVE :
//nada
// tipo --> void
//-----------------------------------------------------------------------------
void strInv(char *cOrigen)
{
    int i = 0;
    int largo = (strLen(cOrigen))-1;
    char nuevaCadena[largo];
    while(largo >= 0)
    {
        nuevaCadena[i] = cOrigen[largo];
        i++;
        largo--;
    }

    nuevaCadena[i]='\0';
    i = 0;
    while (nuevaCadena[i]!='\0')
    {
        cOrigen[i]=nuevaCadena[i];
        i++;
    }
    cOrigen[i]='\0';
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strRpl
// ACCION : reemplaza el carácter de una posición dada de una cadena por otro.
// PARAMETROS:
// cadena
// nuevo caracter por el que se remplaza
// posicion donde quiere reemplazarse el caracter
// DEVUELVE :
// nada
// tipo --> void
//-----------------------------------------------------------------------------
void strRpl(char *cOrigen,char nvoCaracter, int nroIndice)
{
    int largoCadena = strLen(cOrigen);
    bool bandera = false;
    if (nroIndice <= largoCadena)
    {
        cOrigen[nroIndice]=nvoCaracter;
        bandera = true;
    }
    else if (!bandera)
    {
    cout<< "El nro de indice ingresado no es correcto, por favor reintente nuevamente." << endl;
    }

}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strTrunc
// ACCION : trunca una cadena en una posición dada.
// PARAMETROS:
// cadena
// posicion donde quiere cortar la cadena
// DEVUELVE :
// nada
// tipo --> void
//-----------------------------------------------------------------------------
void strTrunc(char *cOrigen,int nroIndice)
{
    int largoCadena = strLen(cOrigen);
    bool bandera = false;
    if (nroIndice <= largoCadena)
    {
        cOrigen[nroIndice]='\0';
        bandera = true;
    }
    else if (!bandera)
    {
    cout<< "El nro de indice ingresado no es correcto, por favor reintente nuevamente." << endl;
    }
}

//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strSub
// ACCION : busca una subcadena dentro de una cadena
// PARAMETROS:
// cadena
// nueva cadena

// DEVUELVE :
// La posición inicial de la subcadena
// Un -1 si no se encuentra.
// tipo --> int
//-----------------------------------------------------------------------------
 char strSub(char *cadena, char *subCadena)
{
    int posi=-1;
    int ban=0;
    int i=0;
    int conteo=0;
    int pm=strLen(cadena);
    while (conteo<=pm)
    {
        if (cadena[conteo]==subCadena[i])
        {
            if (ban==0)
            {
                ban=1;
                conteo++;
                i++;
                if(posi==-1)
                {
                    posi=conteo -1;
                    if (subCadena[i]=='\0')
                    {
                        conteo=pm +1;
                    }
                }
                else
                {
                    if (subCadena[i]=='\0')
                    {
                        conteo=pm +1;
                    }
                }
            }
            else
            {
                conteo++;
                i++;
                if (subCadena[i]=='\0')
                {
                    conteo=pm +1;
                }
            }
        }
        else
        {
            conteo++;
            ban=0;
            i=0;
            posi=-1;
        }
    }
    return posi;
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strToUpper
// ACCION : convierte una cadena a mayuscula
// PARAMETROS:
// cadena
// DEVUELVE :
// nada
// tipo --> void
//-----------------------------------------------------------------------------
void strToUpper(char *cOrigen)
{
        int i = 0;
    while (cOrigen[i]!='\0')
    {
        if(cOrigen[i]>='a' && cOrigen[i]<= 'z')
        {
            cOrigen[i] -= 32;
        }
        i++;
    }
}
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strToLower
// ACCION : convierte una cadena a minusculas
// PARAMETROS:
// cadena
// DEVUELVE :
// nada
// tipo --> void
//-----------------------------------------------------------------------------
void strToLower(char *cOrigen)
{
    int i = 0;
    while (cOrigen[i]!='\0')
    {
        if(cOrigen[i]>='A' && cOrigen[i]<= 'Z')
        {
            cOrigen[i] += 32;
        }
        i++;
    }
}

// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : strToInt
// ACCION : convierte una cadena de caracteres a un número entero.
// PARAMETROS:
// cadena
// DEVUELVE :
// un numero entero
// tipo --> int
// Nota: los elementos de la cadena deben ser caracteres cuyo código ASCII se
//encuentre en el rango 48..57.
//-----------------------------------------------------------------------------

int strToInt(char *cadena)
{
    int i = 0;
    int largoCadena = strLen(cadena);
    int numero[largoCadena];
    while (cadena[i]!='\0')
    {
        //if(cadena[i]>='0' && cadena[i]<= '9')
        //{
            numero[i]= cadena[i] - '0';
            //probar debugger para ver como almacena.
        //}
        i++;
    }


    return *numero;
}

// *****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : intToStr
// ACCION : convierte un numero entero a cadena
// PARAMETROS:
//numero
// cadena
// DEVUELVE :
// nada
// tipo --> void
//-----------------------------------------------------------------------------
void intToStr(int nroConvertir, char *cOrigen)
{
// utilizar ejercicio ya planteado en campus



}

#endif // CADENAS_H_INCLUDED
