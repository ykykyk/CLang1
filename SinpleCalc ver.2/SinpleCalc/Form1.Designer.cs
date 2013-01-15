namespace SinpleCalc
{
    partial class Form1
    {
        /// <summary>
        /// 必要なデザイナー変数です。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 使用中のリソースをすべてクリーンアップします。
        /// </summary>
        /// <param name="disposing">マネージ リソースが破棄される場合 true、破棄されない場合は false です。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows フォーム デザイナーで生成されたコード

        /// <summary>
        /// デザイナー サポートに必要なメソッドです。このメソッドの内容を
        /// コード エディターで変更しないでください。
        /// </summary>
        private void InitializeComponent()
        {
            this.InputTextBox = new System.Windows.Forms.TextBox();
            this.PlusLabel = new System.Windows.Forms.Label();
            this.InputTextBox2 = new System.Windows.Forms.TextBox();
            this.EqualLabel = new System.Windows.Forms.Label();
            this.AnswerTextBox = new System.Windows.Forms.TextBox();
            this.CalcButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // InputTextBox
            // 
            this.InputTextBox.Font = new System.Drawing.Font("MS UI Gothic", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
            this.InputTextBox.Location = new System.Drawing.Point(12, 12);
            this.InputTextBox.Name = "InputTextBox";
            this.InputTextBox.Size = new System.Drawing.Size(62, 22);
            this.InputTextBox.TabIndex = 0;
            // 
            // PlusLabel
            // 
            this.PlusLabel.Font = new System.Drawing.Font("MS UI Gothic", 11F);
            this.PlusLabel.Location = new System.Drawing.Point(91, 14);
            this.PlusLabel.Name = "PlusLabel";
            this.PlusLabel.Size = new System.Drawing.Size(31, 16);
            this.PlusLabel.TabIndex = 1;
            this.PlusLabel.Text = "+";
            // 
            // InputTextBox2
            // 
            this.InputTextBox2.Font = new System.Drawing.Font("MS UI Gothic", 11F);
            this.InputTextBox2.Location = new System.Drawing.Point(128, 12);
            this.InputTextBox2.Name = "InputTextBox2";
            this.InputTextBox2.Size = new System.Drawing.Size(67, 22);
            this.InputTextBox2.TabIndex = 2;
            // 
            // EqualLabel
            // 
            this.EqualLabel.Font = new System.Drawing.Font("MS UI Gothic", 11F);
            this.EqualLabel.Location = new System.Drawing.Point(209, 12);
            this.EqualLabel.Name = "EqualLabel";
            this.EqualLabel.Size = new System.Drawing.Size(100, 23);
            this.EqualLabel.TabIndex = 3;
            this.EqualLabel.Text = "=";
            // 
            // AnswerTextBox
            // 
            this.AnswerTextBox.Font = new System.Drawing.Font("MS UI Gothic", 11F);
            this.AnswerTextBox.Location = new System.Drawing.Point(240, 12);
            this.AnswerTextBox.Name = "AnswerTextBox";
            this.AnswerTextBox.Size = new System.Drawing.Size(79, 22);
            this.AnswerTextBox.TabIndex = 4;
            // 
            // CalcButton
            // 
            this.CalcButton.Location = new System.Drawing.Point(12, 40);
            this.CalcButton.Name = "CalcButton";
            this.CalcButton.Size = new System.Drawing.Size(307, 24);
            this.CalcButton.TabIndex = 5;
            this.CalcButton.Text = "計算する";
            this.CalcButton.UseVisualStyleBackColor = true;
            this.CalcButton.Click += new System.EventHandler(this.CalcButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(340, 73);
            this.Controls.Add(this.CalcButton);
            this.Controls.Add(this.AnswerTextBox);
            this.Controls.Add(this.EqualLabel);
            this.Controls.Add(this.InputTextBox2);
            this.Controls.Add(this.PlusLabel);
            this.Controls.Add(this.InputTextBox);
            this.Name = "Form1";
            this.Text = "簡単計算プログラム";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox InputTextBox;
        private System.Windows.Forms.Label PlusLabel;
        private System.Windows.Forms.TextBox InputTextBox2;
        private System.Windows.Forms.Label EqualLabel;
        private System.Windows.Forms.TextBox AnswerTextBox;
        private System.Windows.Forms.Button CalcButton;
    }
}

