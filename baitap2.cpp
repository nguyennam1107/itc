#include<iostream>
using namespace std;
class soPhuc{
	private:
		int phan_thuc[2],phan_ao[2];
	public:
	void tong(){
		cout<<"z + z' = "<<phan_thuc[0]+phan_thuc[1]<<" + "<<phan_ao[0]+phan_ao[1]<<" * j"<<endl;
	}
	void hieu(){
		cout<<"z - z' = "<<phan_thuc[0]-phan_thuc[1]<<" + "<<phan_ao[0]-phan_ao[1]<<" * j"<<endl;
	}
	void nhap(){
		cout<<"z= Phan thuc + Phan ao * j"<<endl;
		for(int i=0;i<2;i++){
		cout<<"Nhap phan thuc cua so phuc "<<endl;
		cin>>phan_thuc[i];
		cout<<"Nhap phan ao cua so phuc "<<endl;
		cin>>phan_ao[i];
	}
	}
};
int main(){
	soPhuc obj;
	obj.nhap();
	obj.tong();
	obj.hieu();
	return 0;
}
