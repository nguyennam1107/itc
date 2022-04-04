#include<iostream>
using namespace std;
class daThuc{
	private:
	int a,b,c,d;
	public:
	daThuc(int a,int b,int c,int d){
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
	}
	~daThuc(){
	}
    void xuat(){
    	cout<<a<<"x^3+"<<b<<"x^2+"<<c<<"x+"<<d<<endl;
	}
	friend daThuc operator+(daThuc so1 ,daThuc so2);
	friend daThuc operator-(daThuc so1 ,daThuc so2);
};
   daThuc daThuc::operator+(daThuc so1 ,daThuc so2){
   	daThuc so3;
   	so3.a=so1.a+so2.a;
   	so3.b=so1.b+so2.b;
   	so3.c=so1.c+so2.c;
   	so3.d=so1.d+so2.d;
   	return so3;
   }
   daThuc daThuc::operator-(daThuc so1 ,daThuc so2){
   	daThuc so3;
   	so3.a=so1.a-so2.a;
   	so3.b=so1.b-so2.b;
   	so3.c=so1.c-so2.c;
   	so3.d=so1.d-so2.d;
   	return so3;
   }
int main(){
	daThuc so1,so2,so3;
	for(int i=0;i<2;i++){
		int a,b,c,d;
		cout<<"Nhap gia tri a da thuc so "<<i;
		cin>>a;
		cout<<"Nhap gia tri b da thuc so "<<i;
		cin>>b;
		cout<<"Nhap gia tri c da thuc so "<<i;
		cin>>c;
		cout<<"Nhap gia tri d da thuc so "<<i;
		cin>>d;
	}
	int chon;
	do{
		cout<<" 1:tong 2 da thuc "<<endl;
		cout<<" 2:hieu 2 da thuc "<<endl;
		cout<<" 3:exit "<<endl;
		cin>>chon;
		if(chon==1){
			so1+so2;
			so3.xuat();
		}
		if(chon==2){
			so1-so2;
			so3.xuat();
		}
	}while(chon!=3);
}
