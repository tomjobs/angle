//
// Copyright 2016 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// FenceNVVk.cpp:
//    Implements the class methods for FenceNVVk.
//

#include "libANGLE/renderer/vulkan/FenceNVVk.h"

#include "common/debug.h"

namespace rx
{

FenceNVVk::FenceNVVk() : FenceNVImpl()
{
}

FenceNVVk::~FenceNVVk()
{
}

gl::Error FenceNVVk::set(const gl::Context *context, GLenum condition)
{
    UNIMPLEMENTED();
    return gl::InternalError();
}

gl::Error FenceNVVk::test(const gl::Context *context, GLboolean *outFinished)
{
    UNIMPLEMENTED();
    return gl::InternalError();
}

gl::Error FenceNVVk::finish(const gl::Context *context)
{
    UNIMPLEMENTED();
    return gl::InternalError();
}

}  // namespace rx
