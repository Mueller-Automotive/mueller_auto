#pragma once

#include <vector>

#include <gz/math/Vector3.hh>

#include <plugins/road_gen/RoadSegment.hpp>
#include <plugins/road_gen/Utils.hpp>
#include <plugins/road_gen/Line.hpp>
#include <plugins/road_gen/DashedLine.hpp>

class StraightSegment : public RoadSegment
{
public:
    StraightSegment(gz::math::Vector3<float> _pos, gz::math::Vector3<float> _rot) : RoadSegment(_pos, _rot) 
    {
        lines.push_back(new Line(getId(), 
                gz::math::Vector3<float>(0.0, 0.0, 0.01),
                gz::math::Vector3<float>(10.0, 0.0, 0.01),
                pos,
                rot,
                0));

        lines.push_back(new Line(getId(), 
                gz::math::Vector3<float>(0.0, 4.0, 0.01),
                gz::math::Vector3<float>(10.0, 4.0, 0.01),
                pos,
                rot,
                0));

        lines.push_back(new DashedLine(getId(),
                gz::math::Vector3<float>(0.0, 2.0, 0.01),
                gz::math::Vector3<float>(10.0, 2.0, 0.01),
                pos,
                rot,
                0));
    }
};
