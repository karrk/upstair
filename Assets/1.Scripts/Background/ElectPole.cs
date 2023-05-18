using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElectPole : SubObject
{
    readonly static Vector3 MinPosVec = new Vector3(0, -4);
    readonly static Vector3 MaxPosVec = new Vector3(0, 0);

    readonly static Vector3 MinRotVec = new Vector3(-2, -4, -2);
    readonly static Vector3 MaxRotVec = new Vector3(2, 4, 0);

    public override Vector3 MinPos { get { return MinPosVec; } }
    public override Vector3 MaxPos { get { return MaxPosVec; } }

    public override Vector3 MinRot { get { return MinRotVec; } }
    public override Vector3 MaxRot { get { return MaxRotVec; } }

    Vector3 _poleOffsetPos = new Vector3(7.2f, 0, 0);

    Vector3 _startPos;
    Vector3 _endPos;

    int pointCount = 0;

    Transform _subTr;

    LineRenderer _renderer;

    private void OnEnable()
    {
        if (this.gameObject.activeSelf)
        {
            _subTr = transform.GetChild(2).transform;
            _subTr.position = GetSubPoleRandomPos();

            _renderer = GetComponent<LineRenderer>();

            StartCoroutine(AlignObjects());
            StartCoroutine(SetRenderLine());
        }
    }

    IEnumerator AlignObjects()
    {
        yield return new WaitForSeconds(0.01f);

        Quaternion rotValue = this.transform.rotation;

        this.transform.rotation = Quaternion.identity;

        transform.GetChild(0).transform.rotation = rotValue;

        _subTr.transform.rotation = Quaternion.identity;
    }

    IEnumerator SetRenderLine()
    {
        yield return new WaitForSeconds(0.1f);

        _startPos = transform.GetChild(1).position;
        _endPos = _subTr.GetChild(1).position;

        Vector3[] positions = GetPositions(2f, _startPos, _endPos);
        Vector3 DownVec = new Vector3(0, -0.2f, 0);

        for (int i = 1; i < positions.Length / 2; i++)
        {
            positions[i] += DownVec * i;
            positions[positions.Length - (i + 1)] += DownVec * i;

            if (i == (positions.Length / 2) - 1)
            {
                if (positions.Length % 2 != 0)
                {
                    positions[i + 1] += DownVec * i;
                }
            }
        }

        _renderer.positionCount = positions.Length;

        _renderer.SetPositions(positions);
    }

    Vector3 GetSubPoleRandomPos()
    {
        Vector3 tempPos = transform.position + _poleOffsetPos;
        Vector3 randPos = new Vector3(0, 1, 1) * Random.Range(-10, 20);

        return tempPos + randPos;
    }

    Vector3[] GetPositions(float increseValue,Vector3 startPos, Vector3 endPos)
    {
        float polesDistacne = Vector3.Distance(startPos, endPos);

        pointCount = (int)((float)polesDistacne / (float)increseValue);

        Vector3[] positions = new Vector3[pointCount+2];

        int idx = 0;

        for (float i = 0; i <= 1; i = i+increseValue/polesDistacne)
        {
            Vector3 temp = Vector3.Lerp(startPos, endPos, i);

            positions[idx++] = temp;

        }

        positions[positions.Length - 1] = endPos;

        return positions;
    }

}
