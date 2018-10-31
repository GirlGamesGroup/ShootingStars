using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootProjectile : MonoBehaviour {

    public Rigidbody2D projectile;

    void Start () {
        Shoot(10.0f, 45.0f);
    }

    public void Shoot(float velocity, float angle)
    {
        var shootedProjectile = Instantiate(projectile, projectile.position, Quaternion.identity).GetComponent<Rigidbody2D>();
        var shootDir = Quaternion.Euler(0, 0, angle) * Vector3.right;
        shootedProjectile.velocity = shootDir * velocity;
    }

}
