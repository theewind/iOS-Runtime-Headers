/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, RTF_OIXMLElement;

@interface RTF_OIXMLDocument : RTF_OIXMLNode {
    NSString *_encoding;
    RTF_OIXMLElement *_rootElement;
    NSString *_version;
}

- (id)XMLString;
- (id)closingTagString;
- (id)contentString;
- (id)copyMutableXMLString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithRootElement:(id)arg1;
- (id)openingTagString;
- (id)rootElement;
- (void)setCharacterEncoding:(id)arg1;
- (void)setRootElement:(id)arg1;
- (void)setVersion:(id)arg1;

@end
