using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;

namespace Prj_ADayattheRaces
{
    class Greyhound
    {
        public int StartingPosition;    // where my PictureBox starts
        public int RacetrackLength;     // How long the racetrack is
        public PictureBox MyPictureBox = null;  // My PictureBox object
        public int Location = 0;        // My Location on the racetrack
        public Random Randomizer;       // An instance of Random

        public bool Run()
        {
            Randomizer = new Random((int)Environment.TickCount);
            if (Location != RacetrackLength)
            {
                Location += Randomizer.Next(1, 4);
                return false;
            }
            return true;
        }
        public void TakeStartingPosition()
        {
            Location = StartingPosition;
        }
    }
}
