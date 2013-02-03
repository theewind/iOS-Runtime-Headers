/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKUITheme, UIImage;

@interface GKMultilineCellContentView : UIView <GKTableViewCellContents> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    } _contentInsets;
    BOOL _highlighted;
    UIImage *_image;
    } _imageInsets;
    } _imageSize;
    NSArray *_lines;
    } _textInsets;
    GKUITheme *_theme;
}

@property(retain) UIImage *image;
@property(retain) NSArray *lines;
@property(retain) GKUITheme *theme;
@property UIEdgeInsets contentInsets;
@property(getter=isHighlighted) BOOL highlighted;
@property UIEdgeInsets imageInsets;
@property CGSize imageSize;
@property UIEdgeInsets textInsets;

+ (id)threeLineContentViewWithTheme:(id)arg1;

- (id)accessibilityLabel;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawLines:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithNumberOfLines:(NSUInteger)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isHighlighted;
- (id)lineAtIndex:(NSUInteger)arg1;
- (id)lines;
- (void)prepareForReuse;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFont:(id)arg1 forLine:(NSUInteger)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLines:(id)arg1;
- (void)setText:(id)arg1 forLine:(NSUInteger)arg2;
- (void)setTextColor:(id)arg1 forLine:(NSUInteger)arg2;
- (void)setTextInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTheme:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)theme;

@end
