// Aula3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida
#include <string>	//cadeia


using namespace std;
int main(){
//#pragma region Exc 1
////escreva um algoritmo que exiba números de 1 a 50
//int number = 1;
//for (number; number <= 50; number++) {
//	cout << number << endl;
//}
//#pragma endregion

//#pragma region Exc 2
//Escreva um programa que seja capaz de mostrar todas as tabuadas (de 1 a 9)
//int a=0, b, r;
//
//for (a = 0; a <= 10; a++) {
//	for (b = 0; b <= 10; b++) {
//		r = a * b;
//		cout << a << " x " << b << " = " << r << endl;
//	}
//	cout << endl;
//}
//#pragma endregion

#pragma region Exc 3
	//Faça um programa que solicite ao usuário um número e em seguida demonstra os elementos da sequência de Fibonnacci
	//até a posição indicada pelo número: exemplo - se digitar 3 deverá mostrar 1, 1, 2
	int n,a=0,b=1,c=1;
	cin >> n;
	for (c = 1; c <= n; c++) {
		c = a + b;
		a = b;
		b = c;
		cout << c << endl;
	}

#pragma endregion

    return 0;
}

