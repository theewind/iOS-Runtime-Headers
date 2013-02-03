/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSDictionary;

@interface FTProfileProvisionMessage : FTProfileMessage {
    NSString *_deviceID;
    NSArray *_emailAddresses;
    NSData *_pushToken;
    NSDictionary *_responseAliasInfo;
    NSString *_responseSignature;
    NSString *_responseUserID;
}

@property(copy) NSString *deviceID;
@property(copy) NSArray *emailAddresses;
@property(copy) NSData *pushToken;
@property(copy) NSDictionary *responseAliasInfo;
@property(copy) NSString *responseSignature;
@property(copy) NSString *responseUserID;

- (id)bagKey;
- (void)dealloc;
- (id)deviceID;
- (id)emailAddresses;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)pushToken;
- (id)requiredKeys;
- (id)responseAliasInfo;
- (id)responseSignature;
- (id)responseUserID;
- (void)setDeviceID:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setResponseAliasInfo:(id)arg1;
- (void)setResponseSignature:(id)arg1;
- (void)setResponseUserID:(id)arg1;

@end
