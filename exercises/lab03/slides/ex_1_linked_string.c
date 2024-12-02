#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *value;
    struct Node *next;
} NodeStruct; 

typedef NodeStruct *List;
typedef char *String;

void printList(List list);
void freeList(List list);
List cons(String s, List list);

int main()
{
    List mylist = NULL;
    mylist = cons("Hello", mylist);
    mylist = cons("World", mylist);
    
    printList(mylist);

    freeList(mylist);

    return 0;
}
/* Add a string to an existing list */
List cons(String s, List list)
{
    List node = (List) malloc(sizeof(NodeStruct));

    node->value = (String) malloc (strlen(s) + 1);
    strcpy(node->value, s);
    node->next = list;
    return node;
}

/* Print a list */
void printList(List list)
{
    List current = list;
    while (current != NULL)
    {
        printf("%s ->", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

/* Function to free a list */
void freeList(List list)
{
    List current = list;
    List next;
    while (current != NULL)
    {
        next = current->next;
        free(current->value);
        free(current);
        current = next;
    }
}