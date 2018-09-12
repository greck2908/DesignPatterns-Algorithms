#include "./../../Include/Common.h"

/*
    705. Design HashSet
    https://leetcode.com/problems/design-hashset/
*/

// Notes : If you store values, 10 pow 6 x 32 = 32 megabytes. Hence use boolean
class MyHashSet {

    public:
    bool *data;
    /** Initialize your data structure here. */
    MyHashSet() {
        data = new bool[1000000];
    }
    
    void add(int key) 
    {
        data[key] = true;
    }
    
    void remove(int key) {
        data[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return data[key] == true;
    }
};