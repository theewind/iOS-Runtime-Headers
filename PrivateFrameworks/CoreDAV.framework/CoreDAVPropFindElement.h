/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropFindElement : NSObject {
    char *_elementName;
    char *_nameSpace;
    Class _parseClass;
}

@property char* elementName;
@property char* nameSpace;
@property Class parseClass;

+ (id)elementWithNameSpace:(const char *)arg1 elementName:(const char *)arg2 parseClass:(Class)arg3;

- (const char *)elementName;
- (id)initWithNameSpace:(const char *)arg1 elementName:(const char *)arg2 parseClass:(Class)arg3;
- (const char *)nameSpace;
- (Class)parseClass;
- (void)setElementName:(const char *)arg1;
- (void)setNameSpace:(const char *)arg1;
- (void)setParseClass:(Class)arg1;

@end
