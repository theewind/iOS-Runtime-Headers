/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CNFAudioDeviceView, CNFAlertView, CNFHUDView, TPLCDView, UIImageView, UIControl, NSTimer, UIView, TPBottomButtonBar, TPBottomDualButtonBar, NSObject<CNFDisplayControllerDelegate>;

@interface CNFDisplayController : UIViewController {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    NSTimer *_autodismissRouteListTimer;
    TPBottomButtonBar *_bottomBar;
    NSObject<CNFDisplayControllerDelegate> *_delegate;
    TPBottomDualButtonBar *_dualBottomBar;
    CNFAlertView *_errorAlert;
    CNFHUDView *_hudView;
    BOOL _isPreview;
    NSInteger _lastOrientation;
    float _localAspectRatio;
    UIView *_localVideoBackView;
    UIView *_localVideoContainer;
    UIImageView *_localVideoFrameView;
    UIView *_localVideoMutedView;
    UIView *_localVideoOverlayView;
    UIView *_localVideoView;
    } _minLocalViewSize;
    } _points[5];
    float _remoteAspectRatio;
    NSUInteger _remoteCameraType;
    UIView *_remoteVideoBackView;
    UIView *_remoteVideoContainer;
    NSInteger _remoteVideoOrientation;
    UIView *_remoteVideoOverlayView;
    UIView *_remoteVideoPausedView;
    UIControl *_remoteVideoView;
    CNFAudioDeviceView *_routeList;
    NSInteger _routeListReloadPending;
    NSInteger _routeListVisible;
    BOOL _shouldFadeInLocalPreviewFirstFrame;
    TPLCDView *_topBar;
    UIControl *_videoGroupView;
    BOOL _waitingForLocalCameraFirstFrame;
    BOOL _waitingForLocalPreviewFirstFrame;
    BOOL _waitingForLocalPreviewResumeFrame;
    UIView *_zoomView;
}

@property <CNFDisplayControllerDelegate> *delegate;
@property NSInteger remoteVideoOrientation;
@property BOOL shouldFadeInLocalPreviewFirstFrame;

+ (void)_initializeSafeCategory;
+ (void)loadImages;
+ (void)preinitialize;

