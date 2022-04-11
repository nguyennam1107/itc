#include<iostream>
using namespace std;
class an_pham{
	string ten;
	int giaThanh;
	public:
		void nhap(){
			cout<<"Nhap ten : ";
			cin>>ten;
			cout<<"Nhap gia : ";
			cin>>giaThanh;
		}
		void xuat(){
			cout<<"Ten san pham la : "<<ten<<endl;
			cout<<"Gia cua san pham la : "<<giaThanh<<endl;
		}
		string name(){
			return ten;
		}
};
class sach:public an_pham{
	int soTrang;
	public:
		void nhap(){
			an_pham::nhap();
			cout<<"Nhap so trang ";
			cin>>soTrang;
		}
		void xuat(){
			an_pham::xuat();
			cout<<"So trang cua sach la : "<<soTrang<<endl;
		}
		int trang(){
			return soTrang;
		}
};
class diaCD :public an_pham{
	int soPhut;
	public:
		void nhap(){
				an_pham::nhap();
				cout<<"Nhap so phut cua dia CD ";
				cin>>soPhut;
		}
		void xuat(){
				an_pham::xuat();
				cout<<"So phut cua dia CD la : "<<soPhut<<endl;
		}
        string name(){
        	return an_pham::name();
		}
		
};
int main(){
	int chon,n;
	do{
		cout<<"1:Sach"<<endl;
		cout<<"2:DiaCD"<<endl;
		cout<<"3:Exit"<<endl;
		cin>>chon;
		if(chon==1){
			cout<<"Nhap so luong sach ";
			cin>>n;
			sach book[n];
			for(int i=0;i<n;++i){
				cout<<"Nhap sach thu "<<i+1<<endl;
				book[i].nhap();
			}
			int chon2;
			do{
				cout<<"1:In danh sach tat ca cac sach "<<endl;
				cout<<"2:In danh sach sach > 500 trang "<<endl;
				cout<<"3:Exit"<<endl;
				cin>>chon2;
				if(chon2==1){
			    for(int i=0;i<n;++i){
				cout<<"Thong tin sach thu "<<i+1<<endl;
				book[i].xuat();}
				}
			    else if(chon2==2){
			    for(int i=0;i<n;++i){
			        if(book[i].trang()>500)	{
			        	book[i].xuat();
					}
				}
			  }
			}while(chon2==3);
		}
		else if(chon==2){
			cout<<"Nhap so luong dia CD ";
			cin>>n;
			diaCD CD[n];
			for(int i=0;i<n;++i){
				cout<<"Nhap dia CD thu "<<i+1<<endl;
				CD[i].nhap();
			}
			int chon1;
			do{
				cout<<"1: In danh sach dia CD "<<endl;
				cout<<"2: Tim dia CD theo ten "<<endl;
				cout<<"3: Exit"<<endl;
				cin>>chon1;
				if(chon1==1){
			    for(int i=0;i<n;++i){
				cout<<"Thong tin dia CD thu "<<i+1<<endl;
				CD[i].xuat();}}
				else if(chon1==2){
					string c;
					cout<<"Nhap ten can tim la ";
					cin>>c;
					for(int i=0;i<n;++i){
                        if(CD[i].name()== c){
                        	CD[i].xuat();
						}
					}
				}
			}while(chon1!=3);
			
		}
	}while(chon!=3);
}
