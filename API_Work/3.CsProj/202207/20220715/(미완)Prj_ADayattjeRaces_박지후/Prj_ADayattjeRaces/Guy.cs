using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;
using System.Linq;
using System.Threading.Tasks;

namespace Prj_ADayattheRaces
{
    class Guy
    {
        public string Name; // The guy's name
        public Bet MyBet;   // An instance of Bet() that has his bet
        public int Cash;    // How much cash he has
        public bool IsBet;

        // The last two fields are the guy's GUI controls on the form
        public RadioButton MyRadioButton;   // My RadioButton
        public Label MyLabel;               // My Label

        public void UpdateLabels()
        {
            this.MyRadioButton.Text = this.Name + " has " + this.Cash + " bucks";
            this.MyLabel.Text = this.MyBet.GetDescription();
        }

        public void ClearBet()  // Reset my bet so it's zero
        {
            this.MyLabel.Text = this.MyBet.GetDescription();
            this.MyRadioButton.Text = this.Name + " has " + this.Cash + " bucks";
        }

        public bool PlaceBet(int Amount, int Dog)
        {
            // Place a new bet and store it in my bet filed
            // Return true if the guy had enough money to bet
            if (Cash - Amount < 0 || Amount == -1)
            {
                this.MyLabel.Text = this.Name + " hasn't placed a bet";
                return false;
            }
            this.IsBet = true;
            this.MyBet.Amount = Amount;
            this.MyBet.Dog = Dog;
            this.MyLabel.Text = this.MyBet.GetDescription();
            this.Cash -= Amount;

            this.MyRadioButton.Text = this.Name + " has " + this.Cash + " bucks";

            return true;
        }

        public void Collect(int Winner) // Ask my bet to pay out
        {
            this.IsBet = false;
            this.Cash += this.MyBet.PayOut(Winner);
        }
    }
}
