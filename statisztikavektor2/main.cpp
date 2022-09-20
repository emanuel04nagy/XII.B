#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int v[100000], stat[100000] = {0};
    int x, y, szam;
    in>>x;
    in>>y;
    while(in>>szam){
        if(x <= szam && y >= szam){
            stat[szam]++;
        }
    }
    int counter = 0;
    for(int i=x; i<y+1; i++){
        if(stat[i]>0) counter++;
    }
    cout<<counter;
    return 0;
}
