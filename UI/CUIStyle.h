#ifndef _CUIStyle_h_
#define _CUIStyle_h_

#include <GG/StyleFactory.h>

class CUIStyle : public GG::StyleFactory
{
public:
    std::string Translate(const std::string& text) const override;

    GG::DropDownList* NewDropDownList(size_t num_shown_elements, GG::Clr color) const override;

    GG::Edit* NewEdit(const std::string& str, const boost::shared_ptr<GG::Font>& font,
                      GG::Clr color, GG::Clr text_color = GG::CLR_BLACK, GG::Clr interior = GG::CLR_ZERO) const override;

    GG::ListBox* NewListBox(GG::Clr color, GG::Clr interior = GG::CLR_ZERO) const override;

    GG::Scroll* NewScroll(GG::Orientation orientation, GG::Clr color, GG::Clr interior) const override;

    GG::Slider<int>* NewIntSlider(int min, int max, GG::Orientation orientation,
                                  GG::Clr color, int tab_width, int line_width = 5) const override;


    GG::TabBar* NewTabBar(const boost::shared_ptr<GG::Font>& font, GG::Clr color,
                          GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewScrollUpButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewScrollDownButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewVScrollTabButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewScrollLeftButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewScrollRightButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewHScrollTabButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewVSliderTabButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewHSliderTabButton(GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewSpinIncrButton(const boost::shared_ptr<GG::Font>& font, GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewSpinDecrButton(const boost::shared_ptr<GG::Font>& font, GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::StateButton* NewTabBarTab(const std::string& str,
                                  const boost::shared_ptr<GG::Font>& font, GG::Flags<GG::TextFormat> format, GG::Clr color,
                                  GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewTabBarLeftButton(const boost::shared_ptr<GG::Font>& font, GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    GG::Button* NewTabBarRightButton(const boost::shared_ptr<GG::Font>& font, GG::Clr color, GG::Clr text_color = GG::CLR_BLACK) const override;

    void DeleteWnd(GG::Wnd* wnd) const override;
};

#endif // _CUIStyle_h_
