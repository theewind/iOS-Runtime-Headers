/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGradient;

@interface GKAbstractGradientBrush : GKImageBrush  {
    int _blendMode;
    GKGradient *_gradient;
}

@property(retain) GKGradient * gradient;
@property int blendMode;


- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)dealloc;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;

@end