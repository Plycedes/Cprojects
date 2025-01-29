#include<stdio.h>
#include<conio.h>
#include<dos.h>


int main(){
    clrscr();
    int i;   
    textcolor(RED);
    textbackground(WHITE);
    for(i = 1; i <= 20; i++){
        cprint("Some Text");
        delay(200);
    }
    getch();
    return 0;
}