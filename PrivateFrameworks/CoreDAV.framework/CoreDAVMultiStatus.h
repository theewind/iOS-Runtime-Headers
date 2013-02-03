/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableArray;

@interface CoreDAVMultiStatus : CoreDAVRootItem {
    NSMutableArray *_responseItems;
}

@property(readonly) NSArray *responseItems;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)errorOnUnknownChildren;
+ (BOOL)parsingWithSubItems;

- (void)addResponseItem:(id)arg1;
- (id)copyCoreDAVParseRules;
- (void)dealloc;
- (id)description;
- (id)responseItems;

@end
