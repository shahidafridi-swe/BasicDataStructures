#include <bits/stdc++.h>
using namespace std;

void insert_in_max_heap(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int current_index = v.size() - 1;
        while (current_index != 0)
        {
            int parent = (current_index - 1) / 2;
            if (v[parent] < v[current_index])
                swap(v[parent], v[current_index]);
            else
                break;
            current_index = parent;
        }
    }
}

void delete_from_max_Heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int current = 0;
    while (true)
    {
        int leftIndex = current * 2 + 1;
        int rightIndex = current * 2 + 2;
        int lastIndex = v.size() - 1;
        if (leftIndex <= lastIndex && rightIndex <= lastIndex)
        {
            // duitai ache
            if (v[leftIndex] >= v[rightIndex] && v[leftIndex] > v[current])
            {
                swap(v[leftIndex], v[current]);
                current = leftIndex;
            }
            else if (v[rightIndex] >= v[leftIndex] && v[rightIndex] > v[current])
            {
                swap(v[rightIndex], v[current]);
                current = rightIndex;
            }
            else
                break;
        }
        else if (leftIndex <= lastIndex)
        {
            // left ache
            if (v[leftIndex] > v[current])
            {
                swap(v[leftIndex], v[current]);
                current = leftIndex;
            }
            else
                break;
        }
        else if (rightIndex <= lastIndex)
        {
            // Right ache
            if (v[rightIndex] > v[current])
            {
                swap(v[rightIndex], v[current]);
                current = rightIndex;
            }
            else
                break;
        }
        else
            break;
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    insert_in_max_heap(v, n);
    delete_from_max_Heap(v);
    for (int val : v)
        cout << val << " ";
    cout << endl;

    return 0;
}