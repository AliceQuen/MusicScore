#ifndef SCORE_CREATOR_HH
#define SCORE_CREATOR_HH 1

#include <vector>
namespace MCSC
{
    enum Tone
    {
        doe,
        re,
        mi,
        fa,
        so,
        ra,
        xi,
        none
    };
    struct Note
    {
        Tone t;
        int rasingFalling = 0;
        int octave = 0;
        unsigned int time = 1;
    };
    struct StartInfo
    {
        const char* name = "Unnamed Score";
        const char* nameComposor = "None";
        const char* nameLyricist = "None";
        const char* nameScoreRecorder = "None";
        unsigned int speed = 80;
        Tone toneMark = doe;
        unsigned int baseTime = 4;
        unsigned int numTimePerBar = 4;
    };
    
    class ScoreCreator
    {
    private:
        std::vector<Note> notes;
        StartInfo start;
    public:
        ScoreCreator();
        ~ScoreCreator();
        void CreateScore(const char* filename);
    };
} // namespace MCSC
#endif