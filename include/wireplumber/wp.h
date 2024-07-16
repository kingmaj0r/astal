#ifndef ASTAL_WIREPLUMBER_H
#define ASTAL_WIREPLUMBER_H

#include <glib-object.h>

#include "endpoint.h"

G_BEGIN_DECLS

#define ASTAL_WP_TYPE_WP (astal_wp_wp_get_type())

G_DECLARE_FINAL_TYPE(AstalWpWp, astal_wp_wp, ASTAL_WP, WP, GObject)

AstalWpWp* astal_wp_wp_get_default();
AstalWpWp* astal_wp_get_default_wp();

AstalWpEndpoint* astal_wp_wp_get_endpoint(AstalWpWp* self, guint id);

G_END_DECLS

#endif  // !ASTAL_WIREPLUMBER_H
