using System;
using System.Collections.Generic;
using FlaxEngine;

namespace Game;

/// <summary>
/// BulletTrail Script.
/// </summary>
public class BulletTrail : Script
{
    ParticleEffect _emitter;
    private float _lifespan = 3;
    private float _lifeTime = 0;
    public override void OnUpdate()
    {
        _lifeTime += Time.DeltaTime;
        if(_lifeTime > _lifespan)
        {
            Destroy(Actor);
        }
    }
    public void SetPoint(Vector3 point)
    {
        Debug.Log(point);
        _emitter = Actor.As<ParticleEffect>();
        if (_emitter != null)
        {
            _emitter.SetParameterValue("BulletTrail", "Start", Actor.Position);
            _emitter.SetParameterValue("BulletTrail", "End", point);
        }
    }
}
