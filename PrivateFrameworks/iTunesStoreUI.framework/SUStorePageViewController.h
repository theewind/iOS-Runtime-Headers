/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPageSectionGroup, UISegmentedControl, SUNavigationMenuViewController, ISURLRequest, SUSearchFieldController, SUStorePageProtocol, NSString, SUViewController, UIPopoverController, SSAuthenticationContext;

@interface SUStorePageViewController : SUViewController <ISURLOperationDelegate> {
    SUViewController *_activeChildViewController;
    NSInteger _activeSectionIndex;
    struct __CFSet { } *_allowedInterfaceOrientations;
    SSAuthenticationContext *_authContext;
    double _expirationTime;
    BOOL _externalRequest;
    SUStorePageProtocol *_lastValidProtocol;
    BOOL _loadingForSectionChange;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    BOOL _needsAuthentication;
    NSInteger _pageType;
    SUViewController *_pendingChildViewController;
    BOOL _reloadOnAppear;
    SUSearchFieldController *_searchFieldController;
    UISegmentedControl *_sectionSwitchControl;
    SUPageSectionGroup *_sectionsGroup;
    NSString *_urlBagKey;
    ISURLRequest *_urlRequest;
}

@property(copy) ISURLRequest *URLRequest;
@property(readonly) SUViewController *activeChildViewController;
@property(retain) SSAuthenticationContext *authenticationContext;
@property(readonly) SUSearchFieldController *searchFieldController;
@property(readonly) SUPageSectionGroup *sectionGroup;
@property(readonly) UISegmentedControl *sectionSegmentedControl;
@property(retain) NSString *urlBagKey;
@property(getter=isExternalRequest) BOOL externalRequest;
@property BOOL needsAuthentication;

+ (void)_initializeSafeCategory;

- (id)URLRequest;
- (id)_activePageSection;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_delayedFetchPage;
- (void)_dismissNavigationMenuViewController;
- (double)_expirationTime;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishHandlingFailure;
- (void)_finishSuccessfulLoad;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForActiveViewController;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (BOOL)_isBlankPage;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_moveToRootSectionForChildViewController:(id)arg1;
- (void)_navigationButtonAction:(id)arg1;
- (void)_navigationMenuButtonAction:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (void)_reloadForAppearance:(BOOL)arg1;
- (void)_reloadNavigationBar;
- (void)_reloadNavigationButtons;
- (void)_reloadNavigationMenus;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (void)_repositionForChildViewController:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_setAllowedOrientations:(id)arg1;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(NSInteger)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(NSInteger)arg2;
- (BOOL)_shouldDisplaySectionsInNavigationBar:(id)arg1;
- (BOOL)_shouldFetchAutomatically;
- (void)_tearDownNavigationMenu;
- (void)_verifyStorePageProtocol:(id)arg1;
- (id)activeChildViewController;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (id)copyScriptViewController;
- (void)dealloc;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (double)defaultPNGExpirationTime;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)displayedURL;
- (void)handleApplicationURL:(id)arg1;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (BOOL)isExternalRequest;
- (BOOL)isLoaded;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(NSInteger)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (id)navigationItemForScriptInterface;
- (BOOL)needsAuthentication;
- (id)newFetchOperation;
- (id)newPlaceholderViewController;
- (id)newViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)parentViewControllerForSearchFieldController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)reload;
- (void)reloadForNetworkTypeChange;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 ofType:(NSInteger)arg2 forURL:(id)arg3;
- (BOOL)reloadWithURLRequest:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)searchFieldController;
- (id)sectionGroup;
- (id)sectionSegmentedControl;
- (void)setAuthenticationContext:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setExternalRequest:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)showPlaceholderViewController;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (id)urlBagKey;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
