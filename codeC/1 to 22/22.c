#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c, delta, x1, x2;
   
   // Nhập 3 số thực a, b, c từ bàn phím
   printf("Nhap 3 so thuc a, b, c: ");
   scanf("%f%f%f", &a, &b, &c);
   
   // Tính delta
   delta = b*b - 4*a*c;
   
   // Xử lý các trường hợp của delta
   if(delta < 0) {
      printf("NO\n");
   }
   else if(delta == 0) {
      x1 = x2 = -b/(2*a);
      printf("x1 = x2 = %f\n", x1);
   }
   else {
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
      printf("x1 = %f\nx2 = %f\n", x1, x2);
   }
   
   return 0;
}
