#include <iostream>

using namespace std;

class Restolokal{
	public :
	char mangan, ngombe;
	int rego1, rego2, total, uang, kembalian;

	Restolokal(char pangananku, char ombeku, int rego, int regoo, int kembalianku){
		this->mangan = pangananku;
		this->ngombe = ombeku;
		this->rego1 = rego;
		this->rego2 = regoo;
		sego();
		inuman();
		tuku();
	}

	int sego(){
                cout << "Nama 	: Alif Fermansyah" << endl;

                cout << "NPM 	: 20081010030" << endl;

                cout << "Kelas 	: PBO C081" << endl;

                cout <<""<< endl;

		        cout <<"==========Restolokal Nasi Jomblo Khas Jawa Timur=========="<< endl;

                cout <<""<< endl;

                cout <<"Menu Makanan                      Harga"<< endl;

                cout <<"============================================"<< endl;

                cout <<"1. Rawon                       Rp. 15.000"<< endl;

                cout <<"2. Rujak Cingur                Rp. 10.000"<< endl;

                cout <<"3. Lontong Balap               Rp. 10.000"<< endl;

                cout <<"4. Lontong Kupang              Rp. 10.000"<< endl;

                cout <<"5. Pecel Ponorogo              Rp. 10.000"<< endl;

                cout <<"6. Sambel Wader                Rp. 12.000"<< endl;

                cout <<"MASUKKAN PILIHAN ANDA :";

                cin >> mangan;
                system("cls");
             switch (mangan)
        {
        case '1':
            rego1 = 15000;
            break;
        case '2':
            rego1 = 10000;
            break;
        case '3':
            rego1 = 10000;
            break;
        case '4':
            rego1 = 10000;
            break;
        case '5':
            rego1 = 10000;
            break;
        case '6':
            rego1 = 12000;
            break;

		default:
            cout << "\tMaaf makanan yang anda pesan tidak tersedia pada menu" << endl;
            rego1 = 0;
        }
            return(this->rego1);
    };

    int inuman(){

                cout <<""<< endl;

                cout <<"Menu Minuman                      Harga"<< endl;

                cout <<"============================================"<< endl;

			    cout <<"1. Es Teh                     Rp. 4.000"<< endl;

                cout <<"2. Es Jeruk                   Rp. 5.000"<< endl;

                cout <<"3. Gooday Freeze              Rp. 6.000"<< endl;

                cout <<"4. Es Degan                   Rp. 7.000"<< endl;

                cout <<"MASUKKAN PILIHAN ANDA :";

                cin >> ngombe;
                system("cls");
        switch (ngombe)
        {
        case '1':
            rego2 = 4000;
            break;
        case '2':
            rego2 = 5000;
            break;
        case '3':
            rego2 = 6000;
            break;
        case '4':
            rego2 = 7000;
            break;

        default:
        cout << "\tMaaf minuman yang anda pesan tidak tersedia pada menu" << endl;
            rego2 = 0;
        }
            return(this->rego2);
    };

    int tuku(){
        cout <<""<< endl;
         total = rego1+rego2;
        cout << "\tTotal Mangan Karo Ngombe  Rp." << total << endl;

        cout << "\n\tInput Uang : Rp.";
        cin >> uang;

        if(uang > total ){
            kembalian = uang - total;
            cout << "\n\tKembaliannya Rp." << kembalian << " Terima kasih \n\n" << endl;
        } else if(uang < total){
            kembalian = total - uang;
            cout << "\n\tmaaf uangnya kurang Rp." << kembalian << " Terima kasih \n\n" << endl;
        } else if(uang == total){
            cout << "\n\tUangnya pas, Terima kasih \n\n"<< endl;
        }
        return(this->kembalian);
};
};


int main(){
    char pangananku, ombeku;
    int rego, regoo, kembalian;
    Restolokal pesen(pangananku, ombeku, rego, regoo, kembalian);



    return 0;
}
