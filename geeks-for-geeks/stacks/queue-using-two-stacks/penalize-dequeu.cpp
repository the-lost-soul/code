/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
     s1.push(x) ;
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(!s2.empty())
    {
        int ele = s2.top() ;
        s2.pop() ;
        return ele ;
    }
    while(!s1.empty())
    {
        int ele = s1.top() ;
        s1.pop() ;
        s2.push(ele) ;
    }
    if(!s2.empty())
    {
        int ele = s2.top() ;
        s2.pop() ;
        return ele ;
    }
    
    return -1 ;
}
