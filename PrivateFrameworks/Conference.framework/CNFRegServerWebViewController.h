/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSString, CNFRegLoadingView, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    struct { 
        unsigned int isLoading : 1; 
        unsigned int isLoaded : 1; 
        unsigned int wantsWifi : 1; 
        unsigned int modifiedWiFi : 1; 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int checkedLogState : 1; 
        unsigned int shouldLog : 1; 
    id _alertHandler;
    NSString *_leftButtonAction;
    CNFRegLoadingView *_loadingView;
    NSString *_rightButtonAction;
    NSMutableDictionary *_urlHandlers;
    } _webControllerFlags;
    UIWebView *_webView;
}

@property(copy) ? *alertHandler;
@property(copy) NSString *leftButtonAction;
@property(copy) NSString *rightButtonAction;
@property(retain) UIWebView *webView;

- (BOOL)_shouldLog;
- (id)acceptLanguageString;
- (void)addSelector:(SEL)arg1 forScheme:(id)arg2;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (BOOL)boolForServerValue:(id)arg1 value:(BOOL*)arg2 defaultValue:(BOOL)arg3;
- (void)clearUrlHandlers;
- (void)dealloc;
- (id)executeJavaScript:(id)arg1;
- (id)functionStringFromCallbackName:(id)arg1 withStringArgument:(id)arg2;
- (id)functionStringFromCallbackName:(id)arg1;
- (void)hideSpinner;
- (BOOL)intForServerValue:(id)arg1 value:(NSInteger*)arg2 defaultValue:(NSInteger)arg3;
- (id)leftButtonAction;
- (void)leftButtonTapped:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (id)logName;
- (id)navButtonWithTitle:(id)arg1 action:(SEL)arg2 highlight:(BOOL)arg3;
- (id)numberForServerValue:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (void)parseAlertURL:(id)arg1;
- (void)parseNavBarURL:(id)arg1;
- (id)queryDictionaryForUrl:(id)arg1;
- (id)rightButtonAction;
- (void)rightButtonTapped:(id)arg1;
- (id)schemeForURL:(id)arg1;
- (SEL)selectorForScheme:(id)arg1;
- (void)setAlertHandler:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)setLeftButtonAction:(id)arg1;
- (void)setRightButtonAction:(id)arg1;
- (void)setWantsWifi:(BOOL)arg1;
- (void)setWebView:(id)arg1;
- (void)setupUrlHandlers;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)showSpinner;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (BOOL)uintForServerValue:(id)arg1 value:(NSUInteger*)arg2 defaultValue:(NSUInteger)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(NSUInteger)arg3;
- (id)webView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
