class Solution {
public:
    void reverseString(vector<char>& s) {
        int back_ = s.size() - 1;
        for(int front_ = 0; front_ < back_;)
        {
            swap(s[front_],s[back_]);
            front_++;
            back_--;
        }
        
    }
};