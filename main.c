int     list_size(struct ListNode *root)
{
    int i ;
    i = 0;
    while (root)
    {
        root = root->next;
        i++;
    }
    return (i);
}

void test(struct ListNode **root)
{
    int tmp, size;
    struct ListNode *head = *root;
    size = list_size(*root);

    while (size > 1)
    {
        tmp = head->val;
        head->val = head->next->val;
        head->next->val = tmp;
        head = head->next->next;
        size -= 2;
    }
}