#include "VehicleGenerator.h"
#include <iostream>

float VehicleGenerator::getProbability(float x) {
    float peak = 0.0f;
    float value = 0.0f;

    for(NormalDistribution *dist: distributions) {
        peak += dist->getPeak();
        value += dist->getValue(x);
    }

    return value / peak * 100;
}

std::string VehicleGenerator::showPeaks() {
    std::string data;
    for (int index = 0; index < distributions.size(); index++) {
        data += std::to_string(index) + ": " +
                std::to_string(distributions[index]->getMean()) + ", " +
                std::to_string(distributions[index]->getVariance()) + "\n";
    }
    return data;
}

void VehicleGenerator::addPeak(float center, double variance) {
    NormalDistribution *dist = new NormalDistribution();
    dist->setMean(center);
    dist->setVariance(variance);
    distributions.push_back(dist);
}

void VehicleGenerator::removePeak(int index) {
    distributions.erase(distributions.begin() + index - 1);
}

bool VehicleGenerator::isGenerating(float x) {
    std::default_random_engine generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(0, 1000000);
    int probability = static_cast<int>(getProbability(x) * 10000);

    return (distribution(generator) <= probability);
}

VehicleGenerator::~VehicleGenerator() {
    for(NormalDistribution *dist: distributions) {
        delete(dist);
    }
}
