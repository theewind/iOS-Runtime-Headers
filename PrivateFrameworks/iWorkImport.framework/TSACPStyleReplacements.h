/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray;

@interface TSACPStyleReplacements : NSObject {
    NSMutableArray *mReplacementPairs;
}

@property(readonly) NSArray * replacementPairs;

- (void)addReplacementForPrototype:(id)arg1 changePropagationMap:(id)arg2 properties:(int)arg3;
- (void)addReplacementOfOldStyle:(id)arg1 withNewStyle:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)replacementPairs;

@end
