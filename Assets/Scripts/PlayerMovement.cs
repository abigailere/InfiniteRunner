using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] public float speed = 5f;
    [SerializeField] private float acceleration = 1.2f;
   
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //speed += acceleration * Time.deltaTime; would use if want to speed up character over time 
        transform.Translate(Vector2.right * speed * Time.deltaTime); //add deltaTime so that its frame independent
    }
}
