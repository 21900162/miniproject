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
