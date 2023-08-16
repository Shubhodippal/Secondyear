#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char name[20];
    int salary;
};
int main(){
    int n;
    printf("Enter the total number of the employee: ");
    scanf("%d", &n);
    struct employee *p=(struct employee*)malloc(sizeof(struct employee)*n);
    for (int i = 0 ;i < n;i++){
        printf("Enter the name of the employee %d: ", i+1);
        scanf("%s", p[i].name);
        printf("Enter the salary of %s: ", p[i].name);
        scanf("%d",&p[i].salary );
        //fflush(stdin);//clearing buffer
    }
    for(int i=0;i<n;i++){
        printf("\nThe %d employee is: %s", i+1,p[i].name);
        printf("\nHis salary is: %d", p->salary);
    }
    return 0;
}