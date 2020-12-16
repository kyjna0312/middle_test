typedef struct _TreeNode
{
    char value;
    struct _TreeNode *left;
    struct _TreeNode *right;
} TreeNode;
// 노드 구조체
TreeNode *nodeMaker()
{
    TreeNode *anode = (TreeNode *)malloc(sizeof(TreeNode)); // 노드 공간 할당
    anode->left = 0;                                        // 초기화
    anode->right = 0;
    return anode; // 생성한 노드의 주소값을 리턴
}
char GetData(TreeNode *node)
{
    return node->value; // 원하는 주소에 들어있는 value를 리턴
}
void SetData(TreeNode *node, char value)
{
    node->value = value; // 원하는 주소에 들어있는 value를 새로운 value로 입력
}
TreeNode *GotoLeft(TreeNode *node)
{
    return node->left; // 왼쪽 자식 노드의 주소를 반환한다.
}
void LinkLeft(TreeNode *root, TreeNode *left)
{
    root->left = left; // 새로운 노드를 상위 노드의 왼쪽 노드로 설정한다
}
TreeNode *GotoRight(TreeNode *node)
{
    return node->right; // 오른쪽 자식 노드의 주소를 반환한다.
}
void LinkRight(TreeNode *root, TreeNode *right)
{
    root->right = right; // 새로운 노드를 상위 노드의 오른쪽 노드로 설정한다
}
void searchNode()
{
}
void treeInOrder()
{
}
int main()
{
    int N, i = 0;
    TreeNode *node;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        char parent, leftChild, rightChild;
        scanf("%c %c %c", &parent, &leftChild, &rightChild);
        node = nodeMaker();
        SetData(node, parent);
        SetData(node->left, leftChild);
        SetData(node->right, rightChild);
    }
    return 0;
}