/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailIndexes : NSObject {
}

+ (void)getAvailableThumbnailIndexWithHandler:(id)arg1;
+ (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id)arg2;
+ (unsigned int)nextAvailableThumbnailIndex;
+ (void)recycleThumbnailIndex:(unsigned int)arg1;
+ (void)recycleThumbnailIndexes:(id)arg1;
+ (id)sharedInstance;

- (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id)arg2;
- (void)recycleThumbnailIndex:(unsigned int)arg1;
- (void)recycleThumbnailIndexes:(id)arg1;

@end