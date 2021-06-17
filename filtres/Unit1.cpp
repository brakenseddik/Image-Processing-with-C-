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

int w =Image1->Picture->Width;
int h =Image1->Picture->Height ;

Image2->Width = w ;
Image2->Height = h ;
int i, j ;
int c ;
for (i = 0 ; i <w ; i ++)
for (j = 0 ; j <h ; j ++)
{
c =(
  GetRValue (Image1->Canvas->Pixels [i][j])
+ GetRValue (Image1->Canvas->Pixels [i][j-1])
+ GetRValue (Image1->Canvas->Pixels [i][j+ 1])
+ GetRValue (Image1->Canvas->Pixels [i-1][j-1])
+ GetRValue (Image1->Canvas->Pixels [i-1][j])
+ GetRValue (Image1->Canvas->Pixels [i-1][j+ 1])
+ GetRValue (Image1->Canvas->Pixels [i+ 1][j-1])
+ GetRValue (Image1->Canvas->Pixels [i+ 1][j])
+ GetRValue (Image1->Canvas->Pixels [i+ 1][j+ 1])
)/9 ;
Image2->Canvas->Pixels [i][j]= (TColor) RGB (c, c, c) ;
}


}
//---------------------------------------------------------------------------

void insertionSort(int arr[], int n)
{
  int k, key, l;
    for (k = 1; k < n; k++)
    {
        key = arr[k];
        l = k - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (l >= 0 && arr[l] > key)
        {
            arr[l + 1] = arr[l];
            l = l - 1;
        }
        arr[l + 1] = key;
    }
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{

int w =Image1->Picture->Width;
int h =Image1->Picture->Height ;

Image3->Width = w ;
Image3->Height = h ;

int i, j ;
int c ;   int window[9];


for (i = 0 ; i <w ; i++) {
for (j = 0 ; j <h ; j++){
 window[0] =GetRValue (Image1->Canvas->Pixels [i][j])  ;
 window[1] =GetRValue (Image1->Canvas->Pixels [i][j-1]) ;
 window[2] =GetRValue (Image1->Canvas->Pixels [i][j+ 1]) ;
 window[3] =GetRValue (Image1->Canvas->Pixels [i-1][j-1]) ;
 window[4] =GetRValue (Image1->Canvas->Pixels [i-1][j])  ;
 window[5] =GetRValue (Image1->Canvas->Pixels [i-1][j+ 1]) ;
 window[6] =GetRValue (Image1->Canvas->Pixels [i+ 1][j-1])  ;
 window[7] =GetRValue (Image1->Canvas->Pixels [i+ 1][j])     ;
 window[8] =GetRValue (Image1->Canvas->Pixels [i+ 1][j+ 1])   ;
 insertionSort(window,9);
  c=window[4];
  Image3->Canvas->Pixels [i][j]= (TColor) RGB (c, c, c) ;
   }
     }




}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
int W=Image1->Picture->Width;
int H=Image1->Picture->Height;
int i,j,x,y, seuil =50;
int SobelY[3][3]=
{{-1,-2,-1},
{0,0,0},
{1,2,1}};
int SobelX[3][3]={{-1,0,1},
{-2,0,2},
{-1,0,1}};
Image4->Width=W;
Image4->Height=H;
for(int i=0; i<=W-1;i++)
{
for(int j=0; j<=H-1;j++)
{
int somx=0;
int somy=0;
for(x=0;x<3;x++)
{
for(y=0;y<3;y++)
{
somx=somx+(GetRValue(Image1->Canvas->Pixels[i+x-1][j+y-1])*SobelX[y][x]);
somy=somy+(GetRValue(Image1->Canvas->Pixels[i+x-1][j+y-1])*SobelY[y][x]);
}
int s=abs(somx)+abs(somy);
if(s>= seuil)
Image4->Canvas->Pixels[i][j] = (TColor) RGB(255,255,255) ;
else Image4->Canvas->Pixels[i][j] = (TColor) RGB(0,0,0) ;
}
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{

int W=Image1->Picture->Width;
int H=Image1->Picture->Height;
int i,j,x,y, seuil =150;
int PrewittY[3][3]={
{1,1,1},
{0,0,0},
{-1,-1,-1}};
int PrewittX[3][3]={
{-1,0,1},
{-1,0,1},
{-1,0,1}};
Image5->Width=W;
Image5->Height=H;
for(int i=0; i<=W-1;i++)
{
for(int j=0; j<=H-1;j++)
{
int somx=0;
int somy=0;
for(x=0;x<3;x++)
{
for(y=0;y<3;y++)
{
somx=somx+(GetRValue(Image1->Canvas->Pixels[i+x-1][j+y-1])*PrewittX[y][x]);
somy=somy+(GetRValue(Image1->Canvas->Pixels[i+x-1][j+y-1])*PrewittY[y][x]);
}
int s=abs(somx)+abs(somy);
if(s>= seuil)
Image5->Canvas->Pixels[i][j] = (TColor) RGB(255,255,255) ;
else Image5->Canvas->Pixels[i][j] = (TColor) RGB(0,0,0) ;
}
}
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
 int W=Image1->Picture->Width;
int H=Image1->Picture->Height;
int i,j,x,y, seuil =100;
int RobertsY[2][2]={
{1,0},
{0,-1},
};
int RobertsX[2][2]={
{0,1},
{-1,0},
};
Image6->Width=W;
Image6->Height=H;
for(int i=0; i<=W-1;i++)
{
for(int j=0; j<=H-1;j++)
{
int somx=0;
int somy=0;
for(x=0;x<2;x++)
{
for(y=0;y<2;y++)
{
somx=somx+(GetRValue(Image1->Canvas->Pixels[i+x-1][j+y-1])*RobertsX[y][x]);
somy=somy+(GetRValue(Image1->Canvas->Pixels[i+x-1][j+y-1])*RobertsY[y][x]);
}
int s=abs(somx)+abs(somy);
if(s>= seuil)
Image6->Canvas->Pixels[i][j] = (TColor) RGB(255,255,255) ;
else Image6->Canvas->Pixels[i][j] = (TColor) RGB(0,0,0) ;
}
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{

int w=Image1->Picture->Width;
int h=Image1->Picture->Height;
Image7->Width=w;
Image7->Height=h;

for(int i=0;i<w/2;i++){
for(int j=0;j<h;j++){
 int temp = Image1->Canvas->Pixels[i][j];
                Image7->Canvas->Pixels[w-i][j]=Image1->Canvas->Pixels[i][j];
                Image7->Canvas->Pixels[i][j]=Image1->Canvas->Pixels[i][j];
                Image7->Canvas->Pixels[w-i][j]=temp;
//Image7->Canvas->Pixels[j][i]=Image1->Canvas->Pixels[j][2-i];
}
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
int w=Image1->Picture->Width;
int h=Image1->Picture->Height;
Image8->Width=w;
Image8->Height=h;

for(int i=0;i<w;i++){
for(int j=0;j<h/2;j++){
 int temp = Image1->Canvas->Pixels[i][j];
                Image8->Canvas->Pixels[i][h-j]=Image1->Canvas->Pixels[i][j];
                Image8->Canvas->Pixels[i][j]=Image1->Canvas->Pixels[i][j];
                Image8->Canvas->Pixels[i][h-j]=temp;
}
}
}
//---------------------------------------------------------------------------