- (void)_adjustForOrientationsWithAnimation:(BOOL)arg1;
- (float)_angleForLocalOrientation:(NSInteger)arg1 remoteOrientation:(NSInteger)arg2;
- (void)_animateEndCallUIForCallBars;
- (void)_autodismissAudioMenu:(id)arg1;
- (void)_avFirstPreviewFrameArrived:(id)arg1;
- (void)_avFirstRemoteFrameArrived:(id)arg1;
- (void)_avRemoteCameraDidChange:(id)arg1;
- (void)_avRemoteCameraWillChange:(id)arg1;
- (void)_avRemoteOrientationDidChange:(id)arg1;
- (float)_bounceValueForFraction:(float)arg1;
- (void)_callBarsAnimationDidStop;
- (void)_callFailureRecoveryCallBackAction:(id)arg1;
- (void)_callFailureRecoveryCancelAction:(id)arg1;
- (void)_callFailureRecoveryTryAgainAction:(id)arg1;
- (struct CGPoint { float x1; float x2; })_controlPointForTrackingPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)_createLocalVideoOverlayView;
- (void)_createRemoteVideoOverlayView;
- (id)_defaultStringForEndedReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)_delayedEndConferenceDisplayAnimationOnCallBar;
- (void)_deselectEndVideoButton;
- (void)_deselectEndVideoButtonOnCallBar;
- (void)_deviceOrientationDidChange:(id)arg1;
- (NSInteger)_deviceOrientationForIMAVCameraOrientation:(NSUInteger)arg1;
- (void)_disableBottomBarButtonAndAnimateOutCallBars;
- (void)_dissociateVideoLayers;
- (void)_endCallBarDisplayAnimation;
- (void)_endConferenceDisplayAnimation;
- (void)_endConferenceDisplayAnimationOnCallBar;
- (void)_endDisplayAnimationDidStop;
- (void)_endDisplayDelayDidStop;
- (void)_endVideoAction:(id)arg1;
- (void)_fadeInPIPFrame;
- (void)_fakeRemoteOrientationChange:(id)arg1;
- (struct CGPoint { float x1; float x2; })_finalPointForPIPView:(id)arg1 inset:(float)arg2 isTop:(BOOL)arg3 isLeft:(BOOL)arg4;
- (void)_finishedDraggingView:(id)arg1 forPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)_flipLocalCameraView;
- (void)_flipRemoteCameraView;
- (void)_handleRemoteVideoTap:(id)arg1;
- (void)_hideAudioRoutesAnimationDidStop;
- (void)_hideCallBarsToRevealConferenceAnimationDidStop;
- (void)_hideExistingUI;
- (void)_hudTransitionDidStop;
- (NSUInteger)_imAVCameraOrientationForDeviceOrientation:(NSInteger)arg1;
- (BOOL)_isInPhoneCall;
- (BOOL)_isOutgoingInvitation;
- (BOOL)_isShowingBottomBar:(id)arg1;
- (NSInteger)_pinView:(id)arg1 withTrackingPoints:(struct CGPoint { float x1; float x2; }*)arg2 toClosestCornerWithInset:(float)arg3;
- (void)_pinningAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_reloadRouteList;
- (void)_selectEndVideoButton;
- (void)_selectEndVideoButtonOnCallBar;
- (void)_setBottomBarButtonEnabled:(BOOL)arg1;
- (void)_setLocalVideoOrientation;
- (void)_setupAutodismissRoutingTimer:(float)arg1;
- (void)_setupCallBars;
- (void)_setupDualBottomBar;
- (void)_setupHUDView;
- (void)_setupVideoLayers;
- (void)_showAudioRoutesHidePIPAnimationDidStop;
- (void)_showErrorUIWithStatus:(id)arg1 showTopBar:(BOOL)arg2 showSingleBottomBar:(BOOL)arg3 showDualBottomBar:(BOOL)arg4 animateOut:(BOOL)arg5;
- (void)_shrinkPIPAnimationDidStop;
- (id)_stringForIMAVChatEndedReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)_syncSublayerFrameSizeToParent:(id)arg1;
- (void)_updateStatusAndAnimateOutCallBars;
- (id)_viewWithCenteredImage:(id)arg1 title:(id)arg2 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)animateOutWithDidEndDelegate:(id)arg1 selector:(SEL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)associateVideoLayers;
- (void)changeToFullConferenceDisplay;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)endCall;
- (void)handleDraggableViewLongPress:(id)arg1;
- (void)hideAudioRoutingDeviceList;
- (void)hudButtonClicked:(NSInteger)arg1;
- (id)init;
- (id)initWithAVConference:(id)arg1;
- (void)loadView;
- (void)postUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)reloadRouteList;
- (NSInteger)remoteVideoOrientation;
- (void)resetAutodismissTimer;
- (void)setAudioDevicesButtonSelected:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMuteConferenceButtonEnabled:(BOOL)arg1;
- (void)setMuteConferenceButtonSelected:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setRemoteVideoOrientation:(NSInteger)arg1;
- (void)setShouldFadeInLocalPreviewFirstFrame:(BOOL)arg1;
- (void)setStatus:(NSInteger)arg1;
- (void)setStatusForState:(NSUInteger)arg1;
- (void)setupAutodismissRoutingTimer;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)shouldFadeInLocalPreviewFirstFrame;
- (void)showAudioRoutingDeviceList;
- (void)showCallBars;
- (void)showCallBarsAnimated:(BOOL)arg1;
- (void)showCallFailedWithReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showLocalHangup;
- (void)showLocalViewAsMuted:(BOOL)arg1;
- (void)showLocationErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showRemoteHangUp;
- (void)showRemoteViewAsPaused:(BOOL)arg1;
- (void)showWifiErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)stopPreview;
- (void)toggleLocalCameraType;
- (void)updateAudioButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
