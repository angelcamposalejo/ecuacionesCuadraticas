#include "stdafx.h"  //________________________________________ Cuadratica.cpp
#include "Cuadratica.h"
#include <math.h>

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Cuadratica app;
	return app.BeginDialog(IDI_Cuadratica, hInstance);
}

void Cuadratica::Window_Open(Win::Event& e)
{
}

void Cuadratica::btCalcular_Click(Win::Event& e)
{
	const double a = tbxA.DoubleValue;
	const double b = tbxB.DoubleValue;
	const double c = tbxC.DoubleValue;
	double resultado;
	double resultado2;
	resultado = (-b) / (2 * a);
	//resultado2 = (sqrt((b*b) - (4 * (a*c))))/(2*a);
	resultado2 = (b*b) - (4 * (a*c));
	if (resultado2 < 0)
	{
		//imaginario
		resultado2 = resultado2*-1;
		resultado2 = (sqrt(resultado2) / (2 * a));
		tbxResultadoX1.DoubleValue = resultado2;
		wstring texto;
		Sys::Format(texto, L"%f +i%f", resultado,resultado2);
		tbxResultadoX1.Text = texto;
		Sys::Format(texto, L"%f -i%f", resultado, resultado2);
		tbxResultadoX2.Text = texto;
	}
	else
	{
		//real
		resultado2 = (sqrt(resultado2) / (2 * a));
		tbxResultadoX1.DoubleValue = resultado+resultado2;
		tbxResultadoX2.DoubleValue = resultado-resultado2;
	}
}

