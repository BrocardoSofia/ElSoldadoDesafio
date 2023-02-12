#include "Vista.h"
Vista::Vista()
{
	//llamo a menu principal
	MenuPrincipal();
}

Vista::~Vista()
{
}

int Vista::elegirArma()
{
	IView aux;
	char opcion = 0;
	int flag = 0;
	int tipo = 0;

	do
	{
		system("cls");//limpio pantalla
		aux.TextoMenuArmas();
		cin >> opcion;

		switch (opcion)
		{
		case 49:
			//caso 1: revolver
			tipo = 1;
			flag = 1;
			break;

		case 50:
			//caso 2: rifle
			tipo = 2;
			flag = 1;
			break;

		case 51:
			//caso 3: escopeta
			tipo = 3;
			flag = 1;
			break;

		case 120:
			//caso x: salir
			flag = 1;
			break;

		case 88:
			//caso X: salir
			flag = 1;
			break;

		default:
			break;
		}
	} while (flag == 0);
	return tipo;
}

void Vista::TextoMenuPrincipal()
{
	mostrarTexto("-== Bienvenido al campo de entrenamiento, Soldado ==-");
	mostrarTexto("\nQue desea hacer?");
	mostrarTexto("(presione el numero correspondiente a la opcion del menu)");
	mostrarTexto("\n1- Recoger arma");
	mostrarTexto("2- Dejar arma");
	mostrarTexto("3- Disparar" );
	mostrarTexto("4- Ver arma en uso");
	mostrarTexto("X- Salir");
}

void Vista::TextoMenuArmas()
{
	mostrarTexto("Por favor, escoja el arma que desea utilizar:\n");
	mostrarTexto("1- Revolver");
	mostrarTexto("2- Rifle");
	mostrarTexto("3- Escopeta");
	mostrarTexto("X- Volver atras");
}

void Vista::MenuPrincipal()
{
	Presentador* aux = new Presentador();//inicializa el soldado
	IView iview;
	char opcion;
	int flag = 0;
	int armaTipo;

	do
	{
		system("cls");//limpio pantalla
		TextoMenuPrincipal();//muestro el texto del menu
		cin >> opcion;

		switch (opcion)
		{
		case 49:
			//caso1: recoger arma
			armaTipo = elegirArma();//elige el arma
			aux->agarrarArma(armaTipo);//agarra el arma
			break;

		case 50:
			//caso2: deja el arma
			aux->dejarArma();
			break;

		case 51:
			//caso3: disparar
			aux->dispararArma();
			break;

		case 52:
			//caso4: ver arma en uso
			aux->verArma();
			break;

		case 120:
			//caso x: salir
			flag = 1;
			break;

		case 88:
			//caso X: salir
			flag = 1;
			break;

		default:
			break;
		}
	} while (flag == 0);
	
	delete aux;//libero el espacio de memoria del presentador
}

Vista::mostrarTextoMenu(string texto)
{
	cout << texto << endl;
}