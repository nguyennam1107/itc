#include<iostream>
using namespace std;
class soNguyen{
	private:
		int so_nguyen[100];
	public:
		void getSN(int a){
			this -> so_nguyen = a;
		}
		int setSN(){
			return so_nguyen;
		}
		void nhapMang(int n){
			
			for(int i=0;i<n;i++){
				cin>>so_nguyen[i];
			}
		}
		void xuatMang(int n){
			for(int i=0;i<n;i++){
				cout<<" ["<<so_nguyen[i]<<"] ";
			}
		}
		void xuatMangnguoc(int n){
			for(int i=n-1;i>=0;i--){
				cout<<" ["<<so_nguyen[i]<<"] ";
			}
		}
		void timKiem(int n,int a){
		    for(int i=0;i<n;i++){
			if(so_nguyen[i]==a){
				cout<<"So nguyen thu "<<i+1<<" co gia tri bang "<<a<<endl;
			}
			}
		}
		void sapxep(int n){
			  for(int i=0;i<n;i++){
			  	  for(int j=i+1;j<n-1;j++){
			  	  	if(so_nguyen[i]>so_nguyen[j]){
			  	  		int temp;
			  	  		temp=so_nguyen[i];
			  	  		so_nguyen[i]=so_nguyen[j];
			  	  		so_nguyen[j]=temp;
						}
			  	  }}
		}
		
};
int main(){
	soNguyen obj;
	int n,a,chon=6;
	do{
		if(chon==1){
			system("cls");
			cout<<" Nhap so phan tu cua mang "<<endl;
	        cin>>n;
			obj.nhapMang(n);
		}
		else if(chon==2){
			system("cls");
			obj.xuatMangnguoc(n);
		}
		else if(chon==3){
			system("cls");
			cout<<"Nhap so can tim ";
			cin>>a;
			obj.timKiem(n,a);
		}
		else if(chon==4){
			system("cls");
	        obj.sapxep(n);
	        obj.xuatMang(n);
        }
        cout<<"\n1: nhap mang so nguyen "<<endl;
	    cout<<"2: in ra cac phan tu nguoc lai khi nhap vao"<<endl;
	    cout<<"3: tim kiem phan tu trong mang"<<endl;
	    cout<<"4: sap xep mang tang dan "<<endl;
	    cout<<"5: thoat"<<endl;
        cin>>chon;
	}while(chon!=5);
	return 0;
}
