using Prj_ADayattheRaces;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Prj_ADayattjeRaces
{
    public partial class Form1 : Form
    {
        Random MyRandom = new Random();
        Greyhound[] dogs = new Greyhound[4];
        Guy[] guys = new Guy[3];
        public Form1()
        {
            InitializeComponent();
            guys[0] = new Guy() { IsBet = false, Cash = 50, Name = "Joe", MyBet = new Bet(), MyLabel = Joe_label, MyRadioButton = Joe_rdb };
            guys[1] = new Guy() { IsBet = false, Cash = 50, Name = "Bob", MyBet = new Bet(), MyLabel = Bob_label, MyRadioButton = Bob_rdb };
            guys[2] = new Guy() { IsBet = false, Cash = 50, Name = "Al", MyBet = new Bet(), MyLabel = Al_label, MyRadioButton = Al_rdb };

            for (int i = 0; i < guys.Length; i++)
            {
                guys[i].MyBet.Amount = 0;
                guys[i].MyBet.Dog = 0;
                guys[i].MyBet.Bettor = guys[i];
                guys[i].UpdateLabels();
            }

            int y = 0;

            for (int i = 0; i < 4; i++)
            {
                dogs[i] = new Greyhound();

                dogs[i].RacetrackLength = pictureBox1.Width;
                dogs[i].StartingPosition = pictureBox1.Location.X;
                dogs[i].Randomizer = new Random();
                dogs[i].Location = 25 + y;
                dogs[i].distance = MyRandom.Next(1, 4);
                y += 60;
            }

            pictureBox2.BackColor = Color.Transparent;
            pictureBox3.BackColor = Color.Transparent;
            pictureBox4.BackColor = Color.Transparent;
            pictureBox5.BackColor = Color.Transparent;

            dogs[0].MyPictureBox = pictureBox2;
            dogs[1].MyPictureBox = pictureBox3;
            dogs[2].MyPictureBox = pictureBox4;
            dogs[3].MyPictureBox = pictureBox5;

            buttonofRace.Enabled = false;
            label1.Text = "Minimum bet : " + (int)Bets_ud.Value + " bucks";
        }

        private void Bets_Button(object sender, EventArgs e)
        {
            bool betsSuccess = false;
            
            for (int i = 0; i < 3; i++)
            {
                if (guys[i].MyRadioButton.Checked && !guys[i].IsBet)
                    betsSuccess = guys[i].PlaceBet((int)Bets_ud.Value, (int)DogNumber_ud.Value);

                if (betsSuccess)
                {
                    buttonofRace.Enabled = true;
                    Bets_ud.Value = Bets_ud.Minimum;
                    DogNumber_ud.Value = DogNumber_ud.Minimum;
                    return;
                }
            }
        }
        private void Race_Button(object sender, EventArgs e)
        {
            int CheckCnt = 0;
            for (int i = 0; i < 3; i++)
            {
                if (!guys[i].IsBet)
                {
                    guys[i].PlaceBet(-1, -1);
                    CheckCnt++;
                }
            }

            if (CheckCnt != 0)
                return;

            buttonofBets.Enabled = false;
            buttonofRace.Enabled = false;

            bool winner = false;
            int winningDog = 0;

            while (!winner)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (dogs[i].Run())
                    {
                        winner = true;
                        winningDog = i + 1;
                    }

                    dogs[i].distance = MyRandom.Next(0, 10);
                    dogs[i].distance -= 5;
                    if (dogs[i].distance < 0)
                        dogs[i].distance = 0;
                }

                pictureBox1.Update();
                System.Threading.Thread.Sleep(10);
            }

            Form2 testDialog = new Form2();
            testDialog.ShowDialog(winningDog);

            for (int i = 0; i < 4; i++)
            {
                dogs[i].TakeStartingPosition();
                dogs[i].distance = MyRandom.Next(1, 4);
            }

            for (int i = 0; i < 3; i++)
            {
                guys[i].Collect(winningDog);
                guys[i].ClearBet();
            }

            buttonofBets.Enabled = true;
        }

        private void Joe_rdb_Checkedchange(object sender, EventArgs e)
        {
            this.label2.Text = "Joe";
        }

        private void Bob_rdb_Checkedchange(object sender, EventArgs e)
        {
            this.label2.Text = "Bob";
        }

        private void Al_rdb_Checkedchange(object sender, EventArgs e)
        {
            this.label2.Text = "Al";
        }
    }
}