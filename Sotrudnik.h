//---------------------------------------------------------------------------

#ifndef SotrudnikH
#define SotrudnikH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class T����������_������_���������� : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *������2;
	TButton *��2;
	void __fastcall ��2Click(TObject *Sender);
	void __fastcall ������2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall T����������_������_����������(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE T����������_������_���������� *����������_������_����������;
//---------------------------------------------------------------------------
#endif
