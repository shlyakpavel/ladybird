/*
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/SVG/SVGAnimatedLength.h>
#include <LibWeb/SVG/SVGAnimatedString.h>

namespace Web::SVG {

class SVGFilterPrimitiveStandardAttributes {
public:
    SVGFilterPrimitiveStandardAttributes(JS::Realm& realm, SVGElement& element)
        : m_x(SVGAnimatedLength::create(realm, SVGLength::create(realm, 0, 0), SVGLength::create(realm, 0, 0)))
        , m_y(SVGAnimatedLength::create(realm, SVGLength::create(realm, 0, 0), SVGLength::create(realm, 0, 0)))
        , m_width(SVGAnimatedLength::create(realm, SVGLength::create(realm, 0, 0), SVGLength::create(realm, 0, 0)))
        , m_height(SVGAnimatedLength::create(realm, SVGLength::create(realm, 0, 0), SVGLength::create(realm, 0, 0)))
        , m_result(SVGAnimatedString::create(realm, element, FlyString()))
    {
    }

    GC::Ref<SVGAnimatedLength> x() const { return m_x; }
    GC::Ref<SVGAnimatedLength> y() const { return m_y; }
    GC::Ref<SVGAnimatedLength> width() const { return m_width; }
    GC::Ref<SVGAnimatedLength> height() const { return m_height; }
    GC::Ref<SVGAnimatedString> result() const { return m_result; }

private:
    GC::Ref<SVGAnimatedLength> m_x;
    GC::Ref<SVGAnimatedLength> m_y;
    GC::Ref<SVGAnimatedLength> m_width;
    GC::Ref<SVGAnimatedLength> m_height;
    GC::Ref<SVGAnimatedString> m_result;
};

}
