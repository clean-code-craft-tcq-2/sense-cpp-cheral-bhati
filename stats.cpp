#include "stats.h"

Statistics::ComputeStatistics(const std::vector<double>& v)
 {
    //Implement statistics here
   
    
    min = *std::min_element(v.begin(), v.end());
    max = *std::max_element(v.begin(), v.end());
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
    v = temp;
}

void ComputeStatistics::DispValues() const
{
     for(std::size_t i = 0; i < v.size(); i++)
       std::cout << "Number " << i <<" = " << v.at(i) << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "min, max: " << min << " , " << max << std::endl;
}

double ComputeStatistics::calcAvg()
{
    double sum = 0;
    for(int i = 0; i < v.size(); i++)
       sum += v.at(i);
    return sum/v.size();
}

int main()
{
    ComputeStatistics s2;
    s2.ReadValues();
    s2.DispValues();
    return 0;
}
