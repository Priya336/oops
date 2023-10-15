#include <bits/stdc++.h>
using namespace std;
int Size = 5;
template <class T>
class X
{
public:
    X();
    void insert();
    T remove();
    bool is_full();
    bool is_empty();

private:
    T arr[5];
    int front;
    int rear;
};
template <class T>
X<T>::X()
{
    front = -1;
    rear = -1;
}

template <class T>
void X<T>::insert()
{
    T a;
    if (front == -1)
    {
        front++;
        rear++;
        cin >> a;
        arr[front] = a;
    }
    else
    {
        rear++;
        cin >> a;
        arr[rear] = a;
    }
}

template <class T>
T X<T>::remove()
{
    T a;
    if (front < rear)
    {
        a = arr[front];
        front++;
    }
    else
    {
        if (front == rear)
        {
            a = arr[front];
            front = -1;
        }
    }
    return a;
}

template <class T>
bool X<T>::is_full()
{
    if (front = 0 &&rear = Size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool X<T>::is_empty()
{
    if (front = -1 &&rear = -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    X<string> q;
    q.insert();
    q.insert();
    q.insert();
    q.insert();
    string a = q.remove();
    cout << a << endl;
    return 0;
}