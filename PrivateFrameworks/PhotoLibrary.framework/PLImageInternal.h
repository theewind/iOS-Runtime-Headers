/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSURL, NSData, UIImage;

@interface PLImageInternal : MLPhotoMemoryStorage {
    NSData *_data;
    UIImage *_previewImage;
    NSURL *_url;
    NSData *_urlData;
}

- (id)_data;
- (void)dealloc;
- (id)fullSizeImagePath;
- (BOOL)hasFullSizeImage;
- (NSInteger)imageID;
- (id)imageWithFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)imageWithFormat:(NSInteger)arg1;
- (id)title;

@end
