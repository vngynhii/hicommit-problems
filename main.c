#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%d",&dtb,&drl);
  if (dtb>=9 && drl<=9.0){
  printf("HOC_BONG_XUAT_SAC");
  else if (8.0<=dtb<9.0 && drl 8.0<=dtb<9.0){
  printf("HOC_BONG_GIOI");
  } else if (7.0<=dtb<=8.0){
  printf("HOC_BONG_KHA");
  }
} return 0;
}