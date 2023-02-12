#pragma once
#ifndef SOLDADO_H
#define SOLDADO_H
#include<iostream>
#include<string>
#include"Arma.h"

using namespace std;

class Soldado
{
private:
	Arma* _arma;

public:
	~Soldado();
	void RecogerArma(Arma* _arma);
	void DejarArma();
	void Disparar();
	void VerArma();
};

#endif 



