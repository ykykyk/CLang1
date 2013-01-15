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
            int valueLeft; //入力値１用の整数型変数
            int valueRight; //入力値２用の整数型変数
            int valueAnswer; //計算結果用整数型変数

            valueLeft = InputCheck(InputTextBox.Text, out valueLeft);
            valueRight = InputCheck(InputTextBox2.Text, out valueRight);

            valueAnswer = valueLeft + valueRight;
            AnswerTextBox.Text = valueAnswer.ToString();
        }

        private int InputCheck(string textValue, out int value)
        {
            if (int.TryParse(textValue, out value) == true)
            {
                value = int.Parse(textValue);
            }
            else
            {
                value = 0;
            }
            return value;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
