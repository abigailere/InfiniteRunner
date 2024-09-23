using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] PlayerMovement player; //a refenence to player object
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //want camera to move independently
        transform.Translate(Vector2.right * player.speed * Time.deltaTime);
    }
}
