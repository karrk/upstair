using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Status
{
    Dead,
    Ready,
    Jumping,
    Invincible,
}

public class CharacterStatus : MonoBehaviour
{
    Status _currentStatus;
    internal StairType _currentStair;

    CharacterManager _manager;

    bool _isUsingItem;

    private void Start()
    {
        _isUsingItem = false;
        _currentStair = null;
        _currentStatus = Status.Ready;
        _manager = CharacterManager.Instance;
    }

    public Status MyStatus { get { return _currentStatus; } }

    internal void SetStatus(Status status)
    {
        _currentStatus = status;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.TryGetComponent<StairType>(out _currentStair))
        {
            _currentStatus = Status.Ready;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Item"))
        {
            ItemType item = other.GetComponent<ItemType>();
            _manager.UseItem(item);
            _isUsingItem = true;
            StartCoroutine(ItemUseDelay(item.ReuseInterval));
        }
    }

    IEnumerator ItemUseDelay(float interval) // 같은타입의 아이템만 못먹게끔 작성해야한다.
    {
        yield return new WaitForSeconds(interval);

        _isUsingItem = false;
    }

}
