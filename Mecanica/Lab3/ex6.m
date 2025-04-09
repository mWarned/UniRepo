clc; clear;

load patients;

T = table(Age, Smoker, Weight, SelfAssessedHealthStatus)

T(end+1, :) = {50, 1, 175, 'Good'}