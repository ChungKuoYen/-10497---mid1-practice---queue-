#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue {
    char a[10];

    int n;

    struct queue* next;

} queue;

queue *head, *curr, *tail, *tmp=NULL, *tmp2=NULL, *tmp3=NULL;

int main(void)
{
    int n, m, i, j;

    char s[10];


    head = (queue*)malloc(sizeof(queue));
    curr = head;
    curr->next=NULL;

scanf("%s",s);

strcpy(curr->a,s);

curr->n=0;

    while(strcmp(s,"END")!=0){
      while(curr!=NULL){
        if(strcmp(s,curr->a)==0)
        {

           curr->n++;
           break;

        }
        else
        {
            tmp=curr;
            curr=curr->next;
        }


        }
        if(curr==NULL)
        {
            curr=(queue*)malloc(sizeof(queue));
            tmp->next=curr;
            strcpy(curr->a,s);
            curr->n=0;
            curr->next=NULL;
            curr->n++;

        }



        scanf("%s",s);

        curr=head;



    }

while(curr!=NULL){
tmp=curr;

curr=curr->next;

  }
printf("%s\n%d\n",tmp->a,tmp->n);
    return 0;
}

/*192.168.136.1*//*CSY103062316*/
