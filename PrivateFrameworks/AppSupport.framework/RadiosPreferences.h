/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class <RadiosPreferencesDelegate>;

@interface RadiosPreferences : NSObject {
    NSInteger _applySkipCount;
    BOOL _cachedAirplaneMode;
    <RadiosPreferencesDelegate> *_delegate;
    BOOL _isCachedAirplaneModeValid;
    struct __SCPreferences { } *_prefs;
    BOOL notifyForExternalChangeOnly;
}

@property <RadiosPreferencesDelegate> *delegate;
@property BOOL airplaneMode;
@property BOOL notifyForExternalChangeOnly;

- (BOOL)airplaneMode;
- (void)dealloc;
- (id)delegate;
- (void*)getValueForKey:(id)arg1;
- (id)init;
- (void)initializeSCPrefs:(id)arg1;
- (BOOL)notifyForExternalChangeOnly;
- (void)notifyTarget:(NSUInteger)arg1;
- (void)refresh;
- (void)setAirplaneMode:(BOOL)arg1;
- (void)setCallback:(int (*)())arg1 withContext:(struct { NSInteger x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNotifyForExternalChangeOnly:(BOOL)arg1;
- (void)setValue:(void*)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
