#include<stdio.h>

int main()
{
    int i, j, k;
    int N, T;
    scanf("%d %d",&N,&T);
    double n[N],m[N],f[N][N];
    for (i=0; i<N; i++)
    {
        scanf("%lf",&n[i]);
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            scanf("%lf",&f[i][j]);
        }
    }
    for (i=0; i<T; i++)
    {
        for (j=0; j<N; j++)
        {
            double tmp = 0;
            for (k=0; k<N; k++)
            {
                tmp += n[k]*f[k][j];
            }
            m[j] = tmp;
        }
        for (j=0; j<N; j++) n[j] = m[j];
    }
    for (i=0; i<N; i++) printf("%.2lf\n",n[i]);
}
