/*
* Author: Gonçalo
* Email: a21666@alunos.ipca.pt
* Date: 11/03/2022
* Desc: Função principal
* ???
*/

#include "Structs.h"
#include <stdio.h>

int main()
{
	job* headlist = NULL;
	headlist = lerFile();
	float media;
	int	min, max;

	if (!headlist)
	{
		headlist = criaJob(1);
	}

	operacao* op1 = criaOper(123);
	operacao* op2 = criaOper(456);
	operacao* op3 = criaOper(789);
	operacao* op4 = criaOper(111);
	operacao* op5 = criaOper(123456);


	maqTempo* m1 = criaMaq(1, 40);

	maqTempo* m2 = criaMaq(2, 35);
	maqTempo* m50 = criaMaq(2, 666);

	maqTempo* m3 = criaMaq(3, 32);

	maqTempo* m4 = criaMaq(4, 40);
	maqTempo* m5 = criaMaq(5, 35);
	maqTempo* m6 = criaMaq(6, 32);
	maqTempo* m7 = criaMaq(7, 40);
	maqTempo* m8 = criaMaq(8, 35);
	maqTempo* m9 = criaMaq(9, 32);




	op1 = insereMaquina(op1, m1);

	op1 = insereMaquina(op1, m2);
	//op1 = insereMaquina(op1, m2);

	op3 = insereMaquina(op3, m3);

	op5 = insereMaquina(op5, m4);
	op5 = insereMaquina(op5, m5);
	op5 = insereMaquina(op5, m6);
	op5 = insereMaquina(op5, m7);
	op5 = insereMaquina(op5, m8);
	op5 = insereMaquina(op5, m9);

	headlist = inserirOper(headlist, op1);
	headlist = inserirOper(headlist, op2);
	headlist = inserirOper(headlist, op3);
	headlist = inserirOper(headlist, op4);
	headlist = inserirOper(headlist, op4);
	headlist = inserirOper(headlist, op5);

	headlist = remover(headlist, 456);

	headlist = alterarMaq(headlist, 789, 3, 9, 79);
	headlist = alterarOp(headlist, 123, 321);

	media = calculaMedia(op5);
	min = minimo(headlist);
	max = maximo(headlist);

	escreveFile(headlist);

	return 1;
}