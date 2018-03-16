// Aula3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida
#include <string>	//cadeia


using namespace std;
int main(){
#pragma region Exc 1
////escreva um algoritmo que exiba números de 1 a 50
//int number = 1;
//for (number; number <= 50; number++) {
//	cout << number << endl;
//}
#pragma endregion

#pragma region Exc 2
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
#pragma endregion

#pragma region Exc 3
	////faça um programa que solicite ao usuário um número e em seguida demonstra os elementos da sequência de fibonnacci
	////até a posição indicada pelo número: exemplo - se digitar 3 deverá mostrar 1, 1, 2
	//int n,a=0,b=1,c=1;
	//cin >> n;
	//for (c = 1; c <= n; c++) {
	//	c = a + b;
	//	a = b;
	//	b = c;
	//	cout << c << endl;
	//}
#pragma endregion
//
#pragma region Exc 4
//	// Escreva um programa em que o usuario digita 10 valores e apresenta o maior e o menor dos valores digitados;
//	int array[10];
//	int menor_valor, maior_valor;
//	for (int c = 0; c < 10; c++) {
//		cin >> array[c];
//		if (c < 1) {
//			menor_valor = array [c];
//			maior_valor = array[c];
//		}		
//		if (array[c] < menor_valor) {
//			menor_valor = array[c];
//		}
//		if (array[c] > maior_valor) {
//			maior_valor = array[c];
//		}
//	
//	}
//	cout << endl << "Menor valor digitado é :" << menor_valor << ", ";
//	cout << "Maior valor digitado é :" << maior_valor << endl;
//
#pragma endregion
//
#pragma region Exc 5
	//Faça um programa em que o usuario digite um valor N. demonstre os resultados dos numeros pares  e impares que aparecem até N.
	//int n, p,i;
	//cin >> n;
	//while (n >= 1) {
	//	
	//	if (n % 2 == 0) {
	//		p = n;
	//		cout << "Pares: " << p << endl;
	//	}
	//	if (n % 2 == 1) {
	//		i = n;
	//		cout << "Impares: " << i << endl;
	//	}
	//	n--;
	//}

#pragma endregion
//
#pragma region Exc 6
	//Faça um programa que solicite um valor N ao usuario. Demontre os numeros primos que aparecem até N.
	int n, c, acum = 0;
	cin >> n;
	for (c = 2; c <= n; c++) {
		if (c == 2) {
			cout << "Este numero é Primo:" << c << endl;
		}
		else if (n % 2 != 0) {
			acum++;
		}
		else if (acum >= 1) { 
			cout << "Este numero é Primo:" << c << endl;
		}
		
	}



#pragma endregion






    return 0;
}

