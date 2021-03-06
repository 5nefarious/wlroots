#ifndef WLR_BACKEND_SESSION_INTERFACE_H
#define WLR_BACKEND_SESSION_INTERFACE_H

#include <wlr/backend/session.h>

struct session_impl {
	struct wlr_session *(*create)(struct wl_display *disp);
	void (*destroy)(struct wlr_session *session);
	int (*open)(struct wlr_session *session, const char *path);
	void (*close)(struct wlr_session *session, int fd);
	bool (*change_vt)(struct wlr_session *session, unsigned vt);
};

#endif
