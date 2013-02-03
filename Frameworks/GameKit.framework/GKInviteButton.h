/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, UILabel, GKUITheme, UIColor;

@interface GKInviteButton : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _adjustsImageWhenHighlighted;
    UIImage *_highlightImage;
    UIColor *_highlightShadowTitleColor;
    UIColor *_highlightTitleColor;
    float _leftCapWidth;
    float _mostlyInsideInset;
    UIImage *_normalImage;
    UIColor *_normalShadowTitleColor;
    UIColor *_normalTitleColor;
    GKUITheme *_theme;
    } _titleEdgeInsets;
    UILabel *_titleLabel;
}

@property(retain) UIImage *highlightImage;
@property(retain) UIColor *highlightTitleColor;
@property(retain) UIColor *highlightTitleShadowColor;
@property(retain) UIImage *normalImage;
@property(retain) UIColor *normalTitleColor;
@property(retain) UIColor *normalTitleShadowColor;
@property(retain) GKUITheme *theme;
@property(retain) UILabel *titleLabel;
@property BOOL adjustsImageWhenHighlighted;
@property float leftCapWidth;
@property float mostlyInsideInset;
@property UIEdgeInsets titleEdgeInsets;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)adjustsImageWhenHighlighted;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)highlightImage;
- (id)highlightTitleColor;
- (id)highlightTitleShadowColor;
- (id)initWithTheme:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (float)leftCapWidth;
- (float)mostlyInsideInset;
- (id)normalImage;
- (id)normalTitleColor;
- (id)normalTitleShadowColor;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)setHighlightImage:(id)arg1;
- (void)setHighlightTitleColor:(id)arg1;
- (void)setHighlightTitleShadowColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHightlightShadowTitleColor:(id)arg1;
- (void)setHightlightTitleColor:(id)arg1;
- (void)setLeftCapWidth:(float)arg1;
- (void)setMostlyInsideInset:(float)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setNormalShadowTitleColor:(id)arg1;
- (void)setNormalTitleColor:(id)arg1;
- (void)setNormalTitleShadowColor:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setToConfirm;
- (void)setToInvite;
- (void)setToInviteOrUninvite;
- (void)setToUninvite;
- (id)theme;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (id)titleLabel;

@end
