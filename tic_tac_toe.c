#include<stdio.h>
#include<stdlib.h>
char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
char simbol,play1,play2,cwin;
int flag=-1,i,p1,p2,j=0;
void gamebord();
void choice(char,int);
int win();
int main()
{
    char y='y';
    while(y=='y'|| y=='Y')
    {
        printf("\n\t\t\t--------------------TIC TAC TOE--------------------\n\n");
        printf("\t\t\tPlayer 1 choose a simbol (X/O) : ");
        scanf("%s",&simbol);
        if(simbol=='X' || simbol=='x')
        {
            play1='X';
            play2='O';
        }
        else
        {
            play1='O';
            play2='X';
        }
        do
        {
            printf("\n\t\t\tPlayer 1 (%c) -- Player 2 (%c)\n\n",play1,play2);
            gamebord();
            printf("\n\t\t\tPlayer 1 choose a number from game boord :");
            scanf("%d",&p1);
            printf("\n");
            cwin=play1;
            choice(play1,p1);
            i=win();
            gamebord();
            if(i==1 || i==0)
                break;
            printf("\n\t\t\tPlayer 2 choose a number from game boord :");
            scanf("%d",&p2);
            cwin=play2;
            choice(play2,p2);
            i=win();
        }while(i==-1);

        if(i==1)
        {
            printf("\n");
            if(cwin==play1)
            {
                printf("\n\t\t\tPlayer 1 is the winer\n\n");
                j++;
                gamebord();
            }
            else
            {
                printf("\n\t\t\tPlayer 2 is the winer\n\n");
                j++;
                gamebord();
            }
        }
        else
        {
            printf("\n\t\t\tDraw Match\n");
            gamebord();
        }
        printf("\n\n\n\t\t\t\tDO YOU WANT TO CONTINUE\n");
        printf("\n\t\t\t\tPRESS [Y] FOR YES\n");
        printf("\n\t\t\t\tPRESS [N] FOR NO\n");
        printf("\n\t\t\t\tPLEASE ENTER YOUR CHOICE(Y/N) : ");
		scanf("%s",&y);
    }
}
void gamebord()
{
    printf("\t\t\t\t    |     |     \n");
    printf("\t\t\t\t %c  |  %c  |  %c  \n",arr[1],arr[2],arr[3]);
    printf("\t\t\t\t----|-----|-----\n");
    printf("\t\t\t\t %c  |  %c  |  %c  \n",arr[4],arr[5],arr[6]);
    printf("\t\t\t\t----|-----|-----\n");
    printf("\t\t\t\t %c  |  %c  |  %c  \n",arr[7],arr[8],arr[9]);
    printf("\t\t\t\t    |     |     \n");
}
void choice(char pos,int choose)
{
    if(choose==1 &&arr[1]=='1')
        arr[1]=pos;
    else if(choose==2 && arr[2]=='2')
        arr[2]=pos;    
    else if(choose==3 && arr[3]=='3')
        arr[3]=pos;
    else if(choose== 4 && arr[4]=='4')
        arr[4]=pos;
    else if(choose==5 && arr[5]=='5')
        arr[5]=pos;
    else if(choose==6 && arr[6]=='6')
        arr[6]=pos;
    else if(choose==7 && arr[7]=='7')
        arr[7]=pos;
    else if(choose==8 && arr[8]=='8')
        arr[8]=pos;         
    else if(choose==9 && arr[9]=='9')
        arr[9]=pos;
    else
        printf("\n\t\t\tWrong Entey......\n");                             
}

int win()
{
    if(arr[1]==arr[2] && arr[2]==arr[3])
    {
        return (1);
    }    
    else if(arr[4]==arr[5] && arr[5]==arr[6])            //horizontal check  (=)
    {
        return (1);
    }
    else if(arr[7]==arr[8] && arr[8]==arr[9])
    {
        return (1);
    }

    else if(arr[1]==arr[4] && arr[4]==arr[7])
    {
        return (1);
    }
    else if(arr[2]==arr[5] && arr[5]==arr[8])            //vartical check  (|||)
    {
        return (1);
    }
    else if(arr[3]==arr[6] && arr[6]==arr[9])
    {
        return (1);
    }

    else if(arr[1]==arr[5] && arr[5]==arr[9])
    {
        return (1);
    }
    else if(arr[3]==arr[5] && arr[5]==arr[7])            //cross check   (x)    
    {
        return (1);
    }
    else if(arr[1]!='1' && arr[2]!='2' && arr[3]!='3' && arr[4]!='4' && arr[5]!='5' && arr[6]!='6' && arr[7]!='7' && arr[8]!='8' && arr[9]!='9')
    {
        return (0);
    }
    else
        return (-1);                                      
}
