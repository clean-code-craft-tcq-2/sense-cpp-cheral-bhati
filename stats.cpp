#include "stats.h"
#include <iostream>

Statistics::ComputeStatistics(const std::vector<double>& computedStats)
 {
    //Implement statistics here
   
    
    min = *std::min_element(computedStats .begin(), computedStats .end());
    max = *std::max_element(computedStats .begin(), computedStats .end());
    average = calcAvg();
    

}

void ComputeStatistics::ReadValues()
{
    std::vector<double> temp;
    std::cout << "Enter values separated by a space: ";
    int Number;
    for (int i = 0; i < 4; i++)
    {
        std::cin >> Number;
        temp.push_back(Number);
    }
    computedStats  = temp;
}

void ComputeStatistics::DispValues() const
{
     for(std::size_t i = 0; i < computedStats .size(); i++)
       std::cout << "Number " << i <<" = " << computedStats .at(i) << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "min, max: " << min << " , " << max << std::endl;
}

double ComputeStatistics::calcAvg()
{
    double sum = 0;
    for(int i = 0; i < computedStats .size(); i++)
       sum += computedStats .at(i);
    return sum/computedStats .size();
}

int main()
{
    ComputeStatistics s2;
    s2.ReadValues();
    s2.DispValues();
    return 0;
}
