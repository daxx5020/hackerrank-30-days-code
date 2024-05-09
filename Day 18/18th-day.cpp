/*
Task
A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards. Can you determine if a given string, s, is a palindrome? To solve this challenge, we must first take each character in s, enqueue it in a queue, and also push that same character onto a stack. Once that's done, we must dequeue the first character from the queue and pop the top character off the stack, then compare the two characters to see if they are the same: as long as the characters match, we continue dequeueing, popping, and comparing each character until our containers are empty (a non-match means s isn't a palindrome).

Write the following declarations and implementations:
1. Two instance variables: one for your stack, and one for your queue.
2. A void pushCharacter(char ch) method that pushes a character onto a stack.
3. A void enqueueCharacter(char ch) method that enqueues a character in the queue instance
variable.
4. A char popCharacter method that pops and returns the character at the top of the stack
instance variable.
5. A char dequeueCharacter method that dequeues and returns the first character in the queue
instance variable.
*/


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Solution {
private:
    stack<char> st;
    queue<char> q;

public:
    void pushCharacter(char item) {
        st.push(item);
    }

    char popCharacter() {
        char top = st.top();
        st.pop();
        return top;
    }

    void enqueueCharacter(char item) {
        q.push(item);
    }

    char dequeueCharacter() {
        char front = q.front();
        q.pop();
        return front;
    }
};

int main() {
    string s;
    getline(cin, s);
    int len = s.length();

    Solution obj;

    for (int i = 0; i < len; i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The word, " << s << ", is a palindrome." << endl;
    else
        cout << "The word, " << s << ", is not a palindrome." << endl;

    return 0;
}


