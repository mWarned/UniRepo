#pragma once

class Figura
{
  public:
    virtual ~Figura() {}
    virtual double perimetru() = 0;
    virtual double arie() = 0;
    virtual void afisare() = 0;
};
