#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void print();
void full();
void acheck();
void reset();
void check();


int turn=1,area[9];
char game[3][3];
char ply1[20],ply2[20];
char cross='X',zero='O',dash='-';

int main()
{
    int i,j;

    int temp;
    system("color 0a");
    printf("Enter The First Player Name:");
    gets(ply1);
    printf("\nEnter The Second Player Name:");
    gets(ply2);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            game[i][j]=dash;
        }
    }
    for(i=0;i<9;i++){
        area[i]=0;
    }

    while(1){
        print();
        printf("\n\t\t\tEnter Your Move:");
        scanf("%d",&temp);
        if(turn==1){
            if(temp<=3){
                temp--;
                if(game[0][temp]=='-'){
                    game[0][temp] = cross;
                    print();
                    acheck();
                    check();
                }else{
                    full();
                    continue;
                }
            }else if(temp<=6){
                temp-=4;
                if(game[1][temp]=='-'){
                    game[1][temp] = cross;
                    print();
                    acheck();
                    check();
                }else{
                    full();
                    continue;
                }
            }else if(temp<=9){
                temp-=7;
                if(game[2][temp]=='-'){
                    game[2][temp] = cross;
                    print();
                    acheck();
                    check();
                }else{
                    full();
                    continue;
                }
            }else{

                printf("\n\t\t\tInvalid Move...!!!!!");
                getch();
                continue;
            }
            turn=2;
        }else{
            if(temp<=3){
                temp--;
                if(game[0][temp]=='-'){
                    game[0][temp] = zero;
                    print();
                    acheck();
                    check();
                }else{
                    full();
                    continue;
                }
            }else if(temp<=6){
                temp-=4;
                if(game[1][temp]=='-'){
                    game[1][temp] = zero;
                    print();
                    acheck();
                    check();
                }else{
                    full();
                    continue;
                }
            }else if(temp<=9){
                temp-=7;
                if(game[2][temp]=='-'){
                    game[2][temp] = zero;
                    print();
                    acheck();
                    check();
                }else{
                    full();
                    continue;
                }
            }else{
                printf("\n\t\t\tInvalid Move...!!!!!");
                getch();
                continue;
            }
            turn=1;
        }

    }

    return 0;
}

void full(){
    printf("\n\t\t\tIt's Already Used....!!!!");
    getch();
}




void print(){
    int i,j;
    system("cls");
    for(i=0;i<3;i++){
            printf("\t\t\t");
        for(j=0;j<3;j++){
            printf(" %c   ",game[i][j]);
        }
        printf("\n\n\n");
    }
}


void acheck(){
    if(game[0][0]!='-'&&game[0][1]!='-'&&game[0][2]!='-'&&game[1][0]!='-'&&game[1][1]!='-'&&game[1][2]!='-'&&game[2][0]!='-'&&game[2][1]!='-'&&game[2][2]!='-'){
        printf("\n\t\t\t Match Draw...!!!");
        getch();
        reset();
    }
}

void reset(){
    int j,i;
    char yo;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            game[i][j]=dash;
        }
    }
    turn=1;
    printf("\n\t\tDo You Want To Play Again?:");
    fflush(stdin);
    scanf("%c",&yo);
    if(yo=='y'||yo=='Y'){
    }else{
        exit(0);
    }
}

void check(){
    if(game[0][0]==cross&&game[0][1]==cross&&game[0][2]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[1][0]==cross&&game[1][1]==cross&&game[1][2]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[2][0]==cross&&game[2][1]==cross&&game[2][2]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[0][0]==cross&&game[1][0]==cross&&game[2][0]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[0][1]==cross&&game[1][1]==cross&&game[2][1]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[0][2]==cross&&game[1][2]==cross&&game[2][2]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[0][0]==cross&&game[1][1]==cross&&game[2][2]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[0][2]==cross&&game[1][1]==cross&&game[2][0]==cross){
        printf("\n\t\t*** %s Wins... ***",ply1);
        reset();
    }else if(game[0][0]==zero&&game[0][1]==zero&&game[0][2]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[1][0]==zero&&game[1][1]==zero&&game[1][2]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[2][0]==zero&&game[2][1]==zero&&game[2][2]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[0][0]==zero&&game[1][0]==zero&&game[2][0]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[0][1]==zero&&game[1][1]==zero&&game[2][1]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[0][2]==zero&&game[1][2]==zero&&game[2][2]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[0][0]==zero&&game[1][1]==zero&&game[2][2]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }else if(game[0][2]==zero&&game[1][1]==zero&&game[2][0]==zero){
        printf("\n\t\t*** %s Wins... ***",ply2);
        reset();
    }
}

