/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSData;

@interface FTProfileValidateEmailMessage : FTProfileMessage {
    NSString *_email;
    NSNumber *_onlyCheck;
    NSData *_pushToken;
}

@property(copy) NSString *emailAddress;
@property(copy) NSNumber *onlyCheck;
@property(copy) NSData *pushToken;

- (id)bagKey;
- (void)dealloc;
- (id)emailAddress;
- (id)messageBody;
- (id)onlyCheck;
- (id)pushToken;
- (id)requiredKeys;
- (void)setEmailAddress:(id)arg1;
- (void)setOnlyCheck:(id)arg1;
- (void)setPushToken:(id)arg1;

@end
