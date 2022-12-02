using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface IPanel
{
    static IPanel CurrentPanel { get; set; }

    void UpLoadPanel();
    void PanelAction();
}
