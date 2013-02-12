/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSAuthorizationRequestDelegate>, NSNumber;

@interface SSAuthorizationRequest : SSRequest <SSCoding> {
    NSNumber *_accountIdentifier;
    id _token;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) id authorizationToken;
@property <SSAuthorizationRequestDelegate> * delegate;

- (id)accountIdentifier;
- (id)authorizationToken;
- (id)copyPropertyListEncoding;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end