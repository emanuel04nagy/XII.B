#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, a[100][100], x=0;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    for(int i=m;i>0;i--){
        for(int j=n;j>0;j--){
        a[i][j]=x*x;
        x=x+2;
        }
    }
    for(i=1; i<=m;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}
