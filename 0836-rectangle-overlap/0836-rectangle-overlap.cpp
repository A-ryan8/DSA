class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
       int le=max(rec1[0],rec2[0]) ;
       int ri=min(rec1[2],rec2[2]);

       int bo=max(rec1[1],rec2[1]);
       int to=min(rec1[3],rec2[3]);

       return ri>le && to>bo;
    }
};