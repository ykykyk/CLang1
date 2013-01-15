using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace sample1
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
            MessageBox.Show("こんにちは");
        }

        private void button2_KeyDown(object sender, KeyEventArgs e)
        {
            MessageBox.Show("こんばんは");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Animal ani1;
            ani1 = new Animal();
            ani1.color = "白";
            MessageBox.Show(ani1.Sing());
        }
    }
}
