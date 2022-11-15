#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,i,j,ronde, nomor;
    cout << "\n\nMasukan jumlah peserta :  ";
    cin >> n;
    cout <<"\nMasukan banyak ronde menembak tiap peserta :  ";
    cin>>ronde;

    int point[n];
    int jumlah_point, indeks_skor_tertinggi;

    indeks_skor_tertinggi = 0;
    for (i = 0;i < n; i++){
        cout<< "Peserta ke-"<<i+1<<endl;
        jumlah_point = 0;
        for (j = 0; j < ronde; j++){
            cout<< "Masukan nomor lingkaran :  ";
            cin>>nomor;
            if (nomor > 0 && nomor < 11){
                jumlah_point = jumlah_point + (11 - nomor);
            }
        }
        point[i] = jumlah_point;
        if (point[i] > point[indeks_skor_tertinggi]){
            indeks_skor_tertinggi = i;
        }
    }

	cout<<"\nSKOR AKHIR MASING-MASING PESERTAA\n";
	cout<<"==========================\n";
	for(i=0;i<n;i++){
		cout<<"Poin peserta ke-"<<i+1<<" adalah "<< point[i]<<endl;
	}

	cout<< "\nPEMENANG ADALAH PESERTA KE- "<<indeks_skor_tertinggi+1;

	return 0;
}
