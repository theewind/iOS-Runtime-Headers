/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSData, NSString;

@interface CoreDAVPutTask : CoreDAVTask {
    NSString *_dataContentType;
    NSData *_dataPayload;
    NSString *_previousETag;
}

@property <CoreDAVPutTaskDelegate> *delegate;

- (id)additionalHeaderValues;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atRelativeURI:(id)arg3 previousETag:(id)arg4;
- (id)requestBody;

@end
