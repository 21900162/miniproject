#include "manager.h"

int selectmenu(){
 int select =0;
 printf("\n***메뉴***\n");
 printf("1. 상품 리스트\n");
 printf("2. 상품 추가\n");
 printf("3. 상품 수정\n");
 printf("4. 상품 삭제\n");
 printf("5. 저장\n");
 printf("6. 이름 검색\n");
 printf("7. 가격 검색\n");
 printf("8. 판매단위 검색\n");
 printf("0. 종료\n");
 printf("원하는 메뉴는? ");
 scanf("%d", &select);
 return select;
}

void listPr(Product *m, int index){
 for(int i=0; i<index; i++){
 if(m[i].price == -1) continue;
 printf("\n%d번 \n",i+1);
 readPr(m[i]);
 }
}

int selectPr(Product * m, int index){
 int no=0;
 listPr(m, index);
 printf("________________\n");
 printf("번호는? ");
 scanf("%d", &no);
 return no;
}

