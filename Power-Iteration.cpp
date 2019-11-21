#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float a[10][10],x[10],c[10],d=0,temp;
    int n,i,j;
    std::cout << " Enter the order of matrix ? ";
    std::cin>>n;
    std::cout<<"Coefficients of matrix ";
    for(i=0;i<n;i++)
    {
        std::cout<<std::endl<<"row  "<<i+1<<"  ";
        for(j=0;j<n;j++)
            std::cin>>a[i][j];
    }

    std::cout<<"Enter your starting vector ? ";
    for(i=0;i<n;i++)
    std::cin>>x[i];

    do
    {
        for(i=0;i<n;i++)
        {
            c[i]=0;
            for(j=0;j<n;j++)
                c[i]+=a[i][j]*x[j];
        }
        for(i=0;i<n;i++)
            x[i]=c[i];
            
        temp=d;
        d=0;
        
        for(i=0;i<n;i++)
        {
            if(fabs(x[i])>fabs(d))
                d=x[i];
        }
        for(i=0;i<n;i++)
            x[i]/=d;
            
    }while(fabs(d-temp)>0.00001);

    std::cout<<"Eigen value is : "<<d<<std::endl;
    
    std::cout<<"Eigenvector is: ";
    for(i=0;i<n;i++)
        std::cout<<std::endl<<x[i];

    getch();
    return 0;
}
