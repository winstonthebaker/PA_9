using System;
using System.Collections.Generic;
using FlaxEngine;
namespace Game;

/// <summary>
/// Jib Script.
/// </summary>
public class Jib : Script
{
    public List<Prefab> _jibDecals;

    private RigidBody _rb;
    private Collider _collider;
    private bool _impacted = false;

    private Random _rand;
    public override void OnEnable()
    {
        _collider = Actor.GetChild<Collider>();
        _rb = Actor.As<RigidBody>();

        _rand = new Random();
        Vector3 point = new Vector3(
            _rand.NextDouble() * 2 - 1,
        _rand.NextDouble() * 2,
        _rand.NextDouble() * 2 - 1);

        if (_rb != null)
        {
            _rb.AddForce(point * 200, ForceMode.VelocityChange);
            _rb.AddTorque(point * 100, ForceMode.VelocityChange);
        }
        if (_collider != null)
        {

            _collider.TriggerEnter += TriggerEntered;
        }
    }

    private void TriggerEntered(PhysicsColliderActor obj)
    {
        if (_impacted)
        {
            return;
        }

        _impacted = true;

        if (_jibDecals != null)
        {
            if (_jibDecals.Count > 0)
            {
                Actor spawn = PrefabManager.SpawnPrefab(_jibDecals[_rand.Next(_jibDecals.Count)], Actor.Position);

                spawn.Scale = (Vector3.One * 0.5f + (float)(_rand.NextDouble()) * 2);
                Vector3 closesetPoint;
                obj.ClosestPoint(Actor.Position, out closesetPoint);

                Vector3 normal = Actor.Position - closesetPoint;
                normal.Normalize();

                Vector3 forward = Vector3.Cross(normal, Vector3.Right);
                forward.Normalize();
                spawn.Orientation = Quaternion.LookRotation(forward, normal);

            }
        }



        Destroy(Actor);
    }

    public override void OnDisable()
    {
        if (_collider != null)
        {
            _collider.TriggerEnter -= TriggerEntered;

        }
    }
}
