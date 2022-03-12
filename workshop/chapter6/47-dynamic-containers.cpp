// Dynamic Containers

// Linked lists
struct numeric_item
{
    int value_;
    numeric_item* next_;
};

// Binary Search Trees

struct numeric_tree
{
    int value_;
    numeric_tree* left_;
    numeric_tree* right_;
};

// Recursive Data Structures
void print_recursive(numeric_item* p)
{
    if (p == nullptr)
    {
        cout << endl;
    }
    else
    {
        cout << p->value_ << " ";
        print_recursive(p->next_);
    }
}

void print(numeric_item* p)
{
    while (p != nullptr)
    {
        cout << p->value_ << " ";
	p = p->next_;
    }
    cout << endl;
}

void print(numeric_tree* item)
{
    if (item == nullptr)
    {
        return;
    }

    print(item->left_);
    cout << item->value_ << " ";
    print(item->right_);
}

// Finding Items
numeric_item** pp = &head;
while((*pp) != nullptr && (*pp)->value_ != v)
{
    pp = &((*pp)->next_);
}

numeric_tree** find(int v, numeric_tree** pp)
{
    if (*pp == nullptr)
    {
        return pp;
    }
    else if (v < (*pp)->value_)
    {
    return find(v, &((*pp)->left_));
    }
    else
    {
    return find(v, &((*pp)->right_));
    }
}


// Adding Items
newp->next_ = *pp;
*pp = newp->next_;

// Deleting Dynamic Items
while (head != nullptr)
{
    numeric_item* p = head;
    head = head->next_;
    delete p;
}




