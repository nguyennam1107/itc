#include <iostream>
#include<string.h>
using namespace std;
class Khachhang{
	private:
		char ht[30];
		struct ngaysinh{
			int ngay;
			int thang;
			int nam;
		}NS;
		char cmt[10];
		char k[50];
		int tuoi;
	public:
		void nhap(){
			cout<<"Nhap thong tin cua khach hang:\n"<<endl;
			cout<<"Nhap ho ten: ";
			fflush(stdin);
			gets(ht);
			cout<<"Nhap ngay sinh: "<<endl<<"Nhap ngay: ";
			cin>>NS.ngay;
			cout<<"Nhap thang: ";
			cin>>NS.thang;
			cout<<"Nhap nam: ";
			cin>>NS.nam;
			fflush(stdin);
			cout<<"Nhap so chung minh thu: ";
			gets(cmt);
			cout<<"Nhap ho khau: ";
			gets(k);
			fflush(stdin);
		}
		void xuat(){
			cout<<"Thong tin cua khach hang: \n";
			cout<<"Ho ten: "<<ht<<endl;
			cout<<"Ngay sinh: "<<NS.ngay<<"/"<<NS.thang<<"/"<<NS.nam<<endl;
			cout<<"So chung minh thu: "<<cmt<<endl;
			cout<<"Ho khau: "<<k<<endl;
		}
	int thang(){
		return NS.thang;
	}
	int lay(){
		return strlen(ht);
	}
	char layx(int i){
		return ht[i];
	}
	char layk(int i){
		return k[i];
	}
	int tinhtuoi(){
		int namht=2022;
		tuoi=namht-NS.nam;
		return tuoi;
	}
};
int main(){
	int chon,n=1;
	Khachhang x[1000];
	do{
	cout<<" 1:Nhap 1 khach hang "<<endl;
	cout<<" 2:Nhap n khach hang "<<endl;
	cout<<" 3:Tim khach hang theo ho khau "<<endl;
	cout<<" 4:sap xep theo ten"<<endl;
	cout<<" 5:exit"<<endl;
	cin>>chon;
		if(chon==1){
    	    Khachhang y;
	        y.nhap();
	        y.xuat();}
	    else if(chon==2){
	        cout<<" Nhap so luong khach hang ";
	        cin>>n;
	        for(int i=0;i<n;i++){
	        cout<<"\t\t\t\nNhap khach hang thu "<<i+1<<endl;
	        x[i].nhap();
}
            system("cls");
            for(int i=0;i<n;i++){
            cout<<"_______________________________________________"<<endl;
	        x[i].xuat();}}
	    else if(chon==3){
	    		char hokhau[50];
	    		cout<<"Nhap ho khau can tim ";
	    		fflush(stdin);
	    		gets(hokhau);
	    	for(int i=0;i<n;i++){
			if(x[i].layk(i)==hokhau[i]){
				x[i].xuat();
			}
			}
		}
		else if(chon==4){
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
						if(x[i].tinhtuoi()<x[j].tinhtuoi()){
							Khachhang temp=x[i];
							x[i]=x[j];
							x[j]=temp;
						}
				}
			}
			for(int i=0;i<n;i++){
				x[i].xuat();
			}
		}
}while(chon!=5);
	return 0;
}
