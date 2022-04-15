#include<stdio.h>
#include<string.h>

typedef struct product{
 char name [100];//제품명
 char info[100];//설명
 char weight[20];//중량
 int price;//가격
 int delivery;//배송방법
}Product;

int createPr(Product* m);//제품 추가
void readPr(Product m);//제품 하나 출력함수
void updatePr(Product* m);//제품 수정함수
void deletePr(Product * m);//제품 삭제함수
