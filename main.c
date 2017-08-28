#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
#include <io.h>
#include <ctype.h>
#include <afxres.h>

#ifdef __STDC_NO_VLA__
    printf("Variable length arrays are not support./n");
    exit(1);
#endif

int main() {
//    printf("Hello, World!\n");
//    int a = 32;
//    printf("%d\n", sizeof(a));
//    for (int i = 0; i < 4; i ++) {
//        char b = ((char *) &a)[i];
//        printf("%u\n", b);
//    }
//    printf("the float size is %u\n", sizeof(float));
//
//    unsigned int m = 1, n = 3, k = n>>1;

//    printf("%u", k);
//    int c = 0;
//    while(c <= 127)
//    {
//        if(isgraph(c))
//        {
//            printf("%-5d%-5c", c, c);
//        }
//        c++;
//    }

//    printf("Size of char is %u\n", sizeof(char));
//    printf("Size of _Bool is %u\n", sizeof(_Bool));
//    printf("Size of int is %u\n", sizeof(int));
//    printf("Size of unsigned int is %u\n", sizeof(unsigned int));
//    printf("Size of long is %u\n", sizeof(long));
//    printf("Size of long long is %u\n", sizeof(long long));
//    printf("Size of float is %u\n", sizeof(float));
//    printf("Size of double is %u\n", sizeof(double));
//    printf("Size of long double is %u\n", sizeof(long double));

//    int a = 4;
//    int b = a;
//    int c[] = {1, 2, 3};
//    int d[3];
//    printf("Variables a address is %p\n", &c[0]);
//    printf("Variables b address is %p\n", &c[2]);
//    printf("Array c address is %p\n", &c);
//    printf("Array d address is %p\n", &d);
//    char str1[50] = "Hello world";
//    char str2[] = "Hello World";
//    if(strcat_s(str1, sizeof(str1), str2))
//    {
//        printf("error");
//    }
//    else
//        printf("The concat string is %s\n", str1);
//    char myString[] = "this is for test";
//    char myCopyString[20];
//    printf("copied string is: '%s', length is: %d\n", myCopyString, sizeof(myCopyString));
//    strcpy(myCopyString, myString);
//    printf("my string length is: %d, copied string length is: %d\n", sizeof(myString), sizeof(myCopyString));
//    printf("The copy string is: '%s'\n", myCopyString);
//    char fragment[] = "test";
//    char *p = strstr(myString, fragment);
//    int index = p - myString;
//    printf("The 'Test' substring is in original string at index: %d\n", index);

//    struct {
//        unsigned int widthValidated : 8;
//        unsigned int heightValidated : 8;
//        int : 16;
//        double validated;
//    } status;
//    status.widthValidated = 1;
//    status.heightValidated = 0;
//    status.validated = 2.0f;
//    printf("width is validated? %d\n", status.widthValidated);
//    printf("height is validated? %d\n", status.heightValidated);
//    printf("how many items are validated? %f\n", status.validated);
//    printf("status size is: %u\n", sizeof(status));

//    char str[100];
//    int *p;
//    int count = 3;
//    while (count > 0) {
//        printf("please input something:");
//        scanf("%s %d", str, p);
//        printf("\ninput is: %s %d\n", str, *p);
//        count--;
//    }

//    char curDir[80];
//    getcwd(curDir,sizeof(curDir));
//    printf("current working directory: %s\n", curDir);
//    FILE *myFile = NULL;
//    char *fileDir = "..\\myFile.txt";
//    if (access(fileDir, 0) < 0) {
//        myFile = fopen(fileDir, "w");
//        fclose(myFile);
//    }
//    myFile = fopen(fileDir, "r+");
//    char ch = fprintf(myFile, "This is testing for fprintf...\ntest:");
//    if (ch == EOF) {
//        printf("fprintf failed.");
//    }
//    fseek(myFile, 1, SEEK_CUR);
//    fputs("This is testing for fputs...\n", myFile);
//    fclose(myFile);

    FILE *myFile = NULL;
    myFile = fopen("..//myFile.txt", "r+");
    char *buff;
    fscanf(myFile, "%s", buff);
    printf("1 : %s\n", buff);
    fgets(buff, 255, myFile);
    printf("2: %s\n", buff);
    fgets(buff, 255, myFile);
    printf("3: %s\n", buff);
    fclose(myFile);

    return 0;
}