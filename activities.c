#include <stdio.h>
#include<string.h>

int ascii(char c)
{
    printf("ascii of the character %c is %d",c,c);
    return c;
}
char maxOcur(char s[20])
{
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;j<strlen(s);j++)
        {
            if(s[i]>s[j])
            {
                char key = s[i];
                s[i] = s[j];
                s[j] = key;
            }
        }
    }
    int max = 0;
    char occur;
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;j<strlen(s);j++)
        {
            int temp = 0;
            if(s[i]==s[j]){
                j++;
                temp++;
                if(temp>max){max = temp;occur = s[i];}
            }
        }
    }
    if(occur == ' ')
        occur = '#';
    printf("The Max occured character is (Note '#' is assigned for whitespace) : %c",occur);
    return occur;
}
int wordcount(char s[30])
{
    if(s[0]=='\n') return 0;
    
    int count = 0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            count++;
        }
    }
    printf("Total words in given sentence are : %d",count + 1);
    return count+1;
}
void game(int arr[100])
{
    int max,min;
    char ch[30];
    while(1)
    {
        scanf("%s",&ch);
        if(ch=="done"){break;}
        for(int i=0;i<100;i++){
            if(atoi(ch)>max){max=atoi(ch);}
            if(atoi(ch)<min){min=atoi(ch);}
            arr[i] = atoi(ch);
        }
    }
    printf("The smallest is %d the largest is %d\n",min,max);
}
int main()
{
    //1 
    printf("Enter the character of your choice : ");
    char ch;
    scanf("%c",&ch);
    ascii(ch);
    
    //2 
    printf("Enter your Desired Sentence : ");
    char s[30];
    gets(s);
    maxOcur(s);
    
    //3
    printf("Enter your Desired Sentence : ");
    char s1[30];
    gets(s1);
    wordcount(s1);
    
    //4
    int arr[100];
    game(arr);
    
    return 0;
}
