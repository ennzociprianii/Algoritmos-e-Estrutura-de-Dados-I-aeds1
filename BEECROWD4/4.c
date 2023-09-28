#include <stdio.h>
int main()
{
   int n[20], valor;
    for(int i=0; i<20; i++)
        scanf("%d",&n[i]);
    for(int i=0, j = 19; i<10; i++, j--)
    {
        valor=n[i];
        n[i]=n[j];
        n[j]=valor;
        
    }
    for(int i=0; i<20; i++)
        printf("N[%d] = %d\n",i,n[i]);
    return 0;
}