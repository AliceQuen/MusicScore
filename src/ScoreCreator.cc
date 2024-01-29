#include "ScoreCreator.hh"
#include <iostream>
#include <fstream>

namespace MCSC
{
    ScoreCreator::ScoreCreator()
    {
        notes = std::vector<Note>();
    }
    ScoreCreator::~ScoreCreator()
    {
        notes.~vector();
    }
    void ScoreCreator::CreateScore(const char *filename)
    {
        
    }
} // namespace MCSC
