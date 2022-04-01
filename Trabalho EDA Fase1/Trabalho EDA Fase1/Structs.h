/**
* Author: Gonçalo
* Email: a21666@alunos.ipca.pt
* Date: 11/03/2022
* Desc: Assinatura de Structs, Funções
* ???
*/

#ifndef estruturas
#define estruturas 1

#pragma region structs
typedef struct maqTempo
{
	int maquina;
	int tempo;
	struct maqTempo *seguinte;
}maqTempo;

typedef struct operacao
{
	int cod;
	struct maqTempo *MaqTemp;
	struct operacao* seguinte;
}operacao;

typedef struct job
{
	int cod;
	struct job *seguinte;
	struct operacao *operacao;
}job;


#pragma endregion

#pragma region funcoes

job* insereJob(job* processo, job* headlist);
job* criaJob(int jobCod);
job* inserirOper(job* processo, operacao* op);
operacao* criaOper(int operCod);
operacao* insereMaquina(operacao* op, maqTempo* maq);
maqTempo* criaMaq(int maq, int tempo);

void escreveFile(job* processo);
job* lerFile();

job* remover(job* processo, int cod);
job* alterarOp(job* p, int cod, int novoCod);
job* alterarMaq(job* p, int opCod, int maq, int novamaq, int novotempo);

int maximo(job* processo);
int minimo(job* processo);
float calculaMedia(operacao* op);

#pragma endregion

#endif // !