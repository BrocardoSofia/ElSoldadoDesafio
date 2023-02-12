#pragma once
#include<iostream>

using namespace std;

class IView
{
public:
	virtual ~IView() = 0;
	virtual void mostrarTexto(string texto) = 0;
};

