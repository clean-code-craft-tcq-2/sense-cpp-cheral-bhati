#include "stats.h"
#include <bits/stdc++.h>

Stats Statistics::ComputeStatistics(const std::vector<float>& v)
 {
    //Implement statistics here
    Stats computedStats;
 
 if (v.empty())
 {
  computedStats.min = NAN;
  computedStats.max = NAN;
  computedStats.average = NAN;
  return computedStats;
 }
 
 else
 {   
    computedStats.min = *min_element(v.begin(), v.end());
    computedStats.max = *max_element(v.begin(), v.end());
 
     float sum = 0;
    for(int i = 0; i < (int)v.size(); i++)
       sum += v.at(i);
    computedStats.average = (float)sum/v.size();
  
    return computedStats;
 }
}
 void StatsAlerter::checkAndAlert( const std::vector<float>& v)
{
    auto computedStats = Statistics::ComputeStatistics(v);
    if(computedStats.max > maxThreshold)
    {
        *(alerters[0]->emailAlertPtr) = {true};
        *(alerters[0]->ledAlertPtr)   = {true};
    }  
 
}

