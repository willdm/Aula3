// Aula3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida 
#include <string>	//cadeia
#include "time.h"	//util.sorteia


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
	//	c = a + b;3
	//	a = b;
	//	b = c;
	//	cout << c << endl;
	//}
#pragma endregion

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

#pragma region Exc 6
	//Faça um programa que solicite um valor N ao usuario. Demontre os numeros primos que aparecem até N.
	//int inicio, num_final;
	//bool ehprimo;
	//cin >> num_final;

	//for (inicio = 2; inicio <= num_final; inicio++) {
	//	ehprimo = true;
	//	for (int i = 2; i < inicio; i++) {
	//		if (inicio % i == 0) {
	//			ehprimo = false;
	//		}
	//	}
	//	if (ehprimo) {
	//		cout << inicio << endl;
	//	}
	//}
#pragma endregion

#pragma region Exc 7
	//Solicite ao usuário 5 números inteiros e armazene esses números em um array.Exiba o array preenchido;
		//int c, vetor[5];
		//for (c = 0; c < 5; c++) {
		//	cin >> vetor[c];
		//	}
		//for (c = 0; c < 5; c++)
		//{
		//	cout << vetor[c] << ", ";
		//}

#pragma endregion 

#pragma region Exc 8
 /*solicita ao usuário 10 valores reais e armazene em um array.
 calcule e exiba a média aritmética dos valores.
 em seguida, exiba todos os valores digitados que estão acima da média calculada.
	cout << "escreva dez notas de provas: " << endl;	
	double media= 0.0 , vetor[10];
	for (int c = 0; c < 10; c++){
		cin >> vetor[c];
		media += vetor[c];
		}
	media = media / 10;
	cout << "notas acima da média: " << "(" << media << ")" << endl;
	for (int c = 0; c < 10; c++){
		if (vetor[c] >= media) {
			cout << vetor[c] << "	";
		}
	}*/
#pragma endregion

#pragma region Exc 9
	/*Faça um algoritmo em que o usuário preencha dois arrays de 10 posições.
	O programa deve fazer a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro array.Exiba o array resultante.*/
	/*cout << "escreva 2 vezes dez numeros de provas: " << endl;
	int media = 0.0, vet1[10], vet2[10], vetr[10] ;
	for (int c = 0; c < 10; c++) {
		cin >> vet1[c];
	}
	for (int c = 0; c < 10; c++) {
		cin >> vet2[c];
	}
	for (int c = 0; c < 10; c++) {
		vetr[c] = vet1[c] * vet2[c];
		cout << vetr[c] << "	";
	}
	cout << endl;*/
#pragma endregion

#pragma region Exc 10
	//Preencha um array de 50 posições com números aleatórios entre 1 e 50 e exiba :
	//O menor valor contido no array;
	//O índice do menor valor contido no array;
	//A quantidade de números ímpares contidos no array;
	//Todos os números pares contidos no array.

	srand(time(NULL));
	int mv, imv, qtdimp = 0, qtdpares = 0, vet[50];
	int op;
		for (int c = 0; c < 50; c++) {
			vet[c] = rand() % 100;
			cout << vet[c] << "	";
		}

		for (int i = 0; i < 50; i++) {
			if (i == 0) {
				mv = vet[i];
				imv = i;
			}
			if (vet[i] < mv) {
				mv = vet[i];
				imv = i;
			}
			if (vet[i] % 2 == 0) {
				qtdpares += 1;
			}
			else {
				qtdimp += 1;
			}
		}

		cin >> op;
		switch (op){
		case 1:
			cout << "O menor valor contido no array é : " << mv << endl;
			break;
		case 2:
			cout << "O índice do menor valor contido no array é : " << imv << endl;
			break;
		case 3:
			cout << "A quantidade de números ímpares contidos no array é : " << qtdimp << endl;
			break;
		case 4:
			cout << "Todos os números pares contidos no array é : " << qtdpares << endl;
			break;
		default:
			break;
		}
#pragma endregion

#pragma region Exc 11
	//Faça um algoritmo que preencha uma matriz 3x3 de números inteiros com um valor digitado pelo usuário em todas as posições e exiba a matriz
	/*int colun, line, n = 3;
	cout << "Preencha uma matriz de 3X3";

	for (colun = 0; colun < n; colun++) {
		for (line = 0; line < n; line++) {
			cin >> line[];
		}
	}*/
#pragma endregion

    return 0;
}

