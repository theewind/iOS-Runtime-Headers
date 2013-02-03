/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUCellConfiguration, UIView, UIBezierPath, NSMutableArray;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {
    unsigned int _drawAsDisabled : 1;
    unsigned int _highlighted : 1;
    unsigned int _useSubviewLayout : 1;
    NSInteger _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    UIView *_overlayView;
    NSMutableArray *_subviews;
}

@property(retain) SUCellConfiguration *configuration;
@property NSInteger clipCorners;
@property(getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property BOOL drawAsDisabled;
@property(getter=isHighlighted) BOOL highlighted;
@property BOOL usesSubviews;

+ (void)_initializeSafeCategory;

- (id)_clipPath;
- (id)_clippedImageForImage:(id)arg1;
- (void)_reloadSubviewAlphasAnimated:(BOOL)arg1;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration;
- (id)_scriptingInfo;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (unsigned long long)accessibilityTraits;
- (NSInteger)clipCorners;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (BOOL)drawAsDisabled;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isDeleteConfirmationVisible;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setClipCorners:(NSInteger)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDeleteConfirmationVisisble:(BOOL)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setUsesSubviews:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsesSubviews:(BOOL)arg1;
- (BOOL)usesSubviews;

@end
