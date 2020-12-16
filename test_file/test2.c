typedef struct _node
{
    int value;
    struct _node *next;
} Node;

Node *addNode(int);
void printList(Node *);

main()
{
    Node *head, *temp;
    int i;

    head = addNode(-1);
    temp = head;

    for (i = 0; i < 10; i++)
    {
        temp->next = addNode(i);
        temp = temp->next;
    }

    printList(head);
}

Node *addNode(int value)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->value;

    return n;
}

void printList(Node *node)
{
    while (node)
    {
        printf("%d ", node->value);
        node = node->next;
    }

    printf("\n");
}