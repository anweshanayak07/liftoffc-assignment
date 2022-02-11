#include <stdio.h>

int main()
{
    char name[20],branch[20],hobbies[20];
    int regd_no;
    printf("Student Information \n");
    printf("Enter your name \n");
    scanf("%s",&name);
    printf("Enter your branch \n");
    scanf("%s",&branch);
    printf("Enter your hobbies \n");
    scanf("%s",&hobbies);
    printf("Enter your regd no \n");
    scanf("%d",&regd_no);
    printf("\n\n name:%s\n regd_no:%d\n branch:%s\n hobbies:%s\n",name,regd_no,branch,hobbies);
    return 0;
}


