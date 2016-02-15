//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	OpenDialog->Filter = "Textov� soubory (*.txt)";
	SaveDialog->Filter = "Textov� soubory (*.txt)";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Ukonit1Click(TObject *Sender)
{
	Application->Terminate();	
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Ulozit1Click(TObject *Sender)
{
	if(SaveDialog->Execute())
		MSifrovane->Lines->SaveToFile(SaveDialog->FileName);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Uloitdeifrovan1Click(TObject *Sender)
{
	if(SaveDialog->Execute())
		MDesifrovane->Lines->SaveToFile(SaveDialog->FileName);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::OtevritKSifrovaniClick(TObject *Sender)
{
	MDesifrovane->Lines->Clear();
	if(OpenDialog->Execute())
		  MDesifrovane->Lines->LoadFromFile(OpenDialog->FileName);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Otevt1Click(TObject *Sender)
{
	MSifrovane->Lines->Clear();
		if(OpenDialog->Execute())
			MSifrovane->Lines->LoadFromFile(OpenDialog->FileName);
}
//---------------------------------------------------------------------------
