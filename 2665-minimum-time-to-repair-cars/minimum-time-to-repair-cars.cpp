#define ll long long int
class Solution {
public: 
    bool time_is_Suff(vector<int>& ranks, int& cars, ll min_given){
        ll cars_done = 0;
        for(auto r : ranks){
            ll c2 = min_given/r;
            ll c = floor(sqrt(c2));

            cars_done += c;
        }
        return (cars_done >= cars); 
    }
    
    long long repairCars(vector<int>& ranks, int cars) {
        ll ans = 0, l=1, r=1e14;
        while(l < r){
            ll mid = (l+r)/2;
            if(time_is_Suff(ranks, cars, mid)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};