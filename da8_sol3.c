struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};
void update_price(struct book *sample)
{
    printf("\nEnter the title : ");
    char t[10];
    scanf("%s",t);
    if(strcmp(t,sample->title)!=0){printf("\nWrong title");return;}
    
    int new_price;
    printf("\nEnter the new price : ");
    scanf("%d",&new_price);
    sample->price = new_price;
    if(sample->price==new_price){
        printf("\nError occured\n");
        return;
    }
    return;
}
void newData(struct book* sample)
{
     printf("\nEnter the title, author name, price and number of pages in order\n");
     scanf("%s%s%f%d",sample->title,sample->author,&sample->price,&sample->no_pages);
     printf("\nData added\n");
}
void showData(struct book* sample) 
{
    printf("\nThe book details are\n");
    printf("\n%s\t%s\t%f\t%d",sample->title,sample->author,sample->price,sample->no_pages);
}



int main()
{
    struct book bk;
   struct book *sptr=&bk;
   newData(sptr);
   update_price(sptr);
   showData(sptr);
    return 0;
}
