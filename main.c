#include <stdio.h>
#include <stdlib.h>

int rec=0; /*輸入的矩形個數*/
double r1_x[10],r1_y[10],r2_x[10],r2_y[10]; /*r1代表左上角，r2代表右下角，x、y分別是x座標和y座標*/

void check(int point,double x,double y);
int main(void)
{
    int point=1; /*欲判斷的點座標個數*/
    char ch; /*判斷字元， 'r' 代表矩形 ， '*' 代表矩形輸入結束*/
    double p_x,p_y; /*欲判斷的點座標*/
    
    while(ch=getchar())
    {
     if(ch=='r')
     { 
     scanf("%lf %lf %lf %lf",&r1_x[rec],&r1_y[rec],&r2_x[rec],&r2_y[rec]);
     rec++;
     }
     else if(ch=='*') break; 
    }
    
    while(scanf("%lf %lf",&p_x,&p_y))
    {
     if(p_x==9999.9&&p_y==9999.9) break; 
     check(point,p_x,p_y);
     point++; 
    }
     
    system("pause");
    return 0; 
}
void check(int point,double x,double y)
{
     int i,flag=1;
     
     for(i=0;i<rec;i++)
     if((r1_x[i]<x)&&(r2_x[i]>x)&&(r1_y[i]>y)&&(r2_y[i]<y))
     { 
     printf("Point %d is contained in figure %d\n",point,i+1);
     flag=0;
     }
     if(flag) 
     printf("Point %d is not contained in any figure\n",point); 
}
