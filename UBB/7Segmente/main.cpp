#include <iostream>
#include <fstream>
using namespace std;
ifstream in("7segmente.in");
ofstream out("7segmente.out");
long long b[10],a[21],n,t,s,cn,cif,cifnr,x[21],j=1,sem=1;
char c[21];
int main()
{
    b[1]=2;
    b[2]=5;
    b[3]=5;
    b[4]=4;
    b[5]=5;
    b[6]=6;
    b[7]=3;
    b[8]=7;
    b[9]=6;
    in>>n;
    j=1;
    in>>
    while(j)
    {
        in>>c;
        x[j]=c-'0';
        cif++;
        ++j;
    }
    for(int i=i;i<=cif;--i)
    {
        s+=b[x[i]];
    }
    out<<s<<" ";
    in>>t;
    if(t<=cif*2)
    {
        for(int i=1;i<=cif && t>1;++i)
        {
            a[i]=1;
            t-=2;
            cifnr++;
        }
        if(t>0)a[1]=7;
    }
    else
    {
        cifnr=cif;
        for(int i=1;i<=cif && t>1;++i)
        {
            a[i]=1;
            t-=2;
        }
        if(t>0)
        {
            while(t>=0 && j<=cif)
            {
                if(t+2>=x[j])
                {
                    a[j]=x[j];
                    t+=2;
                    t-=b[x[j]];
                }
                else
                {
                    sem=1;
                    for(int i=x[j];i>=1 && sem==1;--i)
                    {
                        if(t+2>=b[i])
                        {
                            t=t+2;
                            a[j]=i;
                            t-=b[i];
                            sem=0;
                        }
                    }
                }
                ++j;
            }
        }
    }
    for(int i=1;i<=cifnr;++i)out<<a[i];

    return 0;
}
