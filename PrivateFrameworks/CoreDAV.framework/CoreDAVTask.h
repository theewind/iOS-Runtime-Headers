/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, NSHTTPURLResponse, CoreDAVXMLParser, NSURLRequest, CoreDAVItem, CoreDAVRequestLogger, NSURLConnection, NSString, <CoreDAVTaskManager>, NSDate, <CoreDAVAccountInfoProvider>;

@interface CoreDAVTask : NSObject {
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    NSURLConnection *_connection;
    void *_context;
    CoreDAVItem *_currentlyParsingItem;
    NSDate *_dateConnectionWentOut;
    id _delegate;
    NSInteger _depth;
    BOOL _didCancel;
    BOOL _didFailWithError;
    BOOL _didFinishLoading;
    BOOL _didReceiveData;
    BOOL _didReceiveResponse;
    BOOL _didSendRequest;
    BOOL _finished;
    CoreDAVRequestLogger *_logger;
    NSInteger _numDownloadedElements;
    CoreDAVXMLParser *_parser;
    NSError *_passwordNotificationError;
    BOOL _receivedBadPasswordResponse;
    NSString *_relativeURI;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    <CoreDAVTaskManager> *_taskManager;
    double _timeoutInterval;
}

@property <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property void *context;
@property(retain) CoreDAVItem *currentlyParsingItem;
@property(readonly) NSString *relativeURI;
@property(readonly) NSDictionary *responseHeaders;
@property <CoreDAVTaskManager> *taskManager;
@property id delegate;
@property NSInteger depth;
@property double timeoutInterval;

+ (NSUInteger)uniqueQueryID;

- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (id)_createBodyData;
- (void)_failImmediately;
- (void)_handleBadPasswordResponse;
- (BOOL)_includeGeneralHeaders;
- (id)accountInfoProvider;
- (id)additionalHeaderValues;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void*)context;
- (id)currentlyParsingItem;
- (void)dealloc;
- (id)delegate;
- (NSInteger)depth;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithRelativeURI:(id)arg1;
- (void)loadRequest:(id)arg1;
- (NSInteger)numDownloadedElements;
- (void)performCoreDAVTask;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (id)relativeURI;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (void)reset;
- (id)responseHeaders;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setCurrentlyParsingItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepth:(NSInteger)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)startModal;
- (id)taskManager;
- (void)tearDownResources;
- (double)timeoutInterval;
- (id)url;
- (BOOL)validate:(id*)arg1;

@end
