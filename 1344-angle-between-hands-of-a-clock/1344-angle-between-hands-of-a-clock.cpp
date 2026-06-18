class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hou = hour+(double(minutes)/60);
        double minute=double(minutes)/5;
        double angle = abs((hou-minute)*30);
        return min(angle,360-angle);
       
    }
};