#include "NormalDistribution.h"

double NormalDistribution::getPeak() {
    return this->getValue(mean); // the function peaks when: x = mean
}

double NormalDistribution::getValue(float x) {
    float std = sqrt(this->variance); // standard deviation
    return (1 / (std * sqrt(2 * M_PI))) * exp((- pow(x - mean, 2)) / (2 * variance));
}

float NormalDistribution::getMean() const {
    return mean;
}

void NormalDistribution::setMean(float mean) {
    NormalDistribution::mean = mean;
}

float NormalDistribution::getVariance() const {
    return variance;
}

void NormalDistribution::setVariance(float variance) {
    NormalDistribution::variance = variance;
}
