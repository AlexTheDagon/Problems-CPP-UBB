#include <iostream>

using namespace std;
int a[19],n,x;
int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
    {
        a[0]=a[1];
        a[1]=a[2];
        a[2]=a[3];
        a[3]=a[4];
        a[4]=a[5];
        a[5]=a[6];
        a[6]=a[7];
        a[7]=a[8];
        a[8]=a[9];
        a[9]=a[10];
        a[10]=a[11];
        a[11]=a[12];
        a[12]=a[13];
        a[13]=a[14];
        a[14]=a[15];
        a[15]=a[16];
        a[16]=a[17];
        a[17]=a[18];
        cin>>a[18];
        if(a[0]<a[1] && a[1]<a[2] && a[2]<a[3] && a[3]<a[4] && a[4]<a[5] && a[5]<a[6] && a[6]<a[7] && a[7]<a[8] && a[8]<a[9] && a[9]>a[10] && a[10]>a[11] && a[11]>a[12] && a[12]>a[13] && a[13]>a[14] && a[14]>a[15] && a[15]>a[16] && a[16]>a[17] && a[17]>a[18])++x;
    }
    cout<<x;
    return 0;
}