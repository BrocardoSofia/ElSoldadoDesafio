#pragma once
#ifndef REVOLVER_H
#define REVOLVER_H
#include<iostream>
#include<string>
#include"Arma.h"

using namespace std;

class Revolver:public Arma
{
public:
	Revolver()
	{
		this->_nombre = "Revolver";
	}

	string const Disparar()
	{
		return "Pum...";
	}
};


#endif