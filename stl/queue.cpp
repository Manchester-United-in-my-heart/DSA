#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> the_queue = queue<int>();
    the_queue.push(40);
    the_queue.push(30);
    the_queue.push(20);
    the_queue.push(10);
    queue<int>::reference front_pointer = the_queue.front();
    for (queue<int>::reference pointer = the_queue.front(); pointer <= the_queue.back(); ++pointer)
    {
        cout << pointer;
    }
    return 0;
}