#pragma once  //______________________________________ Cuadratica.h  
#include "Resource.h"
class Cuadratica: public Win::Dialog
{
public:
	Cuadratica()
	{
	}
	~Cuadratica()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxA;
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Textbox tbxB;
	Win::Label lb4;
	Win::Label lb5;
	Win::Textbox tbxC;
	Win::Button btCalcular;
	Win::Label lb6;
	Win::Label lb7;
	Win::Textbox tbxResultadoX1;
	Win::Textbox tbxResultadoX2;
protected:
	Win::Gdi::Font fontArial008A;
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(320);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(128);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cuadratica";
		tbxA.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 17, 14, 44, 25, hWnd, 1000);
		lb1.Create(NULL, L"X", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 64, 16, 15, 17, hWnd, 1001);
		lb2.Create(NULL, L"2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 72, 5, 10, 10, hWnd, 1002);
		lb3.Create(NULL, L"+", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 88, 14, 12, 16, hWnd, 1003);
		tbxB.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 112, 12, 44, 27, hWnd, 1004);
		lb4.Create(NULL, L"X", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 166, 16, 14, 18, hWnd, 1005);
		lb5.Create(NULL, L"+", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 183, 16, 13, 16, hWnd, 1006);
		tbxC.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 202, 11, 45, 27, hWnd, 1007);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 256, 11, 57, 28, hWnd, 1008);
		lb6.Create(NULL, L"X1=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 17, 56, 26, 20, hWnd, 1009);
		lb7.Create(NULL, L"X2=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 17, 102, 29, 19, hWnd, 1010);
		tbxResultadoX1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 56, 54, 193, 25, hWnd, 1011);
		tbxResultadoX2.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 56, 96, 194, 25, hWnd, 1012);
		fontArial008A.Create(L"Arial", 8, false, false, false, false);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tbxA.Font = fontArial014A;
		lb1.Font = fontArial014A;
		lb2.Font = fontArial008A;
		lb3.Font = fontArial014A;
		tbxB.Font = fontArial014A;
		lb4.Font = fontArial014A;
		lb5.Font = fontArial014A;
		tbxC.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb6.Font = fontArial014A;
		lb7.Font = fontArial014A;
		tbxResultadoX1.Font = fontArial014A;
		tbxResultadoX2.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
