//1
#include<stdio.h>
#include<string.h>
struct bookstall{
    int book_id;
    char book_title[20];
    char author[20];
    float price;
};

//3
#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};

void read(struct book *);
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;     
}      
   
 void read(struct book* sample) 
{
     printf("Enter the title, author name, price and number of pages in order");
     scanf("%s%s%f%d",sample->title,sample->author,&sample->price,&sample->no_pages);
}

void print(struct book* sample) 
{
    printf("The book details are\n");
    printf("\n%s\t%s\t%f\t%d",sample->title,sample->author,sample->price,sample->no_pages); 
}
