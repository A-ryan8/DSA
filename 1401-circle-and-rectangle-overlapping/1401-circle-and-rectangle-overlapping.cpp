class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        if(y1> yCenter+radius){
            return false;
        }
        if(y2< yCenter-radius){
            return false;
        }
        if(x1>xCenter+radius){
            return false;
        }
        if(x2<xCenter-radius){
            return false;
        }
        int x = max(x1, min(xCenter, x2));
        int y = max(y1, min(yCenter, y2));

        int dx = x - xCenter;
        int dy = y - yCenter;

        if (dx * dx + dy * dy > radius * radius) {
            return false;
        }

        
        return true;

    }
};