#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWSIZE 4
#define COLSIZE 2

/* int main(void) {

  int sum = 0, midsum = 0, finalsum = 0;
  int score [][COLSIZE] = { 95, 85, 90, 88, 86, 90, 88, 78};

  printf("       중간      기말\n");
  printf("  ----------------------\n");

  for(int i = 0; i < ROWSIZE; i++) {
    for(int j = 0; j < COLSIZE; j++) {
      printf("%10d", score[i][j]);
      sum += score[i][j];

      if(j == 0) {
        midsum += score[i][j];
      } else {
        finalsum += score[i][j];
      }
    }
    printf("\n"); 
  }
  printf("  ----------------------\n");
  printf("평균: %6.2lf %10.2lf\n", (double) midsum / ROWSIZE, (double) finalsum / ROWSIZE
);
  printf("성적의 합은 %d이고, ", sum);
  printf("평균은 %.2lf입니다.\n", (double) sum / (ROWSIZE * COLSIZE));
  
  return 0;
} */