using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Drawing;
using System.Threading.Tasks;

namespace Prj_ADayattheRaces
{
    class Greyhound
    {
        public int StartingPosition;    // where my PictureBox starts
        public int RacetrackLength;     // How long the racetrack is
        public PictureBox MyPictureBox = null;  // My PictureBox object
        public int Location = 0;        // My Location on the racetrack
        public int distance = 0;
        public Random Randomizer;       // An instance of Random

        public bool Run()
        {
            Point p = this.MyPictureBox.Location;

            if (p.X >= this.RacetrackLength)
                return true;
            p.X += this.distance;

            this.MyPictureBox.Location = p;
            this.MyPictureBox.Update();

            return false;
        }

        public void TakeStartingPosition()
        {
            Point p = this.MyPictureBox.Location;
            p.X = this.StartingPosition;
            this.MyPictureBox.Location = p;
            this.MyPictureBox.Update();
        }
    }
}
