#include<stdio.h>
#include<string.h>
struct Library
{
  char books_name[100]; 
  char author_name[25];
  int piece;
};
int main()
{
    struct Library lib[100];

    strcpy(lib[0].books_name,"Bangla");
    strcpy(lib[0].author_name,"Amit Hasan");
    lib[0].piece=25;
    strcpy(lib[1].books_name,"English");
    strcpy(lib[1].author_name,"Kabir Khan");
    lib[1].piece=25;
    strcpy(lib[2].books_name,"Mathematices");
    strcpy(lib[2].author_name,"Stuart Carry");
    lib[2].piece=100;

    printf("-----------------------Welcome to HSTU Library---------------------");

    while(true)
    {
        printf("1.Show books in the library\n2.Return books to the library\n3.Borrow books from library ")
        printf("Choose your option");
        int choice;
        scanf("%d",&choice);
        switch (Choice)
        {
        case 1:
    printf("Books Name\t\t\tAuthor Name\t\t\tPiece\n")
    printf("---------------------------------------------------\n");
    for(int i=0;i<books_type;i++)
    {
        printf("%s\t\t\t%s\t\t\t\t%d,lib[i].books_name,lib[i].author_name,lib[i].piece")
        printf("\n");
    }
            break;
        
        case 2:
            printf("Enter books name to return\n");
            char books[50];
            int i;
        }
    }

    for(int i;i<5;i++)
    {
        printf("")
    }
    
}