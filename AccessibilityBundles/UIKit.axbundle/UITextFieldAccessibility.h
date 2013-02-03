/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UITextFieldAccessibility : UITextFieldAccessibility_super {
}

+ (void)_initializeSafeCategory;

- (NSInteger)_accessibilityCountAccessibleChildren:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityInternalButton;
- (id)_accessibilityInternalData;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_accessibilityUpdateButtons;
- (void)_clearButtonClicked:(id)arg1;
- (void)_updateButtons;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;

@end
