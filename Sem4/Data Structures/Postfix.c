#include<stdio.h>
#include<string.h>
int getPrecedence(char,int);
void printCstack(char*,int);
int isvar(char);
main(){
        char arr[100];
        int i;
        printf("Enter an equation in infix expression: ");
        for(i=0;i<100;i++){
            arr[i]='\0';
        }
        x: scanf("%s",arr);
        for(i=0;i<100;i++){
            if(arr[i]=='\0'){
                if(i>0&&i<99&&arr[i-1]!=')'){
                    arr[i]=')';
                    arr[i+1]='\0';
                }
                break;
            }
        }
        //printf("%d",i);
        char stack[i],postfix[100];
        //stack[0]='\0';
        int j;
        for(j=0;j<100;j++){
            stack[j]='\0';
            postfix[j]='\0';
        }
        int pos=-1,rank=0,k=-1;
        for(j=0;j<i;j++){
            while(getPrecedence(arr[j],0)<getPrecedence(stack[pos],1)){
                postfix[++k]=stack[pos--];

                printpostfix(postfix);
                printCstack(stack,pos);
                printf("\n");
            }
            if(getPrecedence(arr[j],0)!=getPrecedence(stack[pos],1)){
                stack[++pos]=arr[j];

                printpostfix(postfix);
                printCstack(stack,pos);
                printf("\n");
            }
            else
                pos--;

                printpostfix(postfix);
                printCstack(stack,pos);
                printf("\n");


        }
        int q;
        for(q=0;q<strlen(postfix);q++)
        {
            if(isvar(postfix[q]))
            {
                rank++;
            }
            else
            {
                rank--;
            }
        }
        if(rank!=1)
        {
                printf("\n Invalid!");
        }
        printf("%d",rank);

        //printf("%s\n",postfix);
        //printCstack(postfix,strlen(postfix));

}
int getPrecedence(char c,int a){
    if(a==0){
        if(c=='+'||c=='-')
            return 1;
        else if(c=='*'||c=='/')
            return 3;
        else if((c>='a'&&c<='z')||(c>='A'&&c<='B'))
            return 7;
        else if(c=='(')
            return 9;
        else if(c==')')
            return 0;
        else
            return -2;
    }
    else{
        if(c=='+'||c=='-')
            return 2;
        else if(c=='*'||c=='/')
            return 4;
        else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            return 8;
        else if(c=='(')
            return 0;
        else if(c==')')
            return -1;
        else
            return -2;
    }
}
void printCstack(char stack[],int pos)
{
    int i=0;
    printf("\t \t \t \t \t");
    for(i=0;i<pos;i++)
    {
        printf("%c",stack[i]);
    }
}

void printpostfix(char postfix[])
{
    int i;
    //printf("\n");
     for(i=0;i<strlen(postfix);i++)
    {
        printf("%c",postfix[i]);
    }
}
int isvar(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        return 1;
    }
    else{return 0;}

}

