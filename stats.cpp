#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
    //Implement statistics here
   float average;
   float min = vec[0];
   float max = vec[0];
   auto const count = static_cast<float>(vec.size());
   if(vec.empty())
        {std::cout<<"It's NaN"<<"\n"}

    for (auto i=0 ; i<vec.size() ; i++)
    {
        float sum=0;
        sum=sum+i;
        average = sum/count;
        if( max < vec[i])
        {
            max = vec[i];   
        }
        if( min > vec[i])
        {
            min = vec[i];  
        }
    }
    
}
void EmailAlert::emailSent()
{
  cout<<"Email sent";
}
void LEDAlert::ledGlows()
{
  cout<<"LED glows";
}
void Statistics::StatsAlerter(const float maxthreshold,std::vector< > alerter)
    {
       float threshold=maxthreshold;
    }
void Statistics::StatsAlerter::checkandalert(vector<float> vec)
{
    float max = vec[0]
      for (auto i=0 ; i<vec.size() ; i++)
    {
        
        if( max < vec[i])
        {
            max = vec[i];   
        }
    }
    if (max > threshold){
        EmailAlert.emailsent()
        LEDAlert.ledGlows()

    }
}
