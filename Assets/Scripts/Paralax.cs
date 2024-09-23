using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paralax : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private float startPos, length;
    [SerializeField] private float paralaxEffect;
    [SerializeField] private GameObject cam;

    void Start()
    {
        startPos = transform.position.x; 
        length = this.GetComponent<SpriteRenderer>().bounds.size.x; //for the length of the background
        cam = GameObject.FindGameObjectWithTag("Main Camera"); //at the start of the game we get camera refence
    }

    // Update is called once per frame
    void Update()
    {
        //take cam and multiply by paralax effect, differnt num for different layers
        float distance = cam.transform.position.x* paralaxEffect;
        transform.position = new Vector3(startPos * distance, transform.position.y, transform.position.z); //only move in x
    }
}
