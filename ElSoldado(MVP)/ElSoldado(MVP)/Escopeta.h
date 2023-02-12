#pragma once
#ifndef ESCOPETA_H
#define ESCOPETA_H
#include<iostream>
#include<string>
#include"Arma.h"

using namespace std;

class Escopeta :public Arma
{
public:
	Escopeta()
	{
		this->_nombre = "Escopeta";
	}

	string const Disparar()
	{
		return "Paaa!...";
	}
};

#endif