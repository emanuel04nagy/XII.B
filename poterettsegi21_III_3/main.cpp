#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int tukor(int a){
   int ujszam=0, szj;
     if(a<10){
       return a*10;
}
     while(a>0){
       szj=a%10;
       a=a/10;
       ujszam=ujszam*10+szj;
}
return ujszam;
}

int main()
{
    int na,nb,a[100]={0}, s=0;
    ifstream in("numere.in");
    vector<int>vec;
    in>>na;
    in>>nb;
    for(int i=1;i<=na;i++){
        int x;
        in>>x;
        a[x%100]++;
    }
    for(int i=1;i<=nb;i++){
        int x;
        in>>x;
        x=x%100;
        if(a[x]>0){
            s+=a[x];
        }
        int y=tukor(x);
        if(a[y]>0){
                if(y%10 != y/10){
            s+=a[y];
        }}
    }
    cout<<s;

    return 0;
}
