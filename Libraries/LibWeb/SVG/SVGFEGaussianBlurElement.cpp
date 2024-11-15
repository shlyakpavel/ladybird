/*
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/SVG/SVGFEGaussianBlurElement.h>
#include <LibWeb/Bindings/SVGFEGaussianBlurElementPrototype.h> // Adjusted capitalization
#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/SVG/SVGAnimatedString.h>
#include <LibWeb/SVG/SVGAnimatedNumber.h>

namespace Web::SVG {

SVGFEGaussianBlurElement::SVGFEGaussianBlurElement(DOM::Document& document, DOM::QualifiedName qualified_name)
    : SVGElement(document, move(qualified_name))
    , SVGFilterPrimitiveStandardAttributes(document.realm(), *this) // Pass the realm and this element
{
    dbgln("SVGFEGaussianBlurElement constructor");
}


SVGFEGaussianBlurElement::~SVGFEGaussianBlurElement() = default;

void SVGFEGaussianBlurElement::initialize(JS::Realm& realm)
{
    Base::initialize(realm);
    WEB_SET_PROTOTYPE_FOR_INTERFACE(SVGFEGaussianBlurElement);
}

// Readonly attributes

GC::Ref<SVGAnimatedString> SVGFEGaussianBlurElement::in1() const
{
    // Return a default or null value
    return result();
}

GC::Ref<SVGAnimatedNumber> SVGFEGaussianBlurElement::std_deviation_x() const
{
    return SVGAnimatedNumber::create(document().realm(), m_std_deviation_x, m_std_deviation_x);
}

GC::Ref<SVGAnimatedNumber> SVGFEGaussianBlurElement::std_deviation_y() const
{
    return SVGAnimatedNumber::create(document().realm(), m_std_deviation_y, m_std_deviation_y);
}

// Methods

void SVGFEGaussianBlurElement::set_std_deviation(float std_deviation_x, float std_deviation_y)
{
    m_std_deviation_x = std_deviation_x;
    m_std_deviation_y = std_deviation_y;
}

}
