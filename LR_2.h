//---------------------------------------------------------------------------

#ifndef LR_2H
#define LR_2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class T��2 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TDBGrid *DBGrid3;
	TButton *��������1;
	TButton *�������������1;
	TButton *�������1;
	TButton *��������2;
	TButton *�������������2;
	TButton *�������2;
	TButton *��������3;
	TButton *�������������3;
	TButton *�������3;
	TButton *�����;
	TADOTable *ADOTable1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TADOTable *ADOTable2;
	TADOConnection *ADOConnection2;
	TDataSource *DataSource2;
	TADOTable *ADOTable3;
	TADOConnection *ADOConnection3;
	TDataSource *DataSource3;
	TADOQuery *ADOQuery1;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TButton *�������_�����;
	void __fastcall ��������1Click(TObject *Sender);
	void __fastcall ��������2Click(TObject *Sender);
	void __fastcall �������������1Click(TObject *Sender);
	void __fastcall �������������2Click(TObject *Sender);
	void __fastcall �������1Click(TObject *Sender);
	void __fastcall �������2Click(TObject *Sender);
	void __fastcall �����Click(TObject *Sender);
	void __fastcall ��������3Click(TObject *Sender);
	void __fastcall �������3Click(TObject *Sender);
	void __fastcall �������������3Click(TObject *Sender);
	void __fastcall �������_�����Click(TObject *Sender);
	//void __fastcall DBGrid3CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
	__fastcall T��2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE T��2 *��2;
//---------------------------------------------------------------------------
#endif
