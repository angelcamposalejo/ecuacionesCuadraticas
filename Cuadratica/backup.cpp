#include "stdafx.h"  //________________________________________ Cuadratica.cpp
#include "Cuadratica.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Cuadratica app;
	return app.BeginDialog(IDI_Cuadratica, hInstance);
}

void Cuadratica::Window_Open(Win::Event& e)
{
}

void Cuadratica::btCalcular_Click(Win::Event& e)
{
}

