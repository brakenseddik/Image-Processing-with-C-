object Form1: TForm1
  Left = 192
  Top = 125
  Width = 928
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 96
    Top = 104
    Width = 169
    Height = 153
  end
  object Image2: TImage
    Left = 328
    Top = 104
    Width = 345
    Height = 265
  end
  object Image3: TImage
    Left = 696
    Top = 104
    Width = 193
    Height = 153
  end
  object Button1: TButton
    Left = 144
    Top = 288
    Width = 75
    Height = 25
    Caption = 'ouvrir'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 456
    Top = 384
    Width = 75
    Height = 25
    Caption = 'zoom in'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 752
    Top = 272
    Width = 75
    Height = 25
    Caption = 'zoom out'
    TabOrder = 2
    OnClick = Button3Click
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 160
    Top = 56
  end
  object OpenPictureDialog2: TOpenPictureDialog
    Left = 408
    Top = 56
  end
  object OpenPictureDialog3: TOpenPictureDialog
    Left = 776
    Top = 64
  end
end
