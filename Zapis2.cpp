//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Zapis2.h"
#include "LR_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
T���������_������_������ *���������_������_������;
//---------------------------------------------------------------------------
__fastcall T���������_������_������::T���������_������_������(TComponent* Owner)
	: TForm(Owner)
{
    ��2->ADOTable1->Active = true;
	��2->DataSource1->DataSet = ��2->ADOTable1;
	DBLookupComboBox1->ListSource = ��2->DataSource1;
	DBLookupComboBox1->ListField = "���_�������";
	DBLookupComboBox1->KeyField = "ID_�������";
	DBLookupComboBox1->DataSource = nullptr;

	��2->ADOTable2->Active = true;
	��2->DataSource2->DataSet = ��2->ADOTable2;
	DBLookupComboBox2->ListSource = ��2->DataSource2;
	DBLookupComboBox2->ListField = "���_����������";
	DBLookupComboBox2->KeyField = "ID_����������";
	DBLookupComboBox2->DataSource = nullptr;
}
//---------------------------------------------------------------------------

void __fastcall T���������_������_������::������Click(TObject *Sender)
{
	ModalResult = mrCancel;
}
//---------------------------------------------------------------------------

void __fastcall T���������_������_������::��������Click(TObject *Sender)
{
	ModalResult = mrOk;
}
//---------------------------------------------------------------------------

