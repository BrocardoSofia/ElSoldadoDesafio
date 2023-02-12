#include "Soldado.h"

Soldado::~Soldado()
{
	if (_arma != nullptr)
	{
		//el soldado tiene un arma, libero el espacio antes de eliminar al soldado
		delete _arma;
	}
}

void Soldado::RecogerArma(Arma* _arma)
{
	this->_arma = _arma;
}

void Soldado::DejarArma()
{
	system("cls");//limpio pantalla
	if (_arma != nullptr)
	{
		cout << "El soldado dejo el " << _arma->GetArma() << endl;
		Arma* borrar = _arma;//almaceno el puntero a borrar
		_arma = NULL;//guardo NULL para informar que el soldado no tiene arma
		delete borrar;//libero la memoria del puntero - borro el arma
	}
	else
	{
		cout << "Parece que el soldado no tiene ningun arma en sus manos" << endl;
	}

	system("pause");//pauso hasta que el usuario presione una tecla para leer el mensaje
}

void Soldado::Disparar()
{
	system("cls");//limpio pantalla
	if (_arma == nullptr)
	{
		cout << "Parece que el soldado no tiene ningun arma en sus manos.." << endl;
	}
	else
	{
		//si tiene arma muestro el mensaje de disparo
		cout << _arma->Disparar() << endl;
	}
	system("pause");//pauso hasta que el usuario presione una tecla para leer el mensaje
}

void Soldado::VerArma()
{
	system("cls");//limpio pantalla
	if (_arma == nullptr)
	{
		cout << "Parece que el soldado no tiene ningun arma en sus manos.." << endl;
	}
	else
	{
		//si tiene arma muestro el mensaje de disparo
		cout << "Arma equipada:.......... " << _arma->GetArma() << endl;
	}
	system("pause");//pauso hasta que el usuario presione una tecla para leer el mensaje
}