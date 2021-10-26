#include <vector>

struct Stats
   {
    float average;
    float max;
    float min;
   };

namespace Statistics
    {
    Stats ComputeStatistics(const std::vector<float>& );
    }
    
struct EmailAlert 
{
    bool emailSent;
};
struct LEDAlert 
{
    bool ledGlows;
};
struct IAlerter
{
    EmailAlert *emailAlertPtr;
    LEDAlert *ledAlertPtr;
};

class StatsAlerter
{
    float maxThreshold;
    std::vector<IAlerter*>alerters;

public:
    StatsAlerter(const float Threshold,  std::vector<IAlerter*> Initialv )
    {
        maxThreshold =  Threshold;
        alerters     = Initialv;
    }
    
    void checkAndAlert( const std::vector<float>& );
};
   
