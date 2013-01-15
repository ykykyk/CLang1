using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace SinpleCalc
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void CalcButton_Click(object sender, EventArgs e)
        {
            int valueLeft;
            int valueRight;
            int valueAnswer;

            valueLeft = int. Parse(InputTextBox.Text);
            valueRight = int.Parse(InputTextBox2.Text);
            valueAnswer = valueLeft + valueRight;
            AnswerTextBox.Text = valueAnswer.ToString();
        }
    }
}
