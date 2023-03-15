/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved. See LICENSE in OpenBOR root for license details.
 *
 * Copyright (c) 2004 OpenBOR Team
 */

// Model Properties
// 2023-03-03
// Caskey, Damon V.

typedef enum e_model_properties
{
	MODEL_PROPERTY_ACTION_FREEZE,
	MODEL_PROPERTY_AIR_CONTROL,
	MODEL_PROPERTY_ANTI_GRAVITY,
	MODEL_PROPERTY_BOUNCE,
	MODEL_PROPERTY_FACTION,
	MODEL_PROPERTY_GROUND,
	MODEL_PROPERTY_HP,
	MODEL_PROPERTY_HUD_DISABLE,
	MODEL_PROPERTY_INDEX,
	MODEL_PROPERTY_ICON,
	MODEL_PROPERTY_MAKE_INVINCIBLE,
	MODEL_PROPERTY_MOVE_CONSTRAINT,
	MODEL_PROPERTY_MP,
	MODEL_PROPERTY_MULTIPLE,
	MODEL_PROPERTY_NAME,
	MODEL_PROPERTY_OFF_SCREEN_KILL,
	MODEL_PROPERTY_OFF_SCREEN_NO_ATTACK,
	MODEL_PROPERTY_PATH,
	MODEL_PROPERTY_PRIORITY,
	MODEL_PROPERTY_QUAKE_CONFIG,
	MODEL_PROPERTY_RISE_INVINCIBLE,
	MODEL_PROPERTY_SCORE,
	MODEL_PROPERTY_SCROLL,
	MODEL_PROPERTY_SUBTYPE,
	MODEL_PROPERTY_TYPE,
	MODEL_PROPERTY_WEAPON,
	MODEL_PROPERTY_END
} e_model_properties;

HRESULT openbor_get_model_property(ScriptVariant **varlist, ScriptVariant **pretvar, int paramCount);
HRESULT openbor_set_model_property(ScriptVariant **varlist, ScriptVariant **pretvar, int paramCount);