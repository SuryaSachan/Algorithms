class Solution {
public:
    int totalMoney(int n) {
       int q=n/7;
       int r= n%7;
       return q*21 + 3.5*q*(q+1) + r*q + r*(r+1)*0.5; 
    }
};