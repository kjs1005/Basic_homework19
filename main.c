#include <stdio.h>
#include <stdlib.h>

int rec=0; /*��J���x�έӼ�*/
double r1_x[10],r1_y[10],r2_x[10],r2_y[10]; /*r1�N���W���Ar2�N��k�U���Ax�By���O�Ox�y�ЩMy�y��*/

void check(int point,double x,double y);
int main(void)
{
    int point=1; /*���P�_���I�y�ЭӼ�*/
    char ch; /*�P�_�r���A 'r' �N��x�� �A '*' �N��x�ο�J����*/
    double p_x,p_y; /*���P�_���I�y��*/
    
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
