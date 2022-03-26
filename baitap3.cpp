#include<iostream>
using namespace std;
class phanSo{
		int tu_so,mau_so;
	public:	
		void nhap(){
			cout<<"Nhap tu so ";
			cin>>tu_so;
			cout<<"Nhap mau so ";
			cin>>mau_so;}
		float giatri(){
			return (tu_so*1.0)/mau_so;
		}
};
int main(){
	int n;
	float sum=0;
	cout<<"Nhap so Phan tu phan so t/m ";
	cin>>n;
	phanSo obj[n];
	for(int i=0;i<n;i++){
		obj[i].nhap();
		sum+=obj[i].giatri();}
	cout<<" Tong cua "<<n<<" phan so la "<<sum;
	return 0;
}
