//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TMemo *MDesifrovane;
	TLabeledEdit *LEKlic;
	TMemo *MSifrovane;
	TButton *BSifrovat;
	TButton *BDesifrovat;
	TMainMenu *MainMenu1;
	TMenuItem *Soubor1;
	TMenuItem *Ulozit1;
	TMenuItem *Otevt1;
	TMenuItem *ifrovn1;
	TMenuItem *Deifrovat1;
	TMenuItem *N1;
	TMenuItem *Ukonit1;
	TMenuItem *Uloitdeifrovan1;
	TMenuItem *OtevritKSifrovani;
	TMenuItem *N2;
	TOpenDialog *OpenDialog;
	TSaveDialog *SaveDialog;
	void __fastcall Ukonit1Click(TObject *Sender);
	void __fastcall Ulozit1Click(TObject *Sender);
	void __fastcall Uloitdeifrovan1Click(TObject *Sender);
	void __fastcall OtevritKSifrovaniClick(TObject *Sender);
	void __fastcall Otevt1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
