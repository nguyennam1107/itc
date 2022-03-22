#include <iostream>
using namespace std;
int main()
{
    int p, q, i;
    cout<<"Nhap p, q:";
    cin>>p>>q;
    i=q-1;
    do{
        if(p%i==0 && q%i==0){
            cout<<"UCLN cua p,q la: "<<i<<endl;
            break;
        }
        i--;
    }while(i>0);
     i=(p+1);
    do{
        if(i%p==0 && i%q==0){
            cout<<"BCNN cua p,q la: "<<i<<endl;
            break;
        }
        i++;
    }while(i<(p*2));
    return 0;
}
