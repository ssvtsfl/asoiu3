//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LR_2.h"
#include "Klient.h"
#include "Sotrudnik.h"
#include "Zapis1.h"
#include "Zapis2.h"
#include "Otchet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
T��2 *��2;
//---------------------------------------------------------------------------
__fastcall T��2::T��2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall T��2::��������1Click(TObject *Sender)
{
	 T����������_������_������� *addForm = new T����������_������_�������(this);
	 if (addForm->ShowModal() == mrOk)
	 {
		 ADOTable1->Append();
		 ADOTable1->FieldByName("���_�������")->AsString = addForm->Edit1->Text;
		 ADOTable1->FieldByName("�����_��������_�������")->AsString =addForm->Edit2->Text;
		 ADOTable1->Post();
	 }
	 delete addForm;
}
//---------------------------------------------------------------------------
void __fastcall T��2::��������2Click(TObject *Sender)
{
	 T����������_������_���������� *addForm = new T����������_������_����������(this);
	 if (addForm->ShowModal() == mrOk)
	 {
		 ADOTable2->Append();
		 ADOTable2->FieldByName("���_����������")->AsString = addForm->Edit1->Text;
		 ADOTable2->FieldByName("�����_��������_����������")->AsString =addForm->Edit2->Text;
		 ADOTable2->Post();
	 }
	 delete addForm;
}
//---------------------------------------------------------------------------
void __fastcall T��2::��������3Click(TObject *Sender)
{
	T����������_�����_������1 *addForm = new T����������_�����_������1(this);
	if (addForm->ShowModal() == mrOk)
	{
		ADOTable3->Append();

		ADOTable3->FieldByName("������")->AsString =addForm->Edit1->Text;
		ADOTable3->FieldByName("����")->AsString =addForm->Edit2->Text;
		ADOTable3->FieldByName("�����")->AsString =addForm->Edit3->Text;

		int selectedID1 = addForm->DBLookupComboBox1->KeyValue;
		ADOTable3->FieldByName("ID_�������")->AsInteger = selectedID1;

		int selectedID2 = addForm->DBLookupComboBox2->KeyValue;
		ADOTable3->FieldByName("ID_����������")->AsInteger = selectedID2;

		ADOTable3->Post();

		ADOQuery3->Close();
		ADOQuery3->Open();

		addForm->Edit1->Text = "";
		addForm->Edit2->Text = "";
		addForm->Edit3->Text = "";
	}
	delete addForm;
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������������1Click(TObject *Sender)
{
	if (DBGrid1->Options.Contains(dgEditing))
	{
		if (!ADOTable1->IsEmpty())
		 {
			ADOTable1->Post();
		 }
		DBGrid1->Options = DBGrid1->Options >> dgEditing;
		�������������1->Caption = "�������������";
	 }
	 else
	{
		 DBGrid1->Options = DBGrid1->Options << dgEditing;
		 �������������1->Caption = "���������";
	}
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������������2Click(TObject *Sender)
{
	if (DBGrid2->Options.Contains(dgEditing))
	{
		if (!ADOTable2->IsEmpty())
		 {
			ADOTable2->Post();
		 }
		DBGrid2->Options = DBGrid2->Options >> dgEditing;
		�������������2->Caption = "�������������";
	 }
	 else
	{
		 DBGrid2->Options = DBGrid2->Options << dgEditing;
		 �������������2->Caption = "���������";
	}
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������������3Click(TObject *Sender)
{
    if (!ADOTable3->Active)
		{
			ADOTable3->Open();
		}
	if (!ADOQuery4->IsEmpty()) {
		T���������_������_������ *editForm = new T���������_������_������(this);

		ADOTable3->Open();
		ADOTable3->Edit();
		ADOTable1->Active = true;
		ADOTable2->Active = true;
		editForm->Edit1->Text = ADOTable3->FieldByName("������")->AsString;
		editForm->Edit2->Text = ADOTable3->FieldByName("����")->AsString;
		editForm->Edit3->Text = ADOTable3->FieldByName("�����")->AsString;

		if (editForm->ShowModal() == mrOk) {
			ADOTable3->Edit();

			ADOTable3->FieldByName("������")->AsString = editForm->Edit1->Text;
			ADOTable3->FieldByName("����")->AsString = editForm->Edit2->Text;
			ADOTable3->FieldByName("�����")->AsString = editForm->Edit3->Text;

			int selectedID1 = editForm->DBLookupComboBox1->KeyValue;
			ADOTable3->FieldByName("ID_�������")->AsInteger = selectedID1;
			int selectedID2 = editForm->DBLookupComboBox2->KeyValue;
			ADOTable3->FieldByName("ID_����������")->AsInteger = selectedID2;

			ADOTable3->Post();

            ADOQuery3->Close();
			ADOQuery3->Open();

            ShowMessage("������ ������� ���������.");
        }

        delete editForm;
    }
    else {
        ShowMessage("��� ��������� ������ ��� ��������������.");
	}
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������1Click(TObject *Sender)
{
	if (!ADOTable1->IsEmpty())
	 {
		 if (MessageDlg("�� �������, ��� ������ ������� ��� ������?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		 {
			ADOTable1->Delete();
		 }
	 }
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������2Click(TObject *Sender)
{
	if (!ADOTable2->IsEmpty())
	 {
		 if (MessageDlg("�� �������, ��� ������ ������� ��� ������?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		 {
			ADOTable2->Delete();
		 }
	 }
}
//---------------------------------------------------------------------------
void __fastcall T��2::�����Click(TObject *Sender)
{
	if (MessageDlg("�� ������������� ������ �����?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
	 {
		Close();
	 }
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������3Click(TObject *Sender)
{
	if (!ADOTable3->IsEmpty())
	 {
		 if (MessageDlg("�� �������, ��� ������ ������� ��� ������?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		 {
			ADOTable3->Delete();
		 }
	 }
}
//---------------------------------------------------------------------------
void __fastcall T��2::�������_�����Click(TObject *Sender)
{
	����� -> Show();
}
//---------------------------------------------------------------------------

