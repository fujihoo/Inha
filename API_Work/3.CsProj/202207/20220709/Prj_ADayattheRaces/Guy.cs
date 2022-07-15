using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;

namespace Prj_ADayattheRaces
{
    class Guy
    {
        public string Name; // The guy's name
        public Bet MyBet;   // An instance of Bet() that has his bet
        public int Cash;    // How much cash he has

        // The last two fields are the guy's GUI controls on the form
        public RadioButton MyRadioButton;   // My RadioButton
        public Label MyLabel;               // My Label

        public void UpdateLabels()
        {
            
        }

        public void ClearBet()  // Reset my bet so it's zero
        {

        }

        public bool PlaceBet(int Amount, int Dog)
        {
            // Place a new bet and store it in my bet filed
            // Return true if the guy had enough money to bet
            return true;
        }
        
        public void Collect(int Winner) // Ask my bet to pay out
        {

        }
    }
}
