/*
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/SVG/SVGElement.h>
#include <LibWeb/SVG/SVGFilterPrimitiveStandardAttributes.h>
#include <LibWeb/SVG/SVGAnimatedString.h>
#include <LibWeb/SVG/SVGAnimatedNumber.h>

namespace Web::SVG {

class SVGFEGaussianBlurElement final
    : public SVGElement
    , public SVGFilterPrimitiveStandardAttributes {
    WEB_PLATFORM_OBJECT(SVGFEGaussianBlurElement, SVGElement);

public:
    // Edge Mode Values
    static constexpr unsigned short SVG_EDGEMODE_UNKNOWN = 0;
    static constexpr unsigned short SVG_EDGEMODE_DUPLICATE = 1;
    static constexpr unsigned short SVG_EDGEMODE_WRAP = 2;
    static constexpr unsigned short SVG_EDGEMODE_NONE = 3;

    SVGFEGaussianBlurElement(DOM::Document&, DOM::QualifiedName);
    virtual ~SVGFEGaussianBlurElement() override;

    virtual void initialize(JS::Realm&) override;

    // Readonly attributes
    GC::Ref<SVGAnimatedString> in1() const;
    GC::Ref<SVGAnimatedNumber> std_deviation_x() const;
    GC::Ref<SVGAnimatedNumber> std_deviation_y() const;

    // Methods
    void set_std_deviation(float std_deviation_x, float std_deviation_y);
private:
	float m_std_deviation_x = 0;
	float m_std_deviation_y = 0;
};

}
