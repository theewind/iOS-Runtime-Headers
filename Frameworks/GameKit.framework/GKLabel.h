/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;

@interface GKLabel : UILabel {
    struct __CFAttributedString { } *_attributedString;
    NSDictionary *_attributes;
    float _calculatedFontSize;
    struct __CTFramesetter { } *_framesetter;
    struct __CTParagraphStyle { } *_paragraphStyle;
    struct __CTFrame { } *_textFrame;
}

@property(readonly) __CFAttributedString *attributedString;
@property(readonly) NSDictionary *attributes;
@property(readonly) __CTFramesetter *framesetter;
@property(readonly) __CTParagraphStyle *paragraphStyle;
@property(readonly) __CTFrame *textFrame;
@property float calculatedFontSize;

- (struct __CFAttributedString { }*)attributedString;
- (id)attributes;
- (float)calculatedFontSize;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct __CTFramesetter { }*)framesetter;
- (void)invalidateAttributedString;
- (void)invalidateAttributes;
- (void)invalidateFramesetter;
- (void)invalidateParagraphStyle;
- (void)invalidateTextFrame;
- (void)layoutSubviews;
- (struct __CTParagraphStyle { }*)paragraphStyle;
- (float)preferredHeightForWidth:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCalculatedFontSize:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLineBreakMode:(NSInteger)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (struct __CTFrame { }*)textFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(NSInteger)arg2;

@end
