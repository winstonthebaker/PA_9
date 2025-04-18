using System;
using System.Collections.Generic;
using FlaxEngine;

namespace Game;

/// <summary>
/// RocketTrail Script.
/// </summary>
public class RocketTrail : Script
{
    /// <inheritdoc/>
    public override void OnStart()
    {
        // Here you can add code that needs to be called when script is created, just before the first game update
    }

    /// <inheritdoc/>
    /// 
    ParticleEffect _emitter;
    public override void OnEnable()
    {
        _emitter = Actor.As<ParticleEffect>();
    }

    /// <inheritdoc/>
    public override void OnDisable()
    {
        // Here you can add code that needs to be called when script is disabled (eg. unregister from events)
    }

    /// <inheritdoc/>
    public override void OnUpdate()
    {
        if(_emitter != null)
        {
            _emitter.SetParameterValue("MissileTrail", "ActorPosition", Actor.Position);
            _emitter.SetParameterValue("MissileTrail", "ActorOrientation", Actor.Orientation);
        }
    }
}
