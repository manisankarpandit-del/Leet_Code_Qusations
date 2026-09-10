class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.begin(),p.end());
        sort(d.begin(),d.end());
        int i = p.size()-1;
        int j = d.size()-1;
        double sum = 0;
        while(i>=0 && j>=0){
            sum += (p[i]*(100-d[j]))/100.0;
            i--;
            j--;
            while(j<0 && i>=0){
                sum += p[i];
                i--;
            }
        }
        return sum;
    }
};