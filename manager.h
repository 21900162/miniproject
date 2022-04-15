#include <stdio.h>
#include <string.h>
#include "product.h"

int selectmenu();//메뉴고르기
void listPr(Product * m, int index);//제품 전체 출력함수
int selectPr(Product * m, int index);//제품 고르기 함수
int loadfile(Product * m);//파일 불러오기 함수
void savefile(Product * m, int index);//파일 저장함수
void searchName(Product * m, int index);//제품명 검색함수
void searchPrice(Product * m, int index);//가격 검색함수
