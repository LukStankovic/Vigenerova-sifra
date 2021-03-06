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
#include <string>
using namespace std;
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
	TPopupMenu *PopUpNesifrovane;
	TPopupMenu *PopUpSiifrovane;
	TMenuItem *V1;
	TMenuItem *Vymazat1;
	TMenuItem *Vymazat2;
	TMenuItem *ifrovan1;
	TMenuItem *Neiforvan1;
	TMenuItem *N3;
	TMenuItem *Oboj1;
	TMenuItem *N4;
	TMenuItem *Kl1;
	TMenuItem *Vygenerovatnhodnkl1;
	TPanel *Panel1;
	void __fastcall Ukonit1Click(TObject *Sender);
	void __fastcall Ulozit1Click(TObject *Sender);
	void __fastcall Uloitdeifrovan1Click(TObject *Sender);
	void __fastcall OtevritKSifrovaniClick(TObject *Sender);
	void __fastcall Otevt1Click(TObject *Sender);
	void __fastcall BSifrovatClick(TObject *Sender);
	void __fastcall BDesifrovatClick(TObject *Sender);
	void __fastcall ifrovn1Click(TObject *Sender);
	void __fastcall Deifrovat1Click(TObject *Sender);
	void __fastcall V1Click(TObject *Sender);
	void __fastcall Vymazat1Click(TObject *Sender);
	void __fastcall ifrovan1Click(TObject *Sender);
	void __fastcall Neiforvan1Click(TObject *Sender);
	void __fastcall Oboj1Click(TObject *Sender);
	void __fastcall Kl1Click(TObject *Sender);
	void __fastcall Vygenerovatnhodnkl1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);

	AnsiString sifrovat(string kl, string znak_n){
		int delka_n = znak_n.length();
		int delka_k = kl.length();

		string sifrovane;

		for(int i = 0; i < delka_k; i++){
			if(kl[i] >= 'a' && kl[i] <= 'z')
				kl[i] += 'A' - 'a';
		}
		int j = 0;
		for(int i = 0,j = 0; i < delka_n; i++){

			char zn = znak_n[i];

			if(znak_n[i] >= 'a' && znak_n[i] <= 'z')
				znak_n[i] += 'A' - 'a';

			if(znak_n[i] == ' '){
				sifrovane += ' ';
				continue;
			}

			if(znak_n[i] >= 'A' && znak_n[i] <= 'Z'){
				sifrovane += (znak_n[i] + kl[j] - 2*'A')% 26 + 'A';
				j = (j+1)%delka_k;
			}

		}

		return sifrovane.c_str();
	}

	AnsiString desifrovat(string kl, string znak_n){
		int delka_n = znak_n.length();
		int delka_k = kl.length();

		string desifrovane;

		for(int i = 0; i < delka_k; i++){
			if(kl[i] >= 'a' && kl[i] <= 'z')
				kl[i] += 'A' - 'a';
		}
		int j = 0;
		for(int i = 0,j = 0; i < delka_n; i++){

			if(znak_n[i] >= 'a' && znak_n[i] <= 'z')
				znak_n[i] += 'A' - 'a';

			if(znak_n[i] == ' '){
				desifrovane += ' ';
				continue;
			}

			if(znak_n[i] >= 'A' && znak_n[i] <= 'Z'){
				desifrovane += (znak_n[i] - kl[j] + 2*'A')% 26 + 'A';
				j = (j+1)%delka_k;
			}

		}

		return desifrovane.c_str();
	}
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
