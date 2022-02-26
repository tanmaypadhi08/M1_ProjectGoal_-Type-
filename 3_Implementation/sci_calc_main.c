#include<stdio.h>
#include"cal.h"

extern int test();

int main ()
{
    test();
    int type;
    printf("Functions in Scientific Calculator\n");
    printf("press \n 1 for Calculator \n 2 for Memory conversion \n 3 for Currency Conversion \n 4 for Unit Conversion \n");
    scanf("%d",&type);
    switch (type)
    {
        case 1:
          {
               printf("Functions in Calculator\n");
                int cal_mode;
                printf("press \n 1 for Addition \n 2 for Substraction \n 3 for Multiplication \n 4 for Division \n 5 for Square \n ");
                scanf("%d",&cal_mode);

                switch (cal_mode)
                {
                     case 1:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,sum;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         sum=add(num1,num2); 
                         printf(" Sum of %f +%f = %f \n",num1 , num2, sum);
                         break;
                     }
                     case 2:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,diff;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         diff=sub(num1,num2); 
                         printf(" Difference  of %f - %f = %f \n",num1 , num2, diff);
                         break; 
                     }
                     case 3:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,mul;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         mul=product(num1,num2);
                         printf(" Product  of %f * %f = %f \n",num1 , num2, mul);
                         break; 
                     }
                     case 4:
                     {
                         printf("Enter two numbers \n");
                         float num1,num2,quo;
                         scanf("%f",&num1);
                         scanf("%f",&num2);
                         if(num2==0)
                         {
                              printf("Division by zero is undefined \n"); 
                              break;
                         }
                         quo=div(num1,num2); 
                         printf(" Quotient  of %f / %f = %f \n",num1 , num2, quo);
                         break; 
                     }
                    case 5: 
                     {
                         printf("Enter number \n");
                         float num1,sq;
                         scanf("%f",&num1);
                         sq=sqr(num1); 
                         printf(" Square of %f  = %f \n",num1 ,sq);
                         break; 
                     }

                    default:
                    {
                      printf("The number you entered is out of the list \n");
                    }
                }
          
             break;
          }  
        case 2:
        
          {
               printf("Functions in Memory Conversion\n");
                int tri;
                printf("Press \n 1 for Kilobytes to Megabytes \n 2 for Megabytes to Kilobytes \n 3 for Megabytes to Gigabytes \n 4 for Gigabytes to Megabytes \n");
                scanf("%d",&tri);

                    switch (tri)
                    {
                         case 1:
                         {
                              float kb,mb;
                              printf("Enter Kilobytes ");
                              scanf("%f",&kb);
                              mb=k_m(kb); 
                              printf("%f Kilobytes = %f Megabytes \n",kb,mb);
                              break;
                         }
                         case 2:
                         {
                              float mb,kb;
                              printf("Enter Megabytes ");
                              scanf("%f",&mb);
                              kb=m_k(mb); 
                              printf("%f Megabytes = %f Kilobytes \n",mb,kb);
                              break;
                         }
                         case 3:
                         {
                              float mb,gb;
                              printf("Enter Megabytes ");
                              scanf("%f",&mb);
                              gb=m_g(mb); 
                              printf("%f Megabytes = %f Gigabytes \n",mb,gb);
                              break;
                         }
                         case 4:
                         {
                              float gb,mb;
                              printf("Enter Gigabytes ");
                              scanf("%f",&gb);
                              mb=g_m(gb); 
                              printf("%f Gigabytes = %f Megabytes \n",gb,mb);
                              break;
                         }
                         
                    default:
                         {             
                         printf("The number you entered is out of the list \n");
                         }
                    
                    }
           break;
          
          }  
                    
                    
        case 3:
          {
               printf("Functions in Currency Conversion\n");
                int a;
                printf("Press\n 1 for Rupees to Dollar\n 2 for Dollar to Rupees \n");
                printf(" 3 for Rupees to Euro \n 4 for Euro to Rupees \n");
                scanf("%d",&a);

                    switch(a)
                    {
                         case 1:
                         {
                              float rupee, dolar;
                              printf("Enter rupess \n");
                              scanf("%f",&rupe);
                              dolar=r_d(rupee); 
                              printf(" %f Rupees  = %f Dollars \n",rupee,dolar);
                              break;
                         }
                         
                         case 2:
                         {
                              float dolar, rupee;
                              printf("Enter Dollars \n");
                              scanf("%f",&dolar);
                              rupee=d_r(dolar); 
                              printf(" %f Dollars  = %f Rupees \n",dolar,rupee);
                              break;
                         }
                         case 3:
                         {
                              float rupee, euro;
                              printf("Enter Rupess \n");
                              scanf("%f",&rupee);
                              euro=r_e(rupee); 
                              printf(" %f Rupees  = %f Euro \n",rupee,euro);
                              break;
                         }
                         
                         case 4:
                         {
                              float euro, rupee;
                              printf("Enter Euro \n");
                              scanf("%f",&euro);
                              rupee=e_r(euro); 
                              printf(" %f Euro  = %f Rupees \n",euro,rupe);
                              break;
                         }
                    default:
                         {             
                         printf("Number is out of the list \n");
                         }
                         
                    }

           break;     
           }  
        case 4:

          {
               printf("Functions in Unit Conversion\n");
                int a;
                printf("Press \n 1 for Centimeters to Meters \n");
                printf(" 2 for Meters to Cenitimeters \n 3 for Meters to Kilometers \n 4 for Kilometers to Meters \n ");
                scanf("%d",&a);

                    switch(a)
                    {
                         case 1:
                         {
                              float cm,m;
                              printf("Enter Centimeters \n");
                              scanf("%f",&cm);
                              m=cm_m(cm); // cm_m function is called
                              printf("%f Centimeters = %f Meters \n",cm,m);
                              break;
                         }
                         case 2:
                         {
                              float m,cm;
                              printf("Enter Meters \n");
                              scanf("%f",&m);
                              cm=m_cm(m); 
                              printf("%f Meters = %f Centimeters \n",m,cm);
                              break;
                         }
                         case 3:
                         {
                              float m,km;
                              printf("Enter Meter \n");
                              scanf("%f",&m);
                              km=m_km(m); 
                              printf("%f Meter = %f Kilometer \n",m,km);                        
                              break;
                         }
                         case 4:
                         {
                              float km, m;
                              printf("Enter Kiloeter \n");
                              scanf("%f",&km);
                              m=km_m(km); 
                              printf("%f Kiloeter = %f Meter \n",km,m);
                              break;
                         }
                    default:
                         {             
                         printf("The number you entered is out of the list \n");
                         }
                         break;   
               }
          } 
          break;

      default:
          {             
          printf("The number you entered is out of the list \n");
          }     
    }
 return 0;
}
