//---------------------------------------------------------------------------

#ifndef Zapis1H
#define Zapis1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class T����������_�����_������1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *������3;
	TButton *��3;
	TEdit *Edit3;
	TDBLookupComboBox *DBLookupComboBox1;
	TDBLookupComboBox *DBLookupComboBox2;
	void __fastcall ��3Click(TObject *Sender);
	void __fastcall ������3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall T����������_�����_������1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE T����������_�����_������1 *����������_�����_������1;
//---------------------------------------------------------------------------
#endif
