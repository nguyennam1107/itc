#include<iostream>
using namespace std;
class PTGT{
	char MaPT[8];
	char HangSX[10];
	struct ngaySX{
		int ngay,thang,nam;
	}SX;
	int giachuathue,thue;
	public:
		PTGT(char *MaPT=" ",char *HangSX=" ",int giachuathue=0){
		}
		~PTGT(){}
		void nhap(){
			cout<<"Nhap ma phuong tien : ";
			cin>>MaPT;
			cout<<"Nhap hang san xuat : ";
			cin>>HangSX;
			cout<<"Nhap ngay san xuat : ";
			cin>>SX.ngay;
			cout<<"Nhap thang san xuat : ";
			cin>>SX.thang;
			cout<<"Nhap nam san xuat : ";
			cin>>SX.nam;
			cout<<"Nhap gia chua thue : ";
			cin>>giachuathue;
		}
		void xuat(){
			cout<<"Ma phuong tien : "<<MaPT<<endl;
			cout<<"Hang san xuat : "<<HangSX<<endl;
			cout<<"Nhap ngay san xuat :"<<SX.ngay<<"/"<<SX.thang<<"/"<<SX.nam<<endl;
			cout<<"Nhap gia chua thue : "<<giachuathue<<endl;
		}
	float soThue(){
		thue=giachuathue+((giachuathue/100)*8);
		return thue;
	}	
	friend class MayBay;
};
class MayBay:public PTGT{
	int duongBay,soChoNgoi;
	char noiDKKD[20];
	public:
	MayBay(char *MaPT=" ",char *HangSX=" ",int giachuathue=0,int duongBay=0,int soChoNgoi=0,char *noiDKKD=" "){}
	~MayBay(){}
	void nhap(){
		PTGT::nhap();
		cout<<"Nhap so duong bay : ";
		cin>>duongBay;
		cout<<"Nhap so cho ngoi : ";
		cin>>soChoNgoi;
		cout<<"Nhap noi dang ki kinh doanh : ";
		gets(noiDKKD);
	}
	void xuat(){
		cout<<"THONG TIN MAY BAY : "<<endl;
		PTGT::xuat();
		cout<<"So duong bay : "<<duongBay<<endl;
		cout<<"So cho ngoi : "<<soChoNgoi<<endl;
		cout<<"Noi dang ki kinh doanh : "<<noiDKKD<<endl;
	}
	friend istream &operator>>(istream &in,MayBay &a){
		/*cout<<"Nhap ma phuong tien : ";
		in>>MaPT;
		cout<<"Nhap hang san xuat : ";
		in>>HangSX;
		cout<<"Nhap ngay san xuat : ";
		in>>SX.ngay;
		cout<<"Nhap thang san xuat : ";
		in>>SX.thang;
		cout<<"Nhap nam san xuat : ";
		in>>SX.nam;
		cout<<"Nhap gia chua thue : ";
		in>>giachuathue;*/
		cout<<"Nhap so duong bay : ";
		in>>a.duongBay;
		cout<<"Nhap so cho ngoi : ";
		in>>a.soChoNgoi;
		cout<<"Nhap noi dang ki kinh doanh : ";
		in>>a.noiDKKD;
		return in;
	}
	friend ostream &operator<<(ostream &out,MayBay &a){
		out<<"So duong bay : "<<a.duongBay<<endl;
		out<<"So cho ngoi : "<<a.soChoNgoi<<endl;
		out<<"Nhap noi dang ki kinh doanh : "<<a.noiDKKD<<endl;
		return out;
	}
	friend class PTGT;
	bool operator>(int soNgoi){
		return this->soChoNgoi>soNgoi;
	}
};
int main(){
	PTGT obj;
	obj.nhap();
	obj.xuat();
}
