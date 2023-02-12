#pragma once
#ifndef ARMA:H
#define ARMA_H
#include<iostream>
#include<string>

using namespace std;

class Arma
{
protected:
	string _nombre;

public:
	virtual const string Disparar() = 0;
	virtual ~Arma() = default;
	string GetArma()
	{
		return _nombre;
	}
};

#endif
