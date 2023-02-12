#include "Presentador.h"

Presentador::Presentador()
{
	//reservo espacio de memoria para el soldado
	soldadito = new Soldado();
}

Presentador::~Presentador()
{
	delete soldadito;
}


void Presentador::agarrarArma(int tipo)
{
	Arma* aux;
	if (tipo == 1)
	{
		aux = new Revolver();
	}
	else
	{
		if (tipo == 2)
		{
			aux = new Rifle();
		}
		else
		{
			aux = new Escopeta();
		}
	}
	soldadito->RecogerArma(aux);
}

void Presentador::dispararArma()
{
	soldadito->Disparar();
}

void Presentador::dejarArma()
{
	soldadito->DejarArma();
}

void Presentador::verArma()
{
	soldadito->VerArma();
}