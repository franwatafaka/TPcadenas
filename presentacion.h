////#############################################################################
// ARCHIVO : presentacion.h
// AUTOR : Francisco Sosa
// FECHA DE CREACION : 05/05/2018.
// ULTIMA ACTUALIZACION: 05/05/2018.
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE : Code::Blocks - 8.02 / 10.05
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
// Presentacion al inicio del programa.
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef PRESENTACION_H_INCLUDED
#define PRESENTACION_H_INCLUDED
#include <iostream>
#include "CSYSTEM/csystem.h"

using namespace std;
//*****************************************************************************
// DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION : void mostrarPresetacion (no retorna nada)
// ACCION : breve presentacion cuando inicia el programa
// PARAMETROS: ninguno
// DEVUELVE : muestra en pantalla una imagen en ASCII
//-----------------------------------------------------------------------------

void mostrarPresentacion()
{

cout <<"                      .:iPQQQBBDggBBB7.                                       "<< endl;
cout <<"                .uBXgZgDgBBBdBBBB1BQgBMBPi                                    "<< endl;
cout <<"             UBBBBBdQBBBBBBBBBBBBBBBBBBBDBBP.                                 "<< endl;
cout <<"          :BBBBBBQBBBBBBBBBBBBBBBBBQBBBBBBBBbBB.                              "<< endl;
cout <<"        iBBBQBBBBBQBBBQZ71rXK.i 2  .1EMQBBQBBBBBB                             "<< endl;
cout <<"      sBBBBQBBBBBBK:.   :qi iIB BSg:rqi.Dv.BBBBBBBB                           "<< endl;
cout <<"    jBBBBBBBBBBB...1:iYUvPRiBBBBBBBBBBBKBZsg:7YBBBBBB                         "<< endl;
cout <<"  7QBMBBBBBBBBBiXIBBBQBBBBBQBBBBBBBQBBBQBBQPUQK PBBBBB                        "<< endl;
cout <<" .QBBBBBBBBIQBBBB1ujBBBBQQBBBBBvQBBBBBBBBBD5QBBBJSgBBB:                       "<< endl;
cout <<" BBBBBBBBBBBBBBQ::PBDgj :.r5EBBPBE:QBBBEBBBBBBBQBBPrIBB                       "<< endl;
cout <<" BBBBBBBIiIBQBBBggUj BKZBBBBBBQBBBBBBBBBQBQBBBBBBBBBEBBB                      "<< endl;
cout <<" BQBBZRIvvBBBBBBBBQBBBBBBBBq7.   7BBBBBBBBBBBBBBBBQBBBBB                     "<< endl;
cout <<" BB7PBjKBBBBBQBBBBBBMi                   7BBBQBBBBBBBBBB                     "<< endl;
cout <<" BBQDBBBBBB:gBBBBQ                           BQBBBBBBBBBI                    "<< endl;
cout <<" BBBBBBBBB2BBBB:                               BBBBBBBBBB                    "<< endl;
cout <<" BBQ2QBBBd5BBQM                                  bBBBBBBBB                    "<< endl;
cout <<" .BYgBBBB:QBBB                                     7BBBBBBB                    "<< endl;
cout <<" :BBBBQBQBBBg     i::..:..              sBBBBBI:     BBBBBU                    "<< endl;
cout <<" .BQBBBZBBBr 7BBBBBBBBBBBBBQ  :       .BBBBQBBBBBQB. XBQBB                     "<< endl;
cout <<" BBQBBBBBBBQBQBBBBBBBBBBBBBBBP.      BBBBBBBBBBBBBBB BBBB                     "<< endl;
cout <<" BBBQBBBBBBBBBBBQBq:DBBQQBB        gBBBBP7vjvrbBBBBB BBBB                     "<< endl;
cout <<" rBQBBBB BBBBBBQBBBBDvBBBBB   :qg   BBBBQ    vRQBBBu QBBB                     "<< endl;
cout <<" BBQBQYS.BBBBBBQBQBBBQBBB  .BBBB7   gBBQBQvrBBBBBB  LQBB                     "<< endl;
cout <<" QBBBB P  QBBBBBQBBBBB.   BBBBqBQBP   LBBBBBBBBB.    BBB                     "<< endl;
cout <<"  BBBB Ui  rBBBBRi       BBQBB5rBBBiv      iEQr      IBB                     "<< endl;
cout <<"  iBBB X           I  iJ.BBBK5:QBBQ:JB                Qr                     "<< endl;
cout <<"   :BBDr:    EBBBQBBB :  QBQLEBBBBBB:Bj.jEBBBBi    :sr                       "<< endl;
cout <<"     BBJi277gKjvv:iBBB..B BBBB7QBBQBB 2i:.:..  sBBBBBB                       "<< endl;
cout <<"      .BsQBBj::     Jii.BBBBBQ rBBBB         .EBBBBBB                        "<< endl;
cout <<"        QBBBBB.             BBBD            7BBBBBgBBQBs                     "<< endl;
cout <<"    7:rrBQBBBQ1              Br             BBBBgYBBBBB.                     "<< endl;
cout <<" Z.    :BB1BBBQ   .QPPvsbBQBXBBBBBBBBB      BBBB1:vQBBBQ                     "<< endl;
cout <<"  Y.  :7:BBBBBBBQBBrEPXQBBBBBBBBBBBQBBBBBB75BBBQB.BQBBBBB.                   "<< endl;
cout <<"   :B:rQd5BBgjrBB5 iBBZBQEB  vQ:BBBBBBBBQBQBUBBBB:iBQB5.Xi                   "<< endl;
cout <<"    BQBBBBBDq1:1PQuQBJB  BB       .  d qMBBBBQq25:i vBB.                     "<< endl;
cout <<"      BBQBQBBQBBBBBBQBBBBBBBBBQQiPBBQBQBBBBBBBBBQuBBBv.                   "<< endl;
cout <<"      jBBBBBBBBBBXBBBBBBBBBBBBBQBBBBBBBBBQBBBBBBBBj  rJ.                  "<< endl;
cout <<"      I uBQBBPsivBMB5JBdPgBJ.BsEXBQr .:bBBQBBBBBQBBBL            v1rri    "<< endl;
cout <<"         rBBgQuBBBBPIiviD.KBqKBBrBBXirr.BBBgBBDBBBBBBBB        BBBBBBBBBX "<< endl;
cout <<"         .BBBEZBXPqvQur5ML7PPSBB5BgBYuR75s.PBBBBBBBBBBBBr     BBBBQB BBBB "<< endl;
cout <<"         .BBBQR.:IQuRPPvPU2vPDB.sBQBBBBqIgi:KKBBBB   MBBBBBQ:BBQBBBi PBBB:"<< endl;
cout <<"          BBQI:rvBQBB WATAFAKA DEV DZ52MBBP::rLZr     BBQsRBQBBZBB5..UQBB7"<< endl;
cout <<"          BBBBBQQBUD: WATAFAKA DEV rvdYYBBBb:7SB2       BBBB5Y.rr..BBQBBBr"<< endl;
cout <<"           BBBQBR:B.. WATAFAKA DEV j.BP:MBBB::Ed7         JBBBBBvUQBBBBBQ "<< endl;
cout <<"            vBBQr.BZI2BPgdPLBQBZg1P5 sBBBBBBBBY.              .75DBQBQJ   "<< endl;
cout <<"            MBBBg2BBPBBsBrUi.JB:rLPBr5BBBBBBBBi                           "<< endl;
cout <<"             BBBBBBBBBBQB:BIBBKBP5dBBQBBBBBQr                             "<< endl;
cout <<"             .BBbBBBBBBBB5BBBBDBQBQBBBQBQr.                               "<< endl;
cout <<"                  i.MBBQELBBBBgi2:  qr                                    "<< endl;
cout <<"                                                                      "<< endl;


sys::msleep(3);

}


#endif // PRESENTACION_H_INCLUDED
