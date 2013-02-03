/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebPreferencesPrivate;

@interface WebPreferences : NSObject <NSCoding> {
    WebPreferencesPrivate *_private;
}

+ (id)_IBCreatorID;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (unsigned long)_systemCFStringEncoding;
+ (void)initialize;
+ (id)standardMailWebPreferences:(BOOL)arg1;
+ (id)standardPreferences;

- (BOOL)_alwaysUseBaselineOfPrimaryFont;
- (double)_backForwardCacheExpirationInterval;
- (BOOL)_boolValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (BOOL)_forceFTPDirectoryListings;
- (BOOL)_foundationCachingEnabled;
- (id)_ftpDirectoryTemplatePath;
- (NSInteger)_integerValueForKey:(id)arg1;
- (void)_invalidateCachedPreferences;
- (NSInteger)_layoutInterval;
- (id)_localStorageDatabasePath;
- (float)_maxParseDuration;
- (unsigned long)_maximumImageSize;
- (long long)_maximumResourceDataLength;
- (float)_minimumZoomFontSize;
- (void)_postPreferencesChangesNotification;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)arg1;
- (void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setForceFTPDirectoryListings:(BOOL)arg1;
- (void)_setFoundationCachingEnabled:(BOOL)arg1;
- (void)_setIntegerValue:(NSInteger)arg1 forKey:(id)arg2;
- (void)_setLayoutInterval:(NSInteger)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)_setMaxParseDuration:(float)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)_setStandalone:(BOOL)arg1;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setTelephoneNumberParsingEnabled:(BOOL)arg1;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setUseSiteSpecificSpoofing:(BOOL)arg1;
- (BOOL)_standalone;
- (id)_stringValueForKey:(id)arg1;
- (BOOL)_telephoneNumberParsingEnabled;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (BOOL)_useSiteSpecificSpoofing;
- (id)_valueForKey:(id)arg1;
- (BOOL)acceleratedCompositingEnabled;
- (BOOL)allowUniversalAccessFromFileURLs;
- (BOOL)allowsAnimatedImageLooping;
- (BOOL)allowsAnimatedImages;
- (BOOL)applicationChromeModeEnabled;
- (BOOL)arePlugInsEnabled;
- (BOOL)authorAndUserStylesEnabled;
- (BOOL)automaticallyDetectsCacheModel;
- (BOOL)autosaves;
- (NSUInteger)cacheModel;
- (id)cursiveFontFamily;
- (BOOL)databasesEnabled;
- (void)dealloc;
- (NSInteger)defaultFixedFontSize;
- (NSInteger)defaultFontSize;
- (id)defaultTextEncodingName;
- (BOOL)developerExtrasEnabled;
- (void)didRemoveFromWebView;
- (NSInteger)editableLinkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)experimentalNotificationsEnabled;
- (id)fantasyFontFamily;
- (id)fixedFontFamily;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isDOMPasteAllowed;
- (BOOL)isFrameFlatteningEnabled;
- (BOOL)isJavaEnabled;
- (BOOL)isJavaScriptEnabled;
- (BOOL)isWebSecurityEnabled;
- (BOOL)isXSSAuditorEnabled;
- (BOOL)javaScriptCanAccessClipboard;
- (BOOL)javaScriptCanOpenWindowsAutomatically;
- (BOOL)loadsImagesAutomatically;
- (BOOL)localFileContentSniffingEnabled;
- (BOOL)localStorageEnabled;
- (NSInteger)minimumFontSize;
- (NSInteger)minimumLogicalFontSize;
- (BOOL)offlineWebApplicationCacheEnabled;
- (NSUInteger)pluginAllowedRunTime;
- (id)sansSerifFontFamily;
- (id)serifFontFamily;
- (void)setAcceleratedCompositingEnabled:(BOOL)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (void)setAllowsAnimatedImageLooping:(BOOL)arg1;
- (void)setAllowsAnimatedImages:(BOOL)arg1;
- (void)setApplicationChromeModeEnabled:(BOOL)arg1;
- (void)setAuthorAndUserStylesEnabled:(BOOL)arg1;
- (void)setAutomaticallyDetectsCacheModel:(BOOL)arg1;
- (void)setAutosaves:(BOOL)arg1;
- (void)setCacheModel:(NSUInteger)arg1;
- (void)setCursiveFontFamily:(id)arg1;
- (void)setDOMPasteAllowed:(BOOL)arg1;
- (void)setDatabasesEnabled:(BOOL)arg1;
- (void)setDefaultFixedFontSize:(NSInteger)arg1;
- (void)setDefaultFontSize:(NSInteger)arg1;
- (void)setDefaultTextEncodingName:(id)arg1;
- (void)setDeveloperExtrasEnabled:(BOOL)arg1;
- (void)setEditableLinkBehavior:(NSInteger)arg1;
- (void)setExperimentalNotificationsEnabled:(BOOL)arg1;
- (void)setFantasyFontFamily:(id)arg1;
- (void)setFixedFontFamily:(id)arg1;
- (void)setFrameFlatteningEnabled:(BOOL)arg1;
- (void)setJavaEnabled:(BOOL)arg1;
- (void)setJavaScriptCanAccessClipboard:(BOOL)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1;
- (void)setJavaScriptEnabled:(BOOL)arg1;
- (void)setLoadsImagesAutomatically:(BOOL)arg1;
- (void)setLocalFileContentSniffingEnabled:(BOOL)arg1;
- (void)setLocalStorageEnabled:(BOOL)arg1;
- (void)setMinimumFontSize:(NSInteger)arg1;
- (void)setMinimumLogicalFontSize:(NSInteger)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1;
- (void)setPlugInsEnabled:(BOOL)arg1;
- (void)setPluginAllowedRunTime:(NSUInteger)arg1;
- (void)setSansSerifFontFamily:(id)arg1;
- (void)setSerifFontFamily:(id)arg1;
- (void)setShowDebugBorders:(BOOL)arg1;
- (void)setShowRepaintCounter:(BOOL)arg1;
- (void)setStandardFontFamily:(id)arg1;
- (void)setTextDirectionSubmenuInclusionBehavior:(NSInteger)arg1;
- (void)setUserStyleSheetEnabled:(BOOL)arg1;
- (void)setUserStyleSheetLocation:(id)arg1;
- (void)setUsesEncodingDetector:(BOOL)arg1;
- (void)setUsesPageCache:(BOOL)arg1;
- (void)setUsesProxiedOpenPanel:(BOOL)arg1;
- (void)setWebArchiveDebugModeEnabled:(BOOL)arg1;
- (void)setWebGLEnabled:(BOOL)arg1;
- (void)setWebSecurityEnabled:(BOOL)arg1;
- (void)setXSSAuditorEnabled:(BOOL)arg1;
- (void)setZoomsTextOnly:(BOOL)arg1;
- (BOOL)showDebugBorders;
- (BOOL)showRepaintCounter;
- (id)standardFontFamily;
- (NSInteger)textDirectionSubmenuInclusionBehavior;
- (BOOL)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (BOOL)usesEncodingDetector;
- (BOOL)usesPageCache;
- (BOOL)usesProxiedOpenPanel;
- (BOOL)webArchiveDebugModeEnabled;
- (BOOL)webGLEnabled;
- (void)willAddToWebView;
- (BOOL)zoomsTextOnly;

@end
