//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(OpenPictureDialog1->Execute()){
Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
int w=Image1->Picture->Width;
int h=Image1->Picture->Height;
Image2->Width=w*2;
Image2->Height=h*2;

for(int i=0;i<w*2;i++){
for(int j=0;j<h*2;j++){
int C=(GetBValue(Image1->Canvas->Pixels[i][j]));

Image2->Canvas->Pixels[2*i][2*j]=(TColor)RGB(C,C,C);
Image2->Canvas->Pixels[2*i][2*j+1]=(TColor)RGB(C,C,C);
Image2->Canvas->Pixels[2*i+1][2*j]=(TColor)RGB(C,C,C);
Image2->Canvas->Pixels[2*i+1][2*j+1]=(TColor)RGB(C,C,C);
}

}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
int w=Image1->Picture->Width;
int h=Image1->Picture->Height;
Image3->Width=w/2;
Image3->Height=h/2;

for(int i=0;i<w/2;i++){
for(int j=0;j<h/2;j++){
int C=(GetBValue(Image1->Canvas->Pixels[2*i][2*j])+GetBValue(Image1->Canvas->Pixels[2*i][2*j+1])+GetBValue(Image1->Canvas->Pixels[2*i+1][2*j])+GetBValue(Image1->Canvas->Pixels[2*i+1][2*j+1]))/4;
Image3->Canvas->Pixels[i][j]  =(TColor)RGB(C,C,C);
}

}
}
//---------------------------------------------------------------------------

