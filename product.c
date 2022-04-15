#include "product.h"
#include <stdio.h>
#include <string.h>

int createPr(Product *m){
 getchar();
 printf("제품명: ");
 scanf("%[^\n]s", m->name);
 getchar();
 printf("제품 설명: ");
 scanf("%[^\n]s", m->info);
 printf("제품 가격: ");
 scanf("%d", &m->price);
 printf("판매 단위: ");
 getchar();
 scanf("%[^\n]s", m->weight);
 printf("배송 방법(1:새벽배송 /2.택배배송): ");
 scanf("%d", &m->delivery);
 printf("추가되었습니다!\n");
 return 1;
}

void readPr(Product m){
 printf("%s ", m.name);
 printf("%s\n", m.weight);
 printf("%s\n", m.info);
 printf("%d원\n", m.price);
 if(m.delivery == 1) printf("새벽배송\n");
 if(m.delivery == 2) printf("택배배송\n");
}

void updatePr(Product* m){
 getchar();
 printf("제품명: ");
 scanf("%[^\n]s", m->name);
 getchar();
 printf("제품 설명: ");
 scanf("%[^\n]s", m->info);
 printf("제품 가격: ");
 scanf("%d", &m->price);
 printf("판매 단위: ");
 getchar();
 scanf("%[^\n]s", m->weight);
 printf("배송 방법(1:새벽배송 /2.택배배송): ");
 getchar();
 scanf("%d", &m->delivery);
 printf("수정되었습니다!\n");
}


