using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Prj_ADayattjeRaces
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        public void ShowDialof(int Dog)
        {
            label1.Text = "We have a winner - dog #" + Dog;
            button1.Text = "OK";
            ShowDialog();
        }

        private void button_Clicked(object sender, EventArgs e)
        {
            this.Dispose();
        }

        internal void ShowDialog(int winningDog)
        {
            throw new NotImplementedException();
        }
    }
}
