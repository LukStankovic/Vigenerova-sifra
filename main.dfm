object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Vigenerova '#353'ifra'
  ClientHeight = 433
  ClientWidth = 728
  Color = 3915769
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MDesifrovane: TMemo
    Left = 0
    Top = 0
    Width = 249
    Height = 433
    Align = alLeft
    BorderStyle = bsNone
    PopupMenu = PopUpNesifrovane
    TabOrder = 0
  end
  object MSifrovane: TMemo
    Left = 479
    Top = 0
    Width = 249
    Height = 433
    Align = alRight
    BorderStyle = bsNone
    PopupMenu = PopUpSiifrovane
    TabOrder = 1
  end
  object Panel1: TPanel
    Left = 249
    Top = 0
    Width = 230
    Height = 433
    Align = alClient
    BevelOuter = bvNone
    Color = 3915769
    TabOrder = 2
    ExplicitLeft = 248
    ExplicitWidth = 233
    object LEKlic: TLabeledEdit
      Left = 40
      Top = 160
      Width = 153
      Height = 21
      EditLabel.Width = 58
      EditLabel.Height = 13
      EditLabel.Caption = #352'ifrovac'#237' kl'#237#269
      TabOrder = 0
    end
    object BSifrovat: TButton
      Left = 40
      Top = 205
      Width = 153
      Height = 25
      Caption = #352'ifrovat -->'
      TabOrder = 1
      OnClick = BSifrovatClick
    end
    object BDesifrovat: TButton
      Left = 40
      Top = 248
      Width = 153
      Height = 25
      Align = alCustom
      Caption = '<-- De'#353'ifrovat'
      TabOrder = 2
      OnClick = BDesifrovatClick
    end
  end
  object MainMenu1: TMainMenu
    Left = 288
    Top = 16
    object Soubor1: TMenuItem
      Caption = 'Soubor'
      object Ulozit1: TMenuItem
        Caption = 'Ulo'#382'it '#353'ifrovan'#233
        ShortCut = 16467
        OnClick = Ulozit1Click
      end
      object Uloitdeifrovan1: TMenuItem
        Caption = 'Ulo'#382'it de'#353'ifrovan'#233
        ShortCut = 49235
        OnClick = Uloitdeifrovan1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object OtevritKSifrovani: TMenuItem
        Caption = 'Otev'#345#237't k '#353'ifrov'#225'n'#237
        ShortCut = 16463
        OnClick = OtevritKSifrovaniClick
      end
      object Otevt1: TMenuItem
        Caption = 'Otev'#345#237't k de'#353'ifrov'#225'n'#237
        ShortCut = 49231
        OnClick = Otevt1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Ukonit1: TMenuItem
        Caption = 'Ukon'#269'it'
        ShortCut = 16471
        OnClick = Ukonit1Click
      end
    end
    object ifrovn1: TMenuItem
      Caption = #352'ifrovat'
      OnClick = ifrovn1Click
    end
    object Deifrovat1: TMenuItem
      Caption = 'De'#353'ifrovat'
      OnClick = Deifrovat1Click
    end
    object Vymazat2: TMenuItem
      Caption = 'Vymazat'
      object ifrovan1: TMenuItem
        Caption = #352'ifrovan'#233
        OnClick = ifrovan1Click
      end
      object Neiforvan1: TMenuItem
        Caption = 'Ne'#353'iforvan'#233
        OnClick = Neiforvan1Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object Oboj1: TMenuItem
        Caption = 'Oboj'#237
        OnClick = Oboj1Click
      end
      object N4: TMenuItem
        Caption = '-'
      end
      object Kl1: TMenuItem
        Caption = 'Kl'#237#269
        OnClick = Kl1Click
      end
    end
    object Vygenerovatnhodnkl1: TMenuItem
      Caption = 'Vygenerovat n'#225'hodn'#253' kl'#237#269
      OnClick = Vygenerovatnhodnkl1Click
    end
  end
  object OpenDialog: TOpenDialog
    Left = 328
    Top = 16
  end
  object SaveDialog: TSaveDialog
    DefaultExt = 'txt'
    Left = 368
    Top = 16
  end
  object PopUpNesifrovane: TPopupMenu
    Left = 104
    Top = 400
    object V1: TMenuItem
      Caption = 'Vymazat'
      OnClick = V1Click
    end
  end
  object PopUpSiifrovane: TPopupMenu
    Left = 592
    Top = 392
    object Vymazat1: TMenuItem
      Caption = 'Vymazat'
      OnClick = Vymazat1Click
    end
  end
end
