#include <vector>

namespace Statistics
{
    class ComputeStatistics
    {

    public:
    ComputeStatistics(const std::vector<double>& computedStats);
    double calcAvg();
    void ReadValues();
    void DispValues() const;
    double average;
    double max;
    double min;

    }; 
}
