//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Otchet.cpp", Отчет);
USEFORM("Zapis1.cpp", Добавление_новой_записи1);
USEFORM("Zapis2.cpp", Изменение_данных_записи);
USEFORM("Klient.cpp", Добавление_нового_клиента);
USEFORM("Sotrudnik.cpp", Добавление_нового_сотрудника);
USEFORM("LR_2.cpp", ЛР2);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TЛР2), &ЛР2);
		Application->CreateForm(__classid(TДобавление_нового_клиента), &Добавление_нового_клиента);
		Application->CreateForm(__classid(TДобавление_нового_сотрудника), &Добавление_нового_сотрудника);
		Application->CreateForm(__classid(TДобавление_новой_записи1), &Добавление_новой_записи1);
		Application->CreateForm(__classid(TИзменение_данных_записи), &Изменение_данных_записи);
		Application->CreateForm(__classid(TОтчет), &Отчет);
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
