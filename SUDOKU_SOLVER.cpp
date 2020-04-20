#include<stdio.h>
#include<conio.h>

char ara[9][9], sto[9][9];
void cpc()
{
	#ifndef io
	freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
}
int check(int x, int y)
{
    char target = ara[x][y], count = 0;

    for(int i=0; i<9; i++)
        if(ara[x][i] == target) count++;
    if(count == 2) return 0;

    count = 0;
    for(int i=0; i<9; i++)
        if(ara[i][y] == target) count++;
    if(count == 2) return 0;

    int a = x%3,  b = y%3;
    count = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(ara[x-a+i][y-b+j] == target) count++;
    if(count == 2) return 0;

    return 1;
}
main()
{
    printf("Ensure that front size is 16\nmenu > preferences > front size > 16\nmenu > restart\n\n");
    
    int g, c;

    FILE *f=fopen("/sdcard/card","r");
     
    fscanf(f,"%d", &g);

    fclose(f);

    c = g%95 + 33;
    
    f = fopen("/sdcard/card","w");

    fprintf(f, "%d", ++g);

	fclose(f);

    for (int i=0; i<111; i++) printf("%c",c);
    printf("\n\n\t   SUDOKU SOLVER\n\tCREATOR: ♞SIHAB SAHARIAR♞\n\n");
    for (int i=0; i<74; i++) printf("%c",c);
    
   
    	//cpc();
    //printf("SUDOKU SOLVER [V 1.0]\nCreator: SIHAB SAHARIAR\n");

    for(;;)
    {
        for (int i=0;  i < 37;  i++) printf("%c",c);
        printf("\n\nEnter your SUDOKU below. Enter '0' for blank cell.\n\n");

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++){

                ara[i][j] = getche();
                sto[i][j] = ara[i][j];
            }
            putchar('\n');
        }

        //printf("\n...........solving...........\n");
        printf("\nSolution:");

        for(int i=0; i<9; i++)
            for(int j=0; j<9;)
            {
                if(sto[i][j] == '0')
                {
                    for(ara[i][j]++; ara[i][j]<':'; ara[i][j]++)
                        if(check(i,j)) break;

                    if(ara[i][j] == ':')
                    {
                        ara[i][j] = '0';
                        do
                        {
                            if(j>0) j--;
                            else
                            {
                                i--;
                                j=8;
                            }
                        }
                        while(sto[i][j]-'0');
                        continue;
                    }
                }
                j++;
            }

        //printf("\nTask compleated.\n\nReasult:");

        for(int i=0; i<9; i++)
        {
            printf("\n----------------------------\n|");
            for(int j=0; j<9; j++)
                printf(" %c|",ara[i][j]);
        }
        printf("\n----------------------------\n");

        printf("\nContinue?  1)Yes  2)No\n\nInput: ");
        char con;
        con = getche();
        putchar('\n');

        while(con<'1' || con>'2')
        {
            printf("\nInvalid input! Try again.\n\nInput: ");
            con = getche();
            putchar('\n');
        }
        if(con == '2') break;
    }
}