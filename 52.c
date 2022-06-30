#include <stdio.h>
#include <conio.h>

int main()
{

    FILE *spfile;

    spfile = fopen("52.txt", "a");

    char arr[50] = "Abhishek Bansal";

    fputs(arr, spfile);

    return 0;
}