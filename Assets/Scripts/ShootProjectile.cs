using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootProjectile : MonoBehaviour {

    public Rigidbody2D projectile;

    void Start() {
        Shoot(2.0f, 105.0f);
    }

    //range of angle is [105|75] degree to be in the area of main screen
    //range of velocity between [0|3] from device input a
    public void Shoot(float acceleration, float angle)
    {
        var velocity = acceleration * 100f;
        var shootedProjectile = Instantiate(projectile, transform.position, transform.rotation).GetComponent<Rigidbody2D>();
        var shootDir = Quaternion.Euler(0, 0, angle) * Vector3.right;

        shootedProjectile.AddForce(shootDir * velocity);
        StartCoroutine(AddDrag(shootedProjectile, velocity));
    }

    IEnumerator AddDrag(Rigidbody2D projectile, float velocity)
    {
        float current_drag = 0;

        while (current_drag < velocity)
        {
            current_drag += Time.deltaTime * (.15f * velocity);
            projectile.drag = current_drag;
            yield return null;
        }

        projectile.velocity = Vector3.zero;
        projectile.angularVelocity = 0;
        projectile.drag = 0;
    }

}
