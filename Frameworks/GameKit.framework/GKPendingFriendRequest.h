/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKPendingFriendRequest : NSObject {
    NSUInteger _friendRequestCount;
    NSString *_handle;
    NSString *_message;
    NSString *_originator;
    NSString *_originatorEmail;
    NSString *_recipient;
    NSInteger _recipientKind;
    NSString *_requestID;
    BOOL _shouldBadge;
}

@property(retain) NSString *handle;
@property(retain) NSString *message;
@property(retain) NSString *originator;
@property(retain) NSString *originatorEmail;
@property(retain) NSString *recipient;
@property(retain) NSString *requestID;
@property NSUInteger friendRequestCount;
@property NSInteger recipientKind;
@property BOOL shouldBadge;

+ (id)pushDictionaryForQuery:(id)arg1;

- (void)dealloc;
- (NSUInteger)friendRequestCount;
- (id)handle;
- (id)initWithPushDictionary:(id)arg1;
- (id)initWithURLQuery:(id)arg1;
- (id)message;
- (id)originator;
- (id)originatorEmail;
- (id)recipient;
- (NSInteger)recipientKind;
- (id)requestID;
- (void)setFriendRequestCount:(NSUInteger)arg1;
- (void)setHandle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setOriginatorEmail:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRecipientKind:(NSInteger)arg1;
- (void)setRequestID:(id)arg1;
- (void)setShouldBadge:(BOOL)arg1;
- (BOOL)shouldBadge;

@end
