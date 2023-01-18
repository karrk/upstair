using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroLimitor : MonoBehaviour
{
    private static MetroLimitor _instance;

    public static MetroLimitor Instacne
    {
        get
        {
            if (_instance == null)
                return null;

            return _instance;
        }
    }

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
            Destroy(this.gameObject);
    }

    Vector3 ForceTorque = new Vector3(0, 0, 0.4f);

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Metro"))
        {
            if(other.TryGetComponent<Rigidbody>(out Rigidbody rb))
            {
                rb.useGravity = true;
                rb.AddTorque(ForceTorque, ForceMode.Impulse);
            }
        }
    }

    public void Move()
    {
        transform.position += new Vector3(0, CheckDistance(), CheckDistance());
    }

    int CheckDistance()
    {
        return (int)(Mathf.RoundToInt(Character.Instance.Pos.y) - (Character.Instance.LastPosY));
    }


}
