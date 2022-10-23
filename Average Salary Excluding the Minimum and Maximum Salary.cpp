class Solution {
public:
    double average(vector<int>& salary) {
        double n = salary.size();
        double maxi = INT_MIN;
        double mini = INT_MAX;
        double allsum = 0;
        for(double i = 0;i<n;i++){
            if(salary[i]>maxi) maxi = salary[i];
            if(salary[i]<mini) mini = salary[i];
            allsum += salary[i];
        }
        return (allsum-maxi-mini)/(n-2);
        
    }
};