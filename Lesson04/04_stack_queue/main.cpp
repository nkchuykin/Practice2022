#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;


// Задача о ПСП
// 1. "" - ПСП
// 2. (A) - ПСП, если A - ПСП
// 3. AB - ПСП, если A и B - ПСП
int main() {
    queue<int> q;

   // q.front(); UB  for empty




    string s;
    cin >> s;
    //stack<char,deque<char>> st; by default
    stack<char,list<char>> st;
    for(char c : s){
        if (c == '(' || c == '{'){
            st.push(c);
        }
        if (c == ')'){
            if (st.empty() || st.top() != '(')
            {
                cout << "NO";
                return 0;
            }
            st.pop();
        }
        if (c == '}'){
            if (st.empty() || st.top() != '}')
            {
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }
    if (st.empty())
    {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
