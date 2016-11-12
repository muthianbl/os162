/*
 * (c) 2016 Rahmat M. Samik-Ibrahim -- This is free software
 * REV01 Thu Sep 22 10:40:51 WIB 2016
 * REV00 Thu Sep 22 10:40:51 WIB 2016
 * START Tue Sep 20 17:00:52 WIB 2016
 */

#include <stdio.h>

/* Global Variables */
char   varchr0='a';
char   varchr1='b';
char   varchr2='c';
char   varchr3='d';
char*  ptrchr0=&varchr0;
char*  ptrchr1=&varchr1;
char*  ptrchr2=&varchr2;
char*  ptrchr3=&varchr3;
char** ptrptr0=&ptrchr0;
char** ptrptr1=&ptrchr1;
char** ptrptr2=&ptrchr2;
char** ptrptr3=&ptrchr3;

void main() {
   printf("=============================================================\n");
   printf("varchr0: value =  %2c, address = %p\n", varchr0, &varchr0);
   printf("varchr1: value =  %2c, address = %p\n", varchr1, &varchr1);
   printf("varchr2: value =  %2c, address = %p\n", varchr2, &varchr2);
   printf("varchr3: value =  %2c, address = %p\n", varchr3, &varchr3);
   printf("ptrchr0: points to %c, value   = %p,  address = %p\n", 
      *ptrchr0, ptrchr0, &ptrchr0);
   printf("ptrchr1: points to %c, value   = %p,  address = %p\n", 
      *ptrchr1, ptrchr1, &ptrchr1);
   printf("ptrchr2: points to %c, value   = %p,  address = %p\n", 
      *ptrchr2, ptrchr2, &ptrchr2);
   printf("ptrchr3: points to %c, value   = %p,  address = %p\n", 
      *ptrchr3, ptrchr3, &ptrchr3);
   printf("ptrptr0: points points to %c, points to %p, value = %p, address = %p\n", **ptrptr0, *ptrptr0, ptrptr0, &ptrptr0);
   printf("ptrptr1: points points to %c, points to %p, value = %p, address = %p\n", **ptrptr1, *ptrptr1, ptrptr1, &ptrptr1);
   printf("ptrptr2: points points to %c, points to %p, value = %p, address = %p\n", **ptrptr2, *ptrptr2, ptrptr2, &ptrptr2);
   printf("ptrptr2: points points to %c, points to %p, value = %p, address = %p\n", **ptrptr3, *ptrptr3, ptrptr3, &ptrptr3);
   printf("=============================================================\n");
}

