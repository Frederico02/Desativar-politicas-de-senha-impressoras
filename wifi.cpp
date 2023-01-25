/*            Desativar politicas de senha impressoras     */
/*		              Refatorado em 23/01/2023             */
/*	Frederico Almeida - Analista de Suporte Jr - Gupo Multi */


#include<iostream>
#include <windows.h> 
using namespace std;

int main(){
	
	ShowWindow(GetConsoleWindow(), SW_HIDE); // esconder prompt de comando
	
	system("reg add[HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\printers\\PointAndPrint]\"RestrictDriverInstallationToAdministrators\"=dword:00000000");
	return 0;
}

/* Alternativo 

#include <iostream>
#include <cstdlib>

int main() {
    std::system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\printers\\PointAndPrint /v RestrictDriverInstallationToAdministrators /t REG_DWORD /d 0 /f");
    return 0;
}
*/
