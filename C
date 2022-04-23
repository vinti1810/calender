# LibraryManagement
#include<stdio.h>

#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
  char b[30];
  char a[30];
  int bp;
};
int main()
{
int n,i,amt=0;
printf("WELCOME TO LIBRARY\n");
printf("No. Of books in total: ");
scanf("%d",&n);
struct library l[n];
int ch,c=0;
char bk[30],bk1[30],bk2[30];
for(i=0;i<n;i++)
{
printf("Book no.: ");
scanf("%d",&l[i].bp);
printf("\nBook name: ");
scanf("%s",l[i].b);
printf("\nauthor name: ");
scanf("%s",l[i].a);
}

while(ch!=6)
{
printf("1.Add book\n");
printf("2.Delete book\n");
printf("3.List all the books\n");
printf("4.Search book\n");
printf("5.Issue Book\n");
printf("6.Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("ADD BOOK\n");
printf("Enter the book details\n");
c=n+1;
    printf("Book no.: ");
    scanf("%d",&l[c].bp);
    printf("Book name: ");
    scanf("%s",l[c].b);
    printf("author name: ");
    scanf("%s",l[c].a);
    n=c;
break;
case 2:
printf("DELETE BOOK\n");
printf("Enter the book you want to delete: ");
scanf("%s",bk);
for(i=0;i<n;i++)
{
    if(strcmp(bk,l[i].b)==0)
    {
    l[i]=l[i+1];
    n=n-1;
    }
}
break;
case 3:
printf("ALL BOOKS\n");
printf("All the books in library are:\n");
for(i=0;i<n;i++)
{
    printf("Book no.: ");
    printf("%d\n",l[i].bp);
    printf("Book name: ");
    printf("%s\n",l[i].b);
    printf("author name: ");
    printf("%s\n",l[i].a);
}
break;
case 4:
printf("SEARCH BOOK");
printf("Enter the book name to search: ");
scanf("%s",bk1);
for(i=0;i<n;i++)
{
    if(strcmp(bk1,l[i].b)==0)
    {
        printf("Book no.: ");
        printf("%d\n",l[i].bp);
        printf("Book name: ");
        printf("%s\n",l[i].b);
        printf("author name: ");
        printf("%s\n",l[i].a);
    }
}
break;
case 5:
printf("ISSUE BOOK\n");
printf("Enter the book name: ");
scanf("%s",bk2);
int d;
printf("Enter the number of days the book was taken: ");
scanf("%d",&d);
if(d>7)
{
    amt=(d-7)*2;
}
printf("Fine=Rs %d\n",amt);
break;
}
}
return 0;
}
