
/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef WindowContextFactory_mac_DEFINED
#define WindowContextFactory_mac_DEFINED

namespace sk_app {

class WindowContext;
struct DisplayParams;

namespace window_context_factory {

struct MacWindowInfo {
#if 0 // TODO: use Mac-specific objects
    Display*     fDisplay;
    XWindow      fWindow;
    XVisualInfo* fVisualInfo;
#endif
};

inline WindowContext* NewVulkanForMac(const MacWindowInfo&, const DisplayParams&) {
    // No Vulkan support on Mac.
    return nullptr;
}

WindowContext* NewGLForMac(const MacWindowInfo&, const DisplayParams&);

}  // namespace window_context_factory

}  // namespace sk_app

#endif
