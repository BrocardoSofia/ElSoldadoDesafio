#pragma once
#include<iostream>
#include<string>
#include"Presentador.h"
#include"IView.h"

using namespace std;

class Vista:public IView
{
public:
	Vista();
	~Vista();
	int elegirArma();
	void MenuPrincipal();
	void mostrarTexto(string texto);
	void TextoMenuPrincipal();
	void TextoMenuArmas();
};

