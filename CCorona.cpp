/*
Runny nose
Sore throat
Cough
Fever
Difficulty breathing (severe cases)
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("A Simple Corona Predictor\nProgrammer: Sihab Sahariar\n\n");
    printf("We will ask you some question.If the answer is yes then press 1 otherwise 0.\nAre you ready to go?\n");
    char input[30];
    gets(input);
    printf("\n");
    //Program
    printf("Do you have Runny Nose(Nak betha)?\n");
    scanf("%d",&a);
    printf("Do you have Sore throat(Gola betha)?\n");
    scanf("%d",&b);
    printf("Do you have cough(Kashi)?\n");
    scanf("%d",&c);
    printf("Do you have Fever(jor)?\n");
    scanf("%d",&d);
    printf("Do you have Difficulty while breathing?(Shahkoshto)\n");
    scanf("%d",&e);
    if(a>=0&&a<=1 &&b>=0&&b<=1&& c>=0&&c<=1&&d>=0&&d<=1&&e>=0&&e<=1)
    {
        if(e==1)
        e=3;

    int sum=a+b+c+d+e;
    printf("\n");
    if(sum>=5)
        printf("It's serious!!!\nPlease keep distance from people and goto hospital.\n");
    else if(sum>=4)
        printf("Please goto hospital and checkup.\n");
    else
        printf("I don't think you have any major problem.You may have normal flu.Take medicine and take proper rest\n");
    }
    else{
        printf("Please Restart the software.You entered wrong inputs.\n");
    }
    printf("\n");
    printf("Thank You For Using This Software.I'm not taking any responsibility for anything.It's based on some common symptoms\n");
    printf("Say Tata\n->");
    char i[30];
    scanf("%s",&i);
    return 0;
}
