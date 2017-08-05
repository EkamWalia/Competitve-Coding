#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node *next;
};

int main()
{
  struct node *head = (struct node*)malloc(sizeof(struct node));;
  struct node *second = (struct node*)malloc(sizeof(struct node));
  struct node *third = (struct node*)malloc(sizeof(struct node));

  head -> data = 1;
  head -> next = second;

  second -> data = 2;
  second -> next = third;

  third -> data = 3;
  third -> next = NULL;

  struct node *n = head;
  while(n!=NULL)
  {
    printf("%d\n",n->data);
    n = n->next;
  }

  return 0;

}
