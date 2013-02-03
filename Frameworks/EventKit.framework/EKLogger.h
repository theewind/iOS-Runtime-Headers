/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSFileHandle;

@interface EKLogger : NSObject {
    struct dispatch_source_s { } *_fdWatcher;
    BOOL _haveCheckedLogLevel;
    BOOL _haveCheckedOutputLevel;
    NSDate *_lastStatDate;
    NSString *_logDefaultName;
    NSFileHandle *_logFH;
    NSInteger _logLevel;
    NSString *_logName;
    NSString *_logPath;
    struct dispatch_queue_s { } *_logQueue;
    NSString *_logRollFormat;
    NSInteger _maxLogFiles;
    NSString *_outputDefaultName;
    NSInteger _outputLevel;
    NSString *_prefix;
}

@property(retain) NSFileHandle *fh;
@property(retain) NSDate *lastStatDate;
@property NSInteger logLevel;
@property NSInteger maxLogFiles;
@property NSInteger outputLevel;

- (void)_closeLogFile;
- (id)_logFilePathWithNumber:(NSInteger)arg1;
- (void)_openLogFile;
- (void)_rollLogs;
- (void)_statFileIfNecessaryForRollingCheck;
- (void)dealloc;
- (id)fh;
- (id)initWithPrefix:(id)arg1 logPath:(id)arg2 logName:(id)arg3;
- (id)lastStatDate;
- (NSInteger)logLevel;
- (void)logWithFileName:(const char *)arg1 functionName:(const char *)arg2 lineNumber:(NSInteger)arg3 level:(NSInteger)arg4 format:(id)arg5 arguments:(void*)arg6;
- (NSInteger)maxLogFiles;
- (NSInteger)outputLevel;
- (void)setFh:(id)arg1;
- (void)setLastStatDate:(id)arg1;
- (void)setLogLevel:(NSInteger)arg1;
- (void)setMaxLogFiles:(NSInteger)arg1;
- (void)setOutputLevel:(NSInteger)arg1;

@end
