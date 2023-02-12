#pragma once
#include<iostream>
#include<string>
#include"IView.h"
#include"Soldado.h"
#include"Revolver.h"
#include"Rifle.h"
#include"Escopeta.h"

class Presentador
{
private: 
	IView view;
	Soldado* soldadito;

public:
	Presentador();
	~Presentador();
	void agarrarArma(int tipo);
	void dispararArma();
	void dejarArma();
	void verArma();
};

