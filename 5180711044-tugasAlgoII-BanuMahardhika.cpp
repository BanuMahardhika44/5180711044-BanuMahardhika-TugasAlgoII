#include <iostream>

using namespace::std;

int main(){
    string nomor[5]={"A001","A002","A003","A007","A008"};
    string nama[5]={"BAYU","IRVAN","SUSI","DIANA","RONI"};

    string namaku,cari,member,barang,N;
    int indeks,hrg,diskon,jumlah,tot,jum=5;


    cout<<"Apakah Anda member atau tidak?[t/y] : ";cin>>member;



 if(member=="t")
    {cout<<"\nSilahkan masukan nama anda:";cin>>N;
     cout<<"\nBerapa jumlah barang yang anda beli : ";cin>>jumlah;

        cout<<"\nNama barang yang dibeli : ";cin>>barang;
        cout<<"\nHarga barang : ";cin>>hrg;

        tot=jumlah*hrg;

        cout<<"\nJumlah Harga semuanya:"<<tot;
        return 0;}

      else  if (member=="y"){
            cout<<"\nSilahakan masukan no id: ";cin>>cari;
            for (int i=0;i<jum;i++){
                if(cari==nomor[i]){
                    namaku=nama[i];
                }
            }
            cout<<"\nAnda member"<<endl;
            cout<<"\nId Anda   : "<<cari<<endl;
            cout<<"\nNama Anda : "<<namaku<<endl;

            cout<<"\nBerapa jumlah barang yg anda beli : ";cin>>jumlah;


            cout<<"\nNama barang : ";cin>>barang;
            cout<<"\nHarga : ";cin>>hrg;

            tot=jumlah*hrg;


            cout<<"\nSelamat anda mendapatkan diskon 5%";
            tot=tot*5/100;
            cout<<"\nJumalah Harga semuanya:"<<tot;

}

}
