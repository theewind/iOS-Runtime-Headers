/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarServer, UIStatusBarForegroundView, UIStatusBarBackgroundView, UILabel, UIStatusBar, UIStatusBarWindow, <UIStatusBarStyleDelegate>;

@interface UIStatusBar : UIView <UIStatusBarServerClient> {
    UIStatusBarBackgroundView *_backgroundView;
    UILabel *_doubleHeightLabel;
    UIStatusBarForegroundView *_foregroundView;
    BOOL _hidden;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    NSInteger _orientation;
    NSInteger _requestedStyle;
    BOOL _showsForeground;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarServer *_statusBarServer;
    UIStatusBarWindow *_statusBarWindow;
    NSInteger _style;
    <UIStatusBarStyleDelegate> *_styleDelegate;
    NSInteger _styleOverrides;
    BOOL _styleRequestedWhileHidden;
    BOOL _suppressGlow;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
}

@property UIStatusBarWindow *statusBarWindow;
@property <UIStatusBarStyleDelegate> *styleDelegate;

+ (void)_initializeSafeCategory;
+ (NSInteger)defaultStatusBarStyle;
+ (NSInteger)defaultStyleForRequestedStyle:(NSInteger)arg1 styleOverrides:(NSInteger)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForStyle:(NSInteger)arg1 orientation:(NSInteger)arg2;
+ (float)heightForStyle:(NSInteger)arg1 orientation:(NSInteger)arg2;

- (void)_adjustDoubleHeightLabelAlpha;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(NSInteger)arg3;
- (float)_foregroundAlphaForStatusBarStyle:(NSInteger)arg1;
- (NSInteger)_foregroundStyleForStatusBarStyle:(NSInteger)arg1;
- (void)_prepareToSetStyle:(NSInteger)arg1 animation:(NSInteger)arg2;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(NSInteger)arg1;
- (void)_setStyle:(NSInteger)arg1 animation:(NSInteger)arg2;
- (void)_setStyle:(NSInteger)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_slideTransform;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_styleIsTranslucent:(NSInteger)arg1;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (void)_willEnterForeground:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentFrame;
- (float)currentHeight;
- (NSInteger)currentStyle;
- (void)dealloc;
- (void)forceUpdateData:(BOOL)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForOrientation:(NSInteger)arg1;
- (float)heightForOrientation:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showForegroundView:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHidden;
- (void)noteStyleOverridesChangedLocally;
- (void)requestStyle:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)requestStyle:(NSInteger)arg1 animation:(NSInteger)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(NSInteger)arg5;
- (void)requestStyle:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(NSInteger)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(NSInteger)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(NSInteger)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg2 withActions:(NSInteger)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(NSInteger)arg2;
- (id)statusBarWindow;
- (id)styleDelegate;
- (NSInteger)styleForRequestedStyle:(NSInteger)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
