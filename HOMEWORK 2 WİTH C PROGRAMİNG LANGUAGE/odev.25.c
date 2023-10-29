#include <stdio.h>
int main() {
   int i, bosluk, satir, k = 0, count = 0, count1 = 0;
   printf("satir belirleyiniz: ");
   scanf("%d", &satir);
   for (i = 1; i <= satir; ++i) {
      for (bosluk = 1; bosluk <= satir - i; ++bosluk) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= satir - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}
