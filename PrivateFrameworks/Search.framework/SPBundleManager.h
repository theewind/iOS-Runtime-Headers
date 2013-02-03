/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSDictionary, NSArray;

@interface SPBundleManager : NSObject {
    NSArray *_datastores;
    NSDictionary *_domainMap;
    struct dispatch_queue_s { } *_queue;
    NSArray *_searchBundles;
}

@property(readonly) NSArray *datastores;
@property(readonly) NSArray *searchBundles;

+ (id)sharedManager;

- (void)_loadSearchBundles;
- (id)datastoreForDomain:(NSUInteger)arg1;
- (id)datastores;
- (void)dealloc;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (id)domainMap;
- (void)resetDatastores;
- (id)searchBundles;

@end
