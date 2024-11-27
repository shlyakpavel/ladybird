/*
 * Copyright (c) 2023, MacDue <macdue@dueutil.tech>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/String.h>
#include <LibWeb/HTML/ImageData.h>

namespace Web::HTML {

// https://html.spec.whatwg.org/multipage/canvas.html#canvascompositing
class CanvasCompositing {
public:
    virtual ~CanvasCompositing() = default;

    virtual float global_alpha() const = 0;
    virtual void set_global_alpha(float) = 0;

    String global_composite_operation() {return m_global_composite_operation;};

    void set_global_composite_operation(const String& op) {m_global_composite_operation = op;};

protected:
    String m_global_composite_operation = "source-over"_string;
    CanvasCompositing() = default;
};

}
