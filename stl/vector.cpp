#include <bits/stdc++.h>
using namespace std;

int main()
{
    // There are some syntaxs of initializing new vector.
    // 1. vector<int> a = vector<int>();
    // Will init new empty vector a
    // 2. vector<int> a = vecotr<int>({a1, a2, ... an});
    // Will init new vector a with predefined values
    // vector<int> a = vector<int>();
    // 3. vector<int> a = vector<int>(b);
    // Will copy (clone) the value of vector b
    // 4. vector<int> a = vector<int>(size, initial_value)
    // Will create a vector that contains <size> values of <initial_v alue>
    // 5. vecotr<int> a = vector<int>(iter1, iter2)
    // Will create a copy vector that contains values from iter 1 to iter2. Everything changed in new vector will effect the values of the vector that used for initializing.
    // vector<int> b = vector<int>(4, 10);
    // vector<int> a = vector<int>(b.begin(), --b.end());
    // *(&a[a.size() - 1]) = 20;
    // for (int i = 0; i < b.size(); ++i)
    //     cout << b[i] << " ";
    // cout << endl;
    // cout << (&a[0] == &b[0]);
    // cout << endl;
    // for (int i = 0; i < a.size() ; ++i)
    //     cout << a[i] << " ";
    vector<int> the_vector = vector<int>();
    for (int i = 0; i < 10; ++i)
        the_vector.push_back(i);
    // vector<int> the_vector_2 = vector<int>(the_vector);
    // cout << (the_vector == the_vector_2);
    // 1. assign. Receive 2 type params: (iter1, iter2) or (nums, val)
    // vector<int> new_vector = vector<int>(5, 10);
    // new_vector.assign(the_vector.begin(), the_vector.end());
    // new_vector.assign(5, 10)
    // 2. at. Access the value of a specific position
    // 3. front, back. Given the first,last element's value
    // 4. begin, end. Given the fist, after last element's iterator
    // 5. clear. Remove all element of vector
    // 6. empty. True if vector doesn't have any element
    // 7. erase. Received 2 type of params
    // 7.a. (iter_loc): delete the element at iter
    // 7.b. (iter_start, iter_end): delete [iter_start, iter_end] block

    // vector<int>::iterator start = the_vector.begin() + 1;
    // vector<int>::iterator end = the_vector.end() - 2;

    // the_vector.erase(start, end);
    // cout << the_vector.size();

    // 8. Insert
    // 8.1. insert(iter_pos, val) : insert <val> BEFORE <iter_pos>
    // vector<int>::iterator start_iter = the_vector.begin();
    // the_vector.insert(start_iter, 100);
    // 8.2. insert(iter_pos, size, val): insert a <size>-element block of <value> BEFORE <iter_pos>
    // vector<int>::iterator start_iter = the_vector.begin();
    // the_vector.insert(start_iter, 3, 100);
    // 8.3. insert(iter_pos, iter_start, iter_end): insert a block [iter_start, iter_end) before iter_pos;
    // vector<int>::iterator start_iter = the_vector.begin();
    // vector<int> inserted_block = vector<int>({99, 100});
    // the_vector.insert(start_iter, inserted_block.begin(), inserted_block.end());

    // 9. Pop back
    // the_vector.pop_back();
    // the_vector.pop_back();

    // 10. Push Back
    // the_vector.push_back(10000);

    // 11. rbegin(), rend()
    // rbegin() + 1 <=> end() - 1
    // rend() - 1 <=> begin() + 1
    // vector<int>::iterator begin = the_vector.begin();
    // vector<int>::iterator end = the_vector.end();
    // vector<int>::reverse_iterator reverse_begin = the_vector.rbegin();
    // vector<int>::reverse_iterator reverse_end = the_vector.rend();
    // cout << "Begin " << *begin << endl;
    // cout << "Reversed End " << *(reverse_end - 1) << endl;
    // cout << "End " << *(end - 1) << endl;
    // cout << "Reverse Begin " << *reverse_begin << endl;

    // 12. Swap
    // vector<string> v1 = vector<string>({"V1"});
    // vector<string> v2 = vector<string>({"V2"});
    // v1.swap(v2);
    // for (int i = 0; i < v1.size(); ++i)
    //     cout << v1.at(i) << endl;
    // for (int i = 0; i < v2.size(); ++i)
    //     cout << v2.at(i) << endl;

    for (int i = 0; i < the_vector.size(); ++i)
        cout
            << the_vector[i] << " ";
    return 0;
}