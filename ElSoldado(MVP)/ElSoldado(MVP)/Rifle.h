#pragma once
#ifndef RIFLE_H
#define RIFLE_H
#include<iostream>
#include<string>
#include"Arma.h"

using namespace std;

class Rifle :public Arma
{
public:
	Rifle()
	{
		this->_nombre = "Rifle";
	}

	string const Disparar()
	{
		return "Pum pum pum!...";
	}
};


#endif