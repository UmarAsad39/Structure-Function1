#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    float cgpa;
    char name[40];
    }s[5];

void writefile()
{
    FILE *ffile ;
    ffile = fopen ("student.txt", "w") ;
    if (ffile == NULL)
    {
        printf("File could not be opened") ;
        exit(1) ;
        }
    char str[100] ;
    fgets(str) ;

    fprintf(ffile, "%s", str) ;
    fclose(ffile) ;

    }
void readfile()
{
    FILE *ffile;
    ffile=fopen("student.txt","r");
    if(ffile==NULL)
    {
        printf("No such file exists.");
        exit(0);
    }
    char str2;
    str2=fgetc(ffile);
    while(str2!=EOF)
    {
        printf("%c",str2);
        str2= fgetc(ffile);
    }
    fclose(ffile);
    printf("\n\n");
}

void main()
{
    int i, n;

    printf("Enter the total number of students: ");
    scanf("%d",&n);

    printf("Enter information of students:\n\n");


    for (i=1;i<=n;i++)
    {
        printf("Enter Student %d's information:\n",i);
        printf("Enter Roll number: ");
        scanf("%d",&s[i].roll);
        printf("Enter CGPA: ");
        scanf("%f",&s[i].cgpa);
        printf("Enter Student Name: ");
        scanf("%s",s[i].name);
        printf("\n");
    }
    printf("Displaying Information:\n\n");

    for (i=1;i<=n;i++)
    {
        printf("Student %d's information:\n\n",i);
        printf("Roll number: %d\n",s[i].roll);
        printf("CGPA: %.1f\n",s[i].cgpa);
        printf("Student Name: %s\n",s[i].name);
        printf("\n");
    }

    writefile();
    readfile();
}



