using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : BackGroundObj
{
    readonly static Vector3 MinPosVec = new Vector3(-2, -10);
    readonly static Vector3 MaxPosVec = new Vector3(1, 3);

    readonly static Vector3 MinRotVec = new Vector3(-2, -4, -2);
    readonly static Vector3 MaxRotVec = new Vector3(2, 4, 0);

    public override Vector3 MinPos { get { return MinPosVec; } }
    public override Vector3 MaxPos { get { return MaxPosVec; } }

    public override Vector3 MinRot { get { return MinRotVec; } }
    public override Vector3 MaxRot { get { return MaxRotVec; } }


    MeshRenderer _renderer;

    float minEmissionValue = 0.3f;
    float maxEmissionValue = 0.7f;

    private void Start()
    {
        _renderer = GetComponentInChildren<MeshRenderer>();
        _renderer.material = Instantiate(_renderer.materials[0]);
        _renderer.material.SetFloat("_EmissionPower", Random.Range(minEmissionValue, maxEmissionValue));
        _renderer.material.SetFloat("_Hvalue", Random.Range(0f, 1f));
        _renderer.material.SetFloat("_Svalue", Random.Range(0f, 0.2f));
        _renderer.material.SetFloat("_Vvalue", Random.Range(1.1f, 1.5f));
    }
}
