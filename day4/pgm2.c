struct Fiction_t
{
    char title[250];
    char author[125];
    float price;
};
typedef struct Fiction_t Fiction;

struct NonFiction_t
{
    char title[250];
    char author[500];
    float price;
};

typedef struct NonFiction_t Fiction;

union Book_t
{
    Fiction fuction;
    NonFiction nonFiction;
};
typedef union BookType_t BookType;

struct Book_t
{
    int typr;
    BookType booktype;
};

typedef struct Book_t Book;
Book books[1000];
int bookCount;
voif addBooks():
void displayBooks();

int main()
{
    assBooks();
    displayBooks();
    return 0;
}

void addBooks()
{
    printf("enter number of books:");
    scanf)"%d",&bookCount);
    for(int i=0;i<bookCount;i++)
    {
        printf("type of book(1-Fiction,2-NonFiction):");
        scanf("%d",&books[i].typr);
        switch(books[i].type)
        {
            case 1:{
                printf("enter Fiction Book details(title,author,price):");
                scanf("%s%s%f",book[i].booktype,fiction.title,book[i].booktype.fiction.author,&book[i].booktype.fiction.price);)
        }break;
        case 2:{
             printf("enter NonFiction Book details(title,subject,price):");
                scanf("%s%s%f",book[i].booktype,nonfiction.title,book[i].booktype.nonfiction.author,&book[i].booktype.nonfiction.price);)
            }break;
        }
    }
}

voif displayBooks()
{
    for(int i=0;i<bookCount;i++)
    {
        switch(books[i].type)
        {
            case 1:{
                printf("Fiction Book:%s, author:%s, price:$%.2f\n",books[i].booktype.fiction.title,books[i].booktype.fiction.author,books[i].booktype.fiction.price);
            }break;
            case 2:{
                printf("NonFiction Book:%s,subject:%s,price$%.2f\n",book[i].booktype.nonfiction.title,books[i].booktype.nonfiction.subject,books[i].booktype)
            }
        }
    }
}
