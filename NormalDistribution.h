#ifndef VEHICLE_GENERATOR_NORMALDISTRIBUTION_H
#define VEHICLE_GENERATOR_NORMALDISTRIBUTION_H

#include <cmath>

class NormalDistribution {
private:
    float mean;
    float variance;


public:
    double getPeak();
    double getValue(float x);

// Accessors and Mutator
public:
    float getMean() const;

    void setMean(float mean);

    float getVariance() const;

    void setVariance(float variance);

};


#endif
