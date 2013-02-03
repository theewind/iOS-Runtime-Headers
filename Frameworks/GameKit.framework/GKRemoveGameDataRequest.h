/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;

@interface GKRemoveGameDataRequest : GKDataRequest {
    NSDictionary *_gameDescriptor;
}

@property(retain) NSDictionary *gameDescriptor;

- (BOOL)authenticationRequired;
- (NSInteger)cacheType;
- (void)dealloc;
- (id)gameDescriptor;
- (id)invalidateCacheKeys;
- (id)key;
- (id)request;
- (void)setGameDescriptor:(id)arg1;

@end
