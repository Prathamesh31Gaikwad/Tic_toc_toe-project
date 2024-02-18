#include<stdio.h>

int main(void)
{
    int arr[10] = {0};
    int i ;
    int n  ;
    int c = 0;
    int d = 0;

    puts("  start of the game");
    puts("  Number for player one '1' and palyer two '2'");
    puts("  Player with number '1' will start the game");
    puts("  Number assign to the blocks            ");
    puts(" 1 | 2 | 3");
    puts("-----------");
    puts(" 4 | 5 | 6");
    puts("-----------");
    puts(" 7 | 8 | 9");
    puts("                          ");
    while (c < 9)
    {
    printf("Enter the block : ");
    scanf("%d",&i);
    printf("enter the number : ");
    scanf("%d", &arr[i]);
    if(!(arr[i] == 1 || arr[i] == 2))
    {
        puts("ERROR.......enter the value 1 or 2 ");
        break;
    }
    printf(" %d | %d | %d\n",arr[1],arr[2],arr[3]);
    printf("------------\n");
    printf(" %d | %d | %d\n",arr[4],arr[5],arr[6]);
    printf("------------\n");
    printf(" %d | %d | %d\n",arr[7],arr[8],arr[9]);

    if((((arr[1] == 1) && (arr[2] == 1)) && ((arr[2] == 1) && (arr[3] == 1))) || (((arr[1] == 2) && (arr[2] == 2)) && ((arr[2] == 2) && (arr[3] == 2))))
    {
        printf("Player%d Win\n",arr[1]);
        break;
    }
    else if((((arr[4] == 1) && (arr[5] == 1)) && ((arr[5] == 1) && (arr[6] == 1))) || (((arr[4] == 2) && (arr[5] == 2)) && ((arr[5] == 2) && (arr[6] == 2))))
    {
        printf("Player%d Win\n",arr[4]);
        break;
    }
    else if((((arr[7] == 1) && (arr[8] == 1)) && ((arr[8] == 1) && (arr[9] == 1))) || (((arr[7] == 2) && (arr[8] == 2)) && ((arr[8] == 2) && (arr[9] == 2))))
    {
        printf("Player%d Win\n",arr[7]);
        break;
    }
    else if((((arr[1] == 1) && (arr[4] == 1)) && ((arr[4] == 1) && (arr[7] == 1))) || (((arr[1] == 2) && (arr[4] == 2)) && ((arr[4] == 2) && (arr[7] == 2))))
    {
        printf("Player%d Win\n",arr[1]);
        break;
    }
    else if((((arr[2] == 1) && (arr[5] == 1)) && ((arr[5] == 1) && (arr[8] == 1))) || (((arr[2] == 2) && (arr[5] == 2)) && ((arr[5] == 2) && (arr[8] == 2))))
    {
        printf("Player%d Win\n",arr[2]);
        break;
    }
    else if((((arr[3] == 1) && (arr[6] == 1)) && ((arr[6] == 1) && (arr[9] == 1))) || (((arr[3] == 2) && (arr[6] == 2)) && ((arr[6] == 2) && (arr[9] == 2))))
    {
        printf("Player%d Win\n",arr[3]);
        break;
    }
    else if((((arr[1] == 1) && (arr[5] == 1)) && ((arr[5] == 1) && (arr[9] == 1))) || (((arr[1] == 2) && (arr[5] == 2)) && ((arr[5] == 2) && (arr[9] == 2))))
    {
        printf("Player%d Win\n",arr[1]);
        break;
    }
    else if((((arr[3] == 1) && (arr[5] == 1)) && ((arr[5] == 1) && (arr[7] == 1))) || (((arr[3] == 2) && (arr[5] == 2)) && ((arr[5] == 2) && (arr[7] == 2))))
    {
        printf("Player%d Win\n",arr[3]);
        break;
    }
    
    c = c + 1;
    }
    
    return (0);

}