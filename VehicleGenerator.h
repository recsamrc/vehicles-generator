#ifndef VEHICLE_GENERATOR_VEHICLEGENERATOR_H
#define VEHICLE_GENERATOR_VEHICLEGENERATOR_H

#include <ctime> // to get time
#include <random> // random function
#include <vector> // to store multiple distributions
#include <string> // change to qstring when work with Qt
#include "NormalDistribution.h"

class VehicleGenerator {

private:
    std::vector<NormalDistribution *> distributions;

    float getProbability(float x);

public:
    std::string showPeaks(); // replace std::string with qstring when work with Qt
    void addPeak(float center, double variance);
    void removePeak(int index);
    bool isGenerating(float x);

    virtual ~VehicleGenerator();

};


#endif
