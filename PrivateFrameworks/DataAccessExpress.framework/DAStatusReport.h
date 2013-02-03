/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSNumber, NSString, NSDate;

@interface DAStatusReport : NSObject {
    NSString *_accountType;
    NSNumber *_averageHBI;
    NSDate *_creationDate;
    NSString *_displayName;
    NSNumber *_downloadedElements;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_falseMoreAvailableCount;
    NSInteger _numHBIDataPoints;
    NSString *_persistentUUID;
    NSNumber *_successfulRequests;
    NSNumber *_timeInNetworking;
    NSNumber *_timeSpan;
}

@property(retain) NSString *accountType;
@property(retain) NSNumber *averageHBI;
@property(retain) NSString *displayName;
@property(retain) NSNumber *downloadedElements;
@property(retain) NSNumber *failedNetworkRequests;
@property(retain) NSNumber *failedProtocolRequests;
@property(retain) NSNumber *falseMoreAvailableCount;
@property(retain) NSString *persistentUUID;
@property(retain) NSNumber *successfulRequests;
@property(retain) NSNumber *timeInNetworking;
@property(retain) NSNumber *timeSpan;

- (id)accountType;
- (id)averageHBI;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)downloadedElements;
- (id)failedNetworkRequests;
- (id)failedProtocolRequests;
- (id)falseMoreAvailableCount;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)mergeStatusReport:(id)arg1;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteFalseMoreAvailableResponse;
- (void)noteNewHBIDataPoint:(NSInteger)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(NSInteger)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (id)persistentUUID;
- (void)setAccountType:(id)arg1;
- (void)setAverageHBI:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDownloadedElements:(id)arg1;
- (void)setFailedNetworkRequests:(id)arg1;
- (void)setFailedProtocolRequests:(id)arg1;
- (void)setFalseMoreAvailableCount:(id)arg1;
- (void)setPersistentUUID:(id)arg1;
- (void)setSuccessfulRequests:(id)arg1;
- (void)setTimeInNetworking:(id)arg1;
- (void)setTimeSpan:(id)arg1;
- (id)successfulRequests;
- (id)timeInNetworking;
- (id)timeSpan;

@end
