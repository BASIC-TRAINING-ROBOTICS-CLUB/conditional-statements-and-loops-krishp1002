#include<stdio.h>
#include<string.h>
struct id{
    int enroll;
    char name[15];
    char dob[15];
    int sem;
    char branch[30];
    char cg[30];
};

int main()
{
    printf("ID Card\n");
    struct id krish;
    krish.enroll=78;
    krish.sem=3;
    strcpy(krish.name,"Krish Parmar");
    strcpy(krish.branch,"Electronics and communication");
    strcpy(krish.cg,"VGEC");
    strcpy(krish.dob, "10-02-2006");

    printf("Name : %s\n",krish.name);
    printf("College : %s\n",krish.cg);
    printf("Enrollement Number : %d\n",krish.enroll);
    printf("Branch : %s\n",krish.branch);
    printf("Semester : %d\n", krish.sem);
    printf("DOB : %s\n",krish.dob);
}
