/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSFileHandle, NSString;

@interface TSUHTMLLog : NSObject {
    NSFileHandle *_handle;
    BOOL _logStarted;
    NSString *_path;
    NSString *_script;
    NSString *_stylesheet;
    unsigned int _tableRow;
    NSString *_title;
    unsigned int _uniquifier;
}

@property(readonly) NSString * path;
@property(copy) NSString * script;
@property(copy) NSString * stylesheet;
@property(copy) NSString * title;

- (void)_writeMarkupData:(id)arg1;
- (void)clear;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)logBegin;
- (void)logEnd;
- (void)openInBrowser;
- (id)path;
- (id)script;
- (void)setScript:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)stylesheet;
- (id)title;
- (id)uniqueIdentifierWithPrefix:(id)arg1;
- (void)writeMarkup:(id)arg1;
- (void)writeText:(id)arg1;

@end
