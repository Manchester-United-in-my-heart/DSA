#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1. init
    // list<int> list1 = list<int>();
    // list<int> list2 = list<int>({1, 2, 3, 4});
    // list<int> list3 = list<int>(3, 4);
    // vector<int> vect = vector<int>(10, 5);
    // list<int> list4 = list<int>(vect.begin(), vect.end());
    // cout << "list 1";
    // for (auto i : list1)
    //     cout << i << " ";
    // cout << "\nlist 2";
    // for (auto i : list2)
    //     cout << i << " ";
    // cout << "\nlist 3";
    // for (auto i : list3)
    //     cout << i << " ";
    // cout << "\nlist 4";
    // for (auto i : list4)
    //     cout << i << " ";

    // 2. assign : same as vector

    // 3. merge(new_list): merge current list with new_list
    list<int> the_list = list<int>({1, 2, 4, 4, 3, 4});
    // list<int> clone_list = list<int>(the_list.rbegin(), the_list.rend());
    // the_list.merge(clone_list);

    // 4. push_back, pop_back, push_front, pop_front: run all in constant time

    // 5. remove(val) : remove all value equal to val in list
    // the_list.remove(4);

    // 6. sort()
    // default: ascending order
    // Feel free to customized by using lambda function
    // the_list.sort(
    //     [=](int ele1, int ele2)
    //     {
    //         return ele1 > ele2;
    //     });

    for (auto i : the_list)
        cout << i << " ";

    return 0;
}