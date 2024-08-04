/*
    Implementation for a monotonic decreasing stack in C++.
    We traverse the array.
    While the stack is not empty and the TOP of the stack is less than
    the current element, then pop.

    Next, construct the reuslt array and push the current element into the stack.
 */

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> monotonicDecreasing(vector<int>& nums) {
    int n = nums.size();
    stack<int> st;
    vector<int> result(n);

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && st.top() < nums[i]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = st.top();
        }
        else {
            result[i] = -1;
        }

        st.push(nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {};
    vector<int> result = monotonicDecreasing(nums);
    cout << "Monotonic decreasing stack: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}