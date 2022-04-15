#include <stdio.h>
#include <string.h>
#include "manager.h"

int main(){

#ifdef DEBUG
printf("=> DEBUGGING\n");
#endif

 int menu=1;
 Product p[20];
 int count ;
 int index ;
 count = loadfile(p);
 index = count;
 while(menu!=0){
 menu = selectmenu();
 if(menu == 0)
 break;
 else if(menu == 1){
 listPr(p, count);
 }
 else if(menu == 2){
 if(count >=20) continue;
 index +=createPr(&p[count++]);
 }
 else if(menu == 3){
 if(count == 0) continue;
 int no;
 no = selectPr(p,count);
 updatePr(&p[no-1]);
 }
 else if(menu == 4){
 if(count ==0) continue;
 int no;
 no = selectPr(p, count);
 deletePr(&p[no-1]);
 index --;

 }
 else if(menu == 5){
 if(count==0) continue;
 savefile(p,count);
 }
 else if(menu == 6){
 if(count==0) continue;
 searchName(p, count);
 }

 else if(menu == 7){
 if(count==0) continue;
 searchPrice(p, count);
 }
 else if(menu == 8){
 if(count==0) continue;
 searchWeight(p, count);
 }
 }
 return 0;

}
