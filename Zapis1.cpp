//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Zapis1.h"
#include "LR_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
T����������_�����_������1 *����������_�����_������1;
//---------------------------------------------------------------------------
__fastcall T����������_�����_������1::T����������_�����_������1(TComponent* Owner)
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
void __fastcall T����������_�����_������1::��3Click(TObject *Sender)
{
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall T����������_�����_������1::������3Click(TObject *Sender)
{
	ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
