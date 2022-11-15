#include <iostream>
using namespace std;

int main()
{
    int A[50][50],B[50][50];
    int kolom1,baris1,kolom2,baris2;


    // MENENTUKAN JUMLAH ORDO

    cout<<"Masukan Jumlah Kolom Matriks A :  ";
    cin>>kolom1;
    cout<<"Masukan Jumlah Baris Matriks A :  ";
    cin>>baris1;

    cout<<"Masukan Jumlah Kolom Matriks B :  ";
    cin>>kolom2;
    cout<<"Masukan Jumlah Baris Matriks B :  ";
    cin>>baris2;

    //PROSES MEMASUKAN NILAI MATRIKS
    cout<<"\n INPUT ELEMEN MATRIKS A\n";
    for(int i=1;i<=kolom1;i++){
        for(int j=1;j<=baris1;j++){
            cout<<"Input elemen ["<< i <<"]" "["<< j <<"]"<< " = ";
            cin>>A[i][j];
        }
    }

    cout<<"\n INPUT ELEMEN MATRIKS B\n";
    for(int i=1;i<=kolom2;i++){
        for(int j=1;j<=baris2;j++){
            cout<<"Input elemen ["<< i <<"]" "["<< j <<"]"<< " = ";
            cin>>B[i][j];
        }
    }

    //MENAMPILKAN BENTUK MATRIKS

    cout<<"\n Bentuk Matriks A\n";
    for(int i=1;i<=kolom1;i++){
        for(int j=1;j<=baris1;j++){
            cout<<"\t"<<A[i][j];
        }
        cout<<endl;
    }
    cout<<"\n Bentuk Matriks B\n";
    for(int i=1;i<=kolom2;i++){
        for(int j=1;j<=baris2;j++){
            cout<<"\t"<<B[i][j];
        }
        cout<<endl;
    }

    //MENJUMLAHKAN MATRIKS

    cout<<"\n PENJUMLAHAN MATRIKS A + B = \n";
    for(int i=1;i<=kolom2;i++){
        for(int j=1;j<=baris2;j++){
            cout<<"\t"<<A[i][j]+B[i][j];
        }
        cout<<endl;
    }
 return 0;
}
