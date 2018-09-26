#include "./../../../Include/Common.h"

/*
    A Range Module is a module that tracks ranges of numbers. 
    Input: [ [1,3], [7,10] ] & [2,6], 
    Output: [ [1,6], [7,10] ]

    Your task is to write a method - insert_range that takes in a vector of sorted, 
    non-overlapping integer Interval s (aka ranges) and a new Interval - 
    insert, and returns a vector of sorted Interval s where insert has been added to the vector 
    in the correct spot and the required overlapping ranges have been merged. 
*/


class Interval {
    public:
        int start;
        int end;
        Interval(){}
        Interval(int start, int end) {
            this->start = start;
            this->end = end;
        }
    };

// Add any helper functions(if needed) above.
vector<Interval> insert_range(vector<Interval> intervals_list, Interval insert) {
    
    
}