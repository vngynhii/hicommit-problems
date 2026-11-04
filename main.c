#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%f%f",&dtb,&drl);
  if (dtb>=9 && drl<=9.0)
{
  printf("HOC_BONG_XUAT_SAC");
  } 
  else if (8.0<=dtb<9.0 && 80<=dtl<90) 
{
  printf("HOC_BONG_GIOI");
  } else if (7.0<=dtb<=8.0 && 70<=drl<80)
{
  printf("HOC_BONG_KHA");
}else (dtb<=7.0&& drl<70)
{
  printf("KHONG_DAT");
  }
 return 0;
}
