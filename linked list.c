#include<stdio.h>
 
struct node 
{
  int nData;
  struct node* pNode;
};
struct node* createLL(int* nArr, int n)
{
  static int i=0;
  struct node* t = NULL;
  if(n==0)
    return NULL;   
  t = (struct node*)malloc(sizeof(struct node*));
  t->nData = nArr[i++];
  t->pNode = createLL(nArr, --n);
  return t;
}
 
void displayLL(struct node *t)
{
  while(t)
  {
    printf("%d ", t->nData);
    t=t->pNode;
  }
}
 
int main()
{
  int n=0, i=0, arr[100]={0};
  struct node *t = NULL;
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
     
  printf("\nCreate linked list from array");
  t =createLL(arr, n);
  printf("\nDisplay Linked List : \n");
  if(t)
   displayLL(t);    
}
