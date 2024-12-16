//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Otchet.h"
#include "LR_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frCoreClasses"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxPreview"
#pragma resource "*.dfm"
TОтчет *Отчет;
//---------------------------------------------------------------------------
__fastcall TОтчет::TОтчет(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

