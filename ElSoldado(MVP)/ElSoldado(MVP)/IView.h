#pragma once
#include<iostream>

using namespace std;

class IView
{
public:
	virtual ~IView();
	virtual void mostrarTexto(string texto);
};

