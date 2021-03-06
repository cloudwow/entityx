#pragma once

#include <cstdint>
#include <cstddef>

namespace entityx {

  //using concreate values here for Bazel.  Autoconfig is out.
  static const size_t MAX_COMPONENTS = 64;// @ENTITYX_MAX_COMPONENTS@;
  typedef double TimeDelta; //@ENTITYX_DT_TYPE@ TimeDelta;

}  // namespace entityx
