#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class quanlygiaovien{
	char ht[30];
	int tuoi_t;
	char bang_cap[15];
	string chuyen_nganh;
	float bac_luong,luong_co_ban;
	public:
		void nhap(){
			cout<<"-Nhap ho va ten ";
			fflush(stdin);
			gets(ht);
			cout<<"-Nhap tuoi ";
			cin>>tuoi_t;
			cout<<"-Nhap bang cap ";
			fflush(stdin);
			gets(bang_cap);
			cout<<"-Nhap chuyen nganh ";
			fflush(stdin);
		    cin>>chuyen_nganh;
			cout<<"-Nhap bac luong ";
			fflush(stdin);
			cin>>bac_luong;
		}
		void xuat(){
			cout<<setw(30)<<ht
			    <<setw(10)<<tuoi_t
			    <<setw(20)<<bang_cap
			    <<setw(25)<<chuyen_nganh
			    <<setw(10)<<bac_luong
				<<setw(15)<<luong_co_ban<<endl;
		}
		void tinh(){
			luong_co_ban=bac_luong*610;
		}
		float luong(){
			return luong_co_ban;
		}
		int size_nganh(){
			return chuyen_nganh.size();
		}
		string layx(){
		    return chuyen_nganh;
	    }
	    char laygiaovien(int i){
	    	return chuyen_nganh[i];
		}
};
int main(){
	int n=1,chon;
	quanlygiaovien giaovien[100];
	do{
		cout<<"\t\t\t\nMemnu"<<endl;
		cout<<" 1:Nhap thong tin cua 1 giao vien "<<endl;
		cout<<" 2:Nhap thong tin cua n giao vien "<<endl;
		cout<<" 3:Tim giao vien co tien luong nho hon 2000"<<endl;
		cout<<" 4:Tim giao vien theo nganh "<<endl;
		cout<<" 5:Sap xep giao vien "<<endl;
		cout<<" 6:exit"<<endl;
		cin>>chon;
		if(chon==1){
			system("cls");
			giaovien[0].nhap();
			giaovien[0].tinh();
			system("cls");
				cout<<setw(30)<<"Ho va ten"
			        <<setw(10)<<" Tuoi "
			        <<setw(20)<<" Bang cap"
			        <<setw(25)<<" Chuyen nganh "
			        <<setw(10)<<" Bac luong "
					<<setw(15)<<" Luong "<<endl;
			giaovien[0].xuat();
		}
		else if(chon==2){
			cout<<"\nNhap so luong giao vien ";
			cin>>n;
			system("cls");
			for(int i=0;i<n;i++){
				cout<<"\t\t\nNhap thong tin giao vien thu "<<i+1<<endl;
				giaovien[i].nhap();
				giaovien[i].tinh();
				}	
				system("cls");
				cout<<setw(30)<<"Ho va ten"
			        <<setw(10)<<" Tuoi "
			        <<setw(20)<<" Bang cap"
			        <<setw(25)<<" Chuyen nganh "
			        <<setw(10)<<" Bac luong "
					<<setw(15)<<" Luong "<<endl;
			for(int i=0;i<n;i++){
				giaovien[i].xuat();
			}	
		}
		else if(chon==3){
			system("cls");
			cout<<setw(30)<<"Ho va ten"
			    <<setw(10)<<" Tuoi "
			    <<setw(20)<<" Bang cap"
			    <<setw(25)<<" Chuyen nganh "
			    <<setw(10)<<" Bac luong "
				<<setw(15)<<" Luong "<<endl;
			for(int i=0;i<n;i++){
				if(giaovien[i].luong()<2000){
					giaovien[i].xuat();
				}
			}
		}
		else if(chon==4){
			string a;
			cin>>a;
			system("cls");
			cout<<setw(30)<<"Ho va ten"
			    <<setw(10)<<" Tuoi "
			    <<setw(20)<<" Bang cap"
			    <<setw(25)<<" Chuyen nganh "
			    <<setw(10)<<" Bac luong "
				<<setw(15)<<" Luong "<<endl;
			for(int i=0;i<n;i++){
				    for(int z=0;z<giaovien[i].size_nganh();z++){
					if(giaovien[i].layx()==a){
						giaovien[i].xuat();
					}
				    }
			    }
			}
		else if(chon==5){
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					for(int z=0;z<giaovien[i].size_nganh();z++){
						if(giaovien[i].laygiaovien(z)>giaovien[j].laygiaovien(z)){
							quanlygiaovien temp=giaovien[i];
							giaovien[i]=giaovien[j];
							giaovien[j]=temp;
						}
					}
				}
			}
			system("cls");
				cout<<setw(30)<<"Ho va ten"
			        <<setw(10)<<" Tuoi "
			        <<setw(20)<<" Bang cap"
			        <<setw(25)<<" Chuyen nganh "
			        <<setw(10)<<" Bac luong "
					<<setw(15)<<" Luong "<<endl;
			for(int i=0;i<n;i++){
				giaovien[i].xuat();
			}
		}
		}while(chon!=6);
	}
