/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, UIImage;

@interface GKImageBackgroundView : GKBackgroundView {
    UIImage *_backgroundImage;
    NSMutableArray *_imageViews;
}

@property(retain,readonly) UIImage *backgroundImage;
@property(retain) NSMutableArray *imageViews;

- (id)backgroundImage;
- (void)dealloc;
- (id)imageViews;
- (void)layoutSubviews;
- (void)setImageViews:(id)arg1;

@end
