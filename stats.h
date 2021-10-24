#include <vector>

namespace Statistics
{
    class ComputeStatistics
    {

    private:
    double average;
    double max;
    double min;

    public:
    ComputeStatistics(const std::vector<double>& v);
    double calcAvg();
    void ReadValues();
    void DispValues() const;

    }  
}
