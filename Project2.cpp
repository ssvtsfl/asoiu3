//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Otchet.cpp", �����);
USEFORM("Zapis1.cpp", ����������_�����_������1);
USEFORM("Zapis2.cpp", ���������_������_������);
USEFORM("Klient.cpp", ����������_������_�������);
USEFORM("Sotrudnik.cpp", ����������_������_����������);
USEFORM("LR_2.cpp", ��2);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(T��2), &��2);
		Application->CreateForm(__classid(T����������_������_�������), &����������_������_�������);
		Application->CreateForm(__classid(T����������_������_����������), &����������_������_����������);
		Application->CreateForm(__classid(T����������_�����_������1), &����������_�����_������1);
		Application->CreateForm(__classid(T���������_������_������), &���������_������_������);
		Application->CreateForm(__classid(T�����), &�����);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
