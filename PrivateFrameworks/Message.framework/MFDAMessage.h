/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class Message, MailboxUid, DAMailMessage;

@interface MFDAMessage : MailMessage {
    DAMailMessage *_DAMailMessage;
    MailboxUid *_mailbox;
    Message *_rfc822CreatedMessage;
}

- (id)DAMailMessage;
- (void)dealloc;
- (id)headers;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)mailbox;
- (id)messageBody;
- (BOOL)messageData:(id*)arg1 messageSize:(NSUInteger*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (unsigned long long)messageFlags;
- (NSUInteger)messageSize;
- (id)remoteID;
- (id)remoteMailboxURL;

@end
