//---------------------------------------------------------------------------

#ifndef Zapis2H
#define Zapis2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class T���������_������_������ : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *������;
	TButton *��������;
	TEdit *Edit3;
	TDBLookupComboBox *DBLookupComboBox1;
	TDBLookupComboBox *DBLookupComboBox2;
	void __fastcall ������Click(TObject *Sender);
	void __fastcall ��������Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall T���������_������_������(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE T���������_������_������ *���������_������_������;
//---------------------------------------------------------------------------
#endif
