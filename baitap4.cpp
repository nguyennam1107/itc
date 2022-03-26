#include<iostream>
#include<iomanip>
using namespace std;
class quanlyhanghoa{
	public:
		struct hanghoa{
			char mahh[8],tenhh[30];
			int so_luong;
			float don_gia,thanh_tien;
	    }hh;
	public:
	    void nhap(){
	        cout<<" Nhap ma hang hoa ";
	        cin>>hh.mahh;
	        cout<<" Nhap ten mat hang ";
	        cin.ignore();
	        gets(hh.tenhh);
	        cout<<" Nhap so luong mat hang ";
	        cin>>hh.so_luong;
	        cout<<" Nhap don gia mat hang ";
	        cin>>hh.don_gia;
		}
		void xuat(){
		cout<<setw(10)<<hh.mahh
		    <<setw(30)<<hh.tenhh
			<<setw(10)<<hh.don_gia
			<<setw(10)<<hh.so_luong
			<<setw(10)<<hh.thanh_tien<<endl;
        }
		void tinh(){
			hh.thanh_tien=hh.so_luong*hh.don_gia;
		}
		void find(){
			if(hh.don_gia>=50){
				xuat();
			}
		}
};
int main(){
	int n;
	cout<<" Nhap so luong mat hang ";
	cin>>n;
	quanlyhanghoa obj[n];
	for(int i=0;i<n;i++){
		cout<<"\t\t\t\nHang Hoa thu "<<i+1<<endl;
		obj[i].nhap();}
		system("cls");
		cout<<"\t\t\t\tDanh sach hang hoa "<<endl;
		cout<<setw(10)<<" Ma hang hoa "
		    <<setw(30)<<" Ten hang hoa "
			<<setw(10)<<" Don gia "
			<<setw(10)<<" So luong"
			<<setw(10)<<" Thanh tien"<<endl;
	for(int i=0;i<n;i++){
		obj[i].tinh();
		obj[i].xuat();
	}
	int chon;
	cin>>chon;
	if(chon==1){
		for(int i=0;i<n;i++){
		obj[i].find();
		}
	}
	return 0;
}
