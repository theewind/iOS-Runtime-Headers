/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABNewPersonViewControllerDelegate>;

@interface ABNewPersonViewController : UIViewController {
    id _helper;
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    id _parentGroup;
    void *_recordForNewPerson;
}

@property void *addressBook;
@property void *displayedPerson;
@property(readonly) ABPersonViewControllerHelper *helper;
@property <ABNewPersonViewControllerDelegate> *newPersonViewDelegate;
@property void *parentGroup;
@property(retain) ABGroupWrapper *parentGroupWrapper;
@property(readonly) void *recordForNewPerson;
@property(retain) <ABStyleProvider> *styleProvider;
@property BOOL savesNewContactOnSuspend;
@property BOOL showsCancelButton;

- (BOOL)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (void*)addressBook;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)attemptSaveAndTellDelegate:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void*)displayedPerson;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)newPersonViewDelegate;
- (void*)parentGroup;
- (id)parentGroupWrapper;
- (void*)recordForNewPerson;
- (void)save:(id)arg1;
- (void)saveAndTellDelegate:(BOOL)arg1;
- (void)savePerson:(void*)arg1;
- (BOOL)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)setParentGroup:(void*)arg1;
- (void)setParentGroupWrapper:(id)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)showsCancelButton;
- (id)styleProvider;
- (void)updateNavigationButtons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
