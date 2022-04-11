#include<iostream>
#include<cstring>
using namespace std;
class nguoi{
	char name[20];
	int namSinh;
	public:
		void nhap(){
			fflush(stdin);
			cout<<"Nhap ho va ten : ";
			gets(name);
			fflush(stdin);
			cout<<"Nhap nam sinh : ";
			cin>>namSinh;
		}
		void xuat(){
			cout<<"Ho va Ten la : "<<name<<endl;
			cout<<"Nam sinh la : "<<namSinh<<endl;
		}
};
class thi_sinh : public nguoi{
	char soBd[8];
	float math,physical,chemistry,tong_3mon;
	public:
	void nhap(){
		nguoi::nhap();
		cout<<"Nhap so bao danh : ";
		cin>>soBd;
		cout<<"Nhap diem mon toan : ";
		cin>>math;
		cout<<"Nhap diem mon vat li : ";
		cin>>physical;
		cout<<"Nhap diem mon hoa hoc : ";
		cin>>chemistry;
		cout<<"-------------------------------------------------"<<endl;
	}
	void xuat(){
		nguoi::xuat();
		cout<<"So bao danh la : "<<soBd<<endl;
		cout<<"Diem mon toan la : "<<math<<endl;
		cout<<"Diem mon vat li la : "<<physical<<endl;
		cout<<"Diem mon hoa hoc la : "<<chemistry<<endl;
	}
	/*friend istream &operator>>(istream &in,thi_sinh &a){
		in>>
	}*/
	float tinh_tong(){
		tong_3mon = math+physical+chemistry;
		return tong_3mon;
	}
	bool operator ==(char c[8]){
		return (strcmp(this->soBd,c)==0);
	}
};
int main(){
	int n;
	cout<<"Nhap so luong thi sinh : ";
	cin>>n;
	thi_sinh KTKTCN[n];
	for(int i=0;i<n;++i){
		cout<<"Nhap thong tin thi sinh thu "<<i+1<<endl;
		KTKTCN[i].nhap();
	}
	int chon;
	do{
	cout<<"1:In ra thong tin thi sinh "<<endl;
	cout<<"2:In ra thong tin thi sinh sap xep theo tong diem tang dan "<<endl;
	cout<<"3:Tim thi sinh theo so bao danh "<<endl;
	cout<<"4:In ra cac thi sinh co tong diem > 5 "<<endl;
	cout<<"5:Exit"<<endl;
	cin>>chon;
		if(chon==1){
	for(int i=0;i<n;++i){
		cout<<" thong tin thi sinh thu "<<i+1<<endl;
		KTKTCN[i].xuat();
	}}
	    else if(chon==2){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
		if(KTKTCN[i].tinh_tong()>KTKTCN[j].tinh_tong()){
			thi_sinh temp;
			temp=KTKTCN[i];
			KTKTCN[i]=KTKTCN[j];
			KTKTCN[j]=temp;
		}
	}
	for(int i=0;i<n;++i){
		cout<<" thong tin thi sinh thu "<<i+1<<endl;
		KTKTCN[i].xuat();
	}}}
	    else if(chon==3){
	    	char c[8];
	    	cout<<"Nhap so bao danh can tim : ";
	    	cin>>c;
	    	for(int i=0;i<n;++i){
	    		if(KTKTCN[i]==c){
	    			cout<<"Thi sinh can tim la "<<endl;
	    			KTKTCN[i].xuat();
				}
			}
		}
		else if(chon==4){
			for(int i=0;i<n;++i){
				if(KTKTCN[i].tinh_tong()>5){
					KTKTCN[i].xuat();
				}
			}
		}
}while(chon!=5);

}
