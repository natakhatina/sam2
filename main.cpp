#include <iostream>

void print1(int i){
    if ((i+1)%5!=0)
        printf("%2c", i);
    else printf("%2c\n", i);
}
void print2(int i){
    if ((i%2)==0)
        printf("%2c", i);
}



void fun(int m){
    switch (m) {
        case 1:
            for (int i=50;i<61;i++)
            printf ("%2c",i);
            break;

        case 2:
            for (int i=50; i<61;i++) {
                printf("%c\n", i);
                for (int k=0; k<(i-50);k++)
                printf("%c", 32);
            }
                break;
        case 3:
            for (int i=50;i>24;i--)
                printf ("%2c\n",i);
            break;
    }
}


int main() {
    for (int i=0; i<256; i++)
     print1(i);
    for (int i=0; i<256; i++)
        print2(i);

    int m;
    printf("\nenter m..");
    scanf ("%d", &m);
    fun(m);

    return 0;
}











