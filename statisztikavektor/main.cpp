#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
   int v[1000], stat[10] = {0};
   for(int i=0; i<1000; i++){
    v[i] =rand()%10;
    stat[v[i]]++;
   }
   for(int i=0; i<10; i++){
    cout<< i <<" "<<stat[i]<<endl;
   }
    return 0;
}
