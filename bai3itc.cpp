#include<iostream>
using namespace std;
class daThuc{
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
	int biena(){
		return a;
	}
	int bienb(){
		return b;
	}	
	int bienc(){
		return c;
	}
	int biend(){
		return d;
    }
    void xuat(){
    	cout<<a<<"x^3+"<<b<<"x^2+"<<c<<"x+"<<d<<endl;
	}
};
int main(){
	int a[2],b[2],c[2],d[2],i=0;
	do{
	cout<<"Nhap da thuc "<<i+1<<" ax^3+bx^2+cx+d "<<endl;
	cout<<"Nhap a "<<endl;
	cin>>a[i];
	cout<<"Nhap b "<<endl;
	cin>>b[i];
	cout<<"Nhap c "<<endl;
	cin>>c[i];
	cout<<"Nhap d "<<endl;
	cin>>d[i];
	i++;
	}while(i!=2);
	daThuc N1(a[0],b[0],c[0],d[0]);
	daThuc N2(a[1],b[1],c[1],d[1]);
    daThuc N3(a[0]+a[1],b[0]+b[1],c[0]+c[1],d[0]+d[1]);
    N3.xuat();
}
