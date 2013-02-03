/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADRemoteView, ADBannerView, UIWindow;

@interface ADHostWindowController : NSObject <UIWindowDelegate> {
    ADBannerView *_bannerView;
    ADRemoteView *_hostView;
    BOOL _isStatusBarHidden;
    UIWindow *_window;
}

@property(retain) ADBannerView *bannerView;
@property(retain) ADRemoteView *hostView;
@property(retain) UIWindow *window;
@property(readonly) CGRect bannerViewInScreenCoordinates;
@property(readonly) NSInteger bannerViewOrientation;
@property BOOL isStatusBarHidden;

- (id)bannerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bannerViewInScreenCoordinates;
- (NSInteger)bannerViewOrientation;
- (void)beginTransitionIn;
- (void)beginTransitionOut;
- (void)dealloc;
- (void)endTransitionIn;
- (void)endTransitionOut;
- (id)hostView;
- (id)init;
- (BOOL)isStatusBarHidden;
- (void)setBannerView:(id)arg1;
- (void)setHostView:(id)arg1;
- (void)setIsStatusBarHidden:(BOOL)arg1;
- (void)setRemoteWindowContextId:(NSUInteger)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
