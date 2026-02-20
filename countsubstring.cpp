#include<iostream>
#include<string>
#include<vector>
using namespace std;  

class Solution{
    public:

    int countsubstring(string s) {
        int prevCount = 0;
        int currCount = 1;
        int result = 0;

        for(int i=1; i<s.length(); i++) {
            if(s[i] == s[i-1]) {
                currCount++;
            } else {
                result += min(prevCount, currCount);
                prevCount = currCount;
                currCount = 1;
            }
        }
        result += min(prevCount, currCount);
        return result;
    }
};

int main() {
    string s = "00110011";
    Solution obj;
    int result = obj.countsubstring(s);
    cout << "Count of valid substrings: " << result << endl;
    return 0;
}