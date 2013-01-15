using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Hide();
            MessageBox.Show("こんにちは。");
        }

        private void button1_KeyDown(object sender, KeyEventArgs e)
        {
            label1.Show();
            MessageBox.Show("こんばんは。");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            animal ani1;
            ani1 = new cat();
            ani1.color = "白";
            MessageBox.Show(ani1.sing());
        }

        private void button3_Click(object sender, EventArgs e)
        {
            cat c1;
            c1 = new cat();
            MessageBox.Show(c1.sing());
            
        }

        private void button5_Click(object sender, EventArgs e)
        {
            dog d1;
            d1 = new dog();
            MessageBox.Show(d1.sing());
        }

        private void button4_Click(object sender, EventArgs e)
        {
            bird b1;
            b1 = new bird();
            MessageBox.Show(b1.sing());
        }
    }
}
