﻿using UnityEngine;
using System.Collections;

public class BirdMovement : MonoBehaviour {
	Vector3 velocity = Vector3.zero;
	float flapSpeed = 100f;
	float forwardSpeed = 1f;

	Rigidbody2D bird;
	Animator animator;

	bool didFlap = false;

	// Use this for initialization
	void Start () {
		bird = GetComponent<Rigidbody2D>();
		animator = GetComponentInChildren<Animator>();

	}

	//Graphics and Inputs go here
	void Update() {
		if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0)) {
			didFlap = true;
		}
	}
	
	// Physics go here
	void FixedUpdate () {
		bird.AddForce(Vector2.right * forwardSpeed);

		if (didFlap) {
			didFlap = false;

			animator.SetTrigger("DoFlap");

			if (bird.velocity.y < 0) 
				bird.AddForce(Vector2.up * (-bird.velocity.y));
			bird.AddForce(Vector2.up * flapSpeed);
		}

		float angle = 0;
		if (bird.velocity.y < 0.25f) 
			angle = Mathf.Lerp(0, -90, -(bird.velocity.y+0.25f) / 2f);
		transform.rotation = Quaternion.Euler(0,0,angle);
	




//		velocity.x = forwardSpeed;
//		velocity.y = gravity * Time.deltaTime;
//
//		if (didFlap) {
//			didFlap = false;
//			velocity.y = (velocity.y < 0)? 0:velocity.y;
//			velocity += flapVelocity;
//		}
//
//		velocity = Vector3.ClampMagnitude(velocity, maxSpeed);
//
//		transfrom.position += velocity * Time.deltaTime;
//
//
//		float angle = 0;
//		if (velocity.y < 0) {
//			angle = Mathf.Lerp(0, -90, -velocity.y / maxSpeed);
//		}
//		transform.rotation = Quaternion.Euler (0, 0, angle);
	}
}