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
