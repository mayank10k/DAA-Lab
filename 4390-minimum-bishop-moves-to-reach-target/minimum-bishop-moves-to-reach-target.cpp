class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if((target[0]+target[1])%2 != (source[0]+source[1])%2)return -1;
        if((target[0]+target[1])==(source[0]+source[1]))return 1;
        if((target[0]==target[1]) && (source[0]==source[1]))return 1;
        if((target[0]-target[1])==(source[0]-source[1]))return 1;
        return 2;
    }
};