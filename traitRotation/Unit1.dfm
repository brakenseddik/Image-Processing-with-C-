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
    Left = 32
    Top = 88
    Width = 185
    Height = 169
  end
  object Image2: TImage
    Left = 248
    Top = 88
    Width = 185
    Height = 169
  end
  object Image3: TImage
    Left = 464
    Top = 88
    Width = 185
    Height = 169
  end
  object Image4: TImage
    Left = 680
    Top = 88
    Width = 185
    Height = 169
  end
  object Button1: TButton
    Left = 80
    Top = 280
    Width = 75
    Height = 25
    Caption = 'ouvrir'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 304
    Top = 280
    Width = 75
    Height = 25
    Caption = 'rotate 90'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 528
    Top = 280
    Width = 75
    Height = 25
    Caption = 'Rotate -90'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 752
    Top = 280
    Width = 75
    Height = 25
    Caption = 'Rotate 180'
    TabOrder = 3
    OnClick = Button4Click
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 104
    Top = 48
  end
  object OpenPictureDialog2: TOpenPictureDialog
    Left = 344
    Top = 48
  end
end
