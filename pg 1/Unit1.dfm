object Form1: TForm1
  Left = 246
  Top = 150
  Width = 1058
  Height = 554
  Caption = 'Application'
  Color = clBtnHighlight
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
    Top = 64
    Width = 177
    Height = 153
  end
  object Image2: TImage
    Left = 232
    Top = 64
    Width = 185
    Height = 153
  end
  object Image3: TImage
    Left = 440
    Top = 64
    Width = 177
    Height = 153
  end
  object Image4: TImage
    Left = 640
    Top = 64
    Width = 177
    Height = 153
  end
  object Image5: TImage
    Left = 840
    Top = 64
    Width = 169
    Height = 153
  end
  object Image6: TImage
    Left = 32
    Top = 296
    Width = 177
    Height = 145
  end
  object Button1: TButton
    Left = 64
    Top = 232
    Width = 113
    Height = 33
    Caption = 'Ouvrir'
    TabOrder = 0
    OnClick = Button1Click
  end
  object NG: TButton
    Left = 272
    Top = 232
    Width = 105
    Height = 33
    Caption = 'Quantifier'
    TabOrder = 1
    OnClick = NGClick
  end
  object changer: TButton
    Left = 472
    Top = 232
    Width = 113
    Height = 33
    Caption = '16 bits'
    TabOrder = 2
    OnClick = changerClick
  end
  object Button2: TButton
    Left = 688
    Top = 232
    Width = 89
    Height = 33
    Caption = 'B/W'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button4: TButton
    Left = 880
    Top = 232
    Width = 89
    Height = 33
    Caption = 'Rotate'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 64
    Top = 456
    Width = 105
    Height = 33
    Caption = 'zoom in'
    TabOrder = 5
    OnClick = Button5Click
  end
  object OpenPictureDialog1: TOpenPictureDialog
    FileName = 'C:\Users\Seddik\Desktop\1571589395044.bmp'
    Left = 97
    Top = 16
  end
  object SavePictureDialog1: TSavePictureDialog
    Left = 305
    Top = 16
  end
end
