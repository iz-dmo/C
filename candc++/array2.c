#include<stdio.h>
#define MGMG 5
int main()
{
    int mgmg[MGMG];
    for (int i = 0; i < MGMG; ++i)
    {
        mgmg[i] = 2+(2*i);
    }
    for (int j = 0; j < MGMG; ++j)
    {
        printf('%d%d\n',j,mgmg[j]);
    }
    
    
    return 0;

}