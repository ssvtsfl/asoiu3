#ifndef OtchetH
#define OtchetH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frCoreClasses.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxPreview.hpp"
//---------------------------------------------------------------------------
class TОтчет : public TForm
{
__published:	// IDE-managed Components
	TfrxDBDataset *frxDBDataset1;
	TfrxReport *frxReport1;
	TfrxPreview *frxPreview1;
private:	// User declarations
public:		// User declarations
	__fastcall TОтчет(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TОтчет *Отчет;
//---------------------------------------------------------------------------
#endif
