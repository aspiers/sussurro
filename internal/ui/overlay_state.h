#pragma once

/* Stable native overlay ABI values. Go maps semantic session states to these
 * names explicitly instead of relying on enum ordering or direct casts. */
typedef enum {
    OVERLAY_STATE_IDLE = 0,
    OVERLAY_STATE_RECORDING = 1,
    OVERLAY_STATE_TRANSCRIBING = 2,
} OverlayState;
