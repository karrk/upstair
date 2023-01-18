using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathPoint : MonoBehaviour
{
    Vector3 _initPos;

    const float StayTime = 1f;

    void Start()
    {
        _initPos = this.transform.position;
    }

    public void MoveRoutine()
    {
        StartCoroutine(StayPosition());
    }

    IEnumerator StayPosition()
    {
        yield return new WaitForSeconds(StayTime);
        this.transform.position = _initPos;
        DeathManager.Instance.ReturnDeathPoint(this.gameObject);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            if (other.TryGetComponent<CharacterControll>(out CharacterControll character))
            {
                if (!character.IsJump)
                {
                    Character.Instance.CrushKill();
                }
            }
        }
    }


}
