#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std; //intruksi yang diberikan pada aplikasi compiler

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}// untuk memanggil fungsi gotoxy
int main()
{

//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13 );1 
system("color d");
//Part Login
masuk:
 char ch,jwb; 
 system("cls");
 for(int i=1;i<3;i++){
 string user="";
string pass="";

    gotoxy(1,1);cout<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n";
    gotoxy(30,4);cout<<"******************************************************\n";
    gotoxy(30,5);cout<<"                 | LOGIN APOTEK JAYA ABADI |\n";
    gotoxy(30,6);cout<<"******************************************************\n";
    gotoxy(30,9);cout<<"          USERNAME : ";cin>>user;
    gotoxy(30,10);cout<<"          PASSWORD : ";
    ch=_getch();
 while(ch!=13){
  pass.push_back(ch);
  cout<<'*';
  ch=_getch();
 }
 if(user == "apotek" && pass =="123"){
  goto home;
 }else{
  cout<<"\n\n\t\t  -+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
  cout<<"\n\t\t                     Username/Password yang anda masukkan salah";
  cout<<"\n\t\t                           silahkan coba kembali [y/t] : ";cin>>jwb;
  if(jwb=='y'||jwb =='y'){
   goto masuk;
  }else if (jwb=='t' || jwb=='t'){
    return 0;
  }else{
   return 0;
  }
 }
}
//Part Menu Utama
home:
system("cls");
int kode,jml,byr,kbl,total=0;
int harga[7]={286,19500,2102,300,16000,9800,11604};
gotoxy(1,1);cout<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n";
gotoxy(52,2);cout<<"APOTEK JAYA ABADI\n";
gotoxy(37,3);cout<<"Jl.Korpri,Bandar Lampung,Lamppung 40282\n";
gotoxy(1,4);cout<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n";
gotoxy(1,5);cout<<"**********************************************************************************************************************\n";
gotoxy(29,6);cout<<"                        | DAFTAR OBAT |";
gotoxy(1,7);cout<<"**********************************************************************************************************************\n";
gotoxy(29,8);cout<<"        + Masukkan kode obat <spasi> jumlah obat\n";
gotoxy(29,9);cout<<"        + Contoh : 1 2\n";
gotoxy(29,10);cout<<"        +Ketik 0 <spasi> 0 Jika sudah selesai\n";
gotoxy(30,11);cout<<"-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
gotoxy(30,12);cout<<"|Kd | Nama Obat                   || Harga                 |\n";
gotoxy(30,13);cout<<"-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
gotoxy(30,14);cout<<"| 1 | Ambroxol/Tablet             || Rp.286,00             |\n";
gotoxy(30,15);cout<<"| 2 | Bioplacenton/Tube           || Rp.19.500,00          |\n";
gotoxy(30,16);cout<<"| 3 | Calcifar Plus               || Rp.2.102,00           |\n";
gotoxy(30,17);cout<<"| 4 | Ibuprofen                   || Rp.300,00             |\n";
gotoxy(30,18);cout<<"| 5 | Kasa Steril/Gulung          || Rp.16.000,00          |\n";
gotoxy(30,19);cout<<"| 6 | Plester leucoplast          || Rp.9.800,00           |\n";
gotoxy(30,20);cout<<"|   |  0,5x5cm/Gulung             ||                       |\n";
gotoxy(30,21);cout<<"| 7 | Telfast OD                  || Rp.11.604,00          |\n";
gotoxy(30,22);cout<<"-+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
gotoxy(1,23);cout<<"***********************************************************************************************************************\n";
   do{
      cout<<"     BELANJA     :  ";cin>>kode;cin>>jml;
      total = total+(harga[(kode-1)]) * jml;
      }while(kode !=0 && jml !=0);
cout<<"\n     TOTAL HARGA : Rp."<<total;
tunai:
cout<<"\n     TUNAI       : Rp.";cin>>byr;
     if(byr<total){
                  cout<<"\n   Silahkan Masukkan Nominal Pembayaran Kembali\n";
               goto tunai;
               }else{
                  kbl=byr-total;
                  cout<<"     KEMBALI     : Rp."<<kbl<<",00"<<endl;
                  cout<<"\n\n\t\t  -+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
                  cout<<"\n  \t\t             Terimakasih telah berbelanja di Apotek JAYA ABADI\n";
                  cout<<"\n  \t\t                          Semoga Lekas Sembuh\n";
                  cout<<"\t\t  -+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
              }    
 getch();         
//return 0;
               
}
