class twoStacks
{
public:
    int top1, top2, size;
    int *arr;
    twoStacks()
    {
        int n = 100;
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n; // this one starts from end
    }

    // Function to push an integer into the stack1.
    void push1(int x)
    {
        arr[++top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x)
    {
        arr[--top2] = x;
    }

    // Function to remove an element from top of the stack1.
    int pop1()
    {
        if (top1 <= -1)
            return -1;

        return arr[top1--];
    }

    // Function to remove an element from top of the stack2.
    int pop2()
    {
        if (top2 >= size)
            return -1;
        return arr[top2++];
    }
};