using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WindowsFormsApplication1
{
    class cat :animal
    {
        public string ear = "三角";
        public string getEar()
        {
            return this.ear;
        }
        public override string sing()
        {
            return "ニャー";
        }
    }
}
