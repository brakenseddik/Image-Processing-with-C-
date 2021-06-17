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
    Left = 16
    Top = 96
    Width = 185
    Height = 161
  end
  object Image2: TImage
    Left = 240
    Top = 96
    Width = 177
    Height = 161
  end
  object Button1: TButton
    Left = 72
    Top = 272
    Width = 75
    Height = 25
    Caption = 'Open'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 296
    Top = 272
    Width = 75
    Height = 25
    Caption = 'Etalement'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 632
    Top = 344
    Width = 75
    Height = 25
    Caption = 'Histogramme'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Chart1: TChart
    Left = 440
    Top = 40
    Width = 448
    Height = 281
    BackWall.Brush.Color = clWhite
    BackWall.Brush.Style = bsClear
    Title.Text.Strings = (
      'TChart')
    TabOrder = 3
    object Series1: TFastLineSeries
      Marks.ArrowLength = 8
      Marks.Visible = False
      SeriesColor = clRed
      LinePen.Color = clRed
      XValues.DateTime = False
      XValues.Name = 'X'
      XValues.Multiplier = 1
      XValues.Order = loAscending
      YValues.DateTime = False
      YValues.Name = 'Y'
      YValues.Multiplier = 1
      YValues.Order = loNone
    end
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 88
    Top = 48
  end
end
