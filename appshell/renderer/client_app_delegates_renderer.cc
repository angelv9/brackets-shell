// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include "appshell/renderer/client_app_renderer.h"
#include "appshell/renderer/client_renderer.h"
//#include "appshell/renderer/performance_test.h"

namespace client {

// static
void ClientAppRenderer::CreateDelegates(DelegateSet& delegates) {
  renderer::CreateDelegates(delegates);
  // Brackets specific change.
  //performance_test::CreateDelegates(delegates);
}

}  // namespace client
  