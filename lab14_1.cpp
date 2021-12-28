#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double data[],int N ,double ans[])
{
    double sumA=0 ,sumS =0,multG=1,sumH=0,max=data[0],min=data[0],num=N;
    for (int i = 0; i < num; i++)
    {
        sumA +=data[i];
        sumS+=(data[i]*data[i]);
        multG*=data[i];
        sumH+=(1/data[i]);
        if(data[i]>max)
        {
            max=data[i];
        }
        if(data[i]<min)
        {
            min=data[i];
        }

        
    }
    
    ans[0]=sumA/num;
    ans[1]=sqrt(((sumS/num)-pow(ans[0],2)));
    ans[2]=pow(multG,(1/num));
    ans[3]=num/sumH;
    ans[4]=max;
    ans[5]=min;





}