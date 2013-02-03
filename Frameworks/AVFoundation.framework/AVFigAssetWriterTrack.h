/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType, NSString, AVWeakReference;

@interface AVFigAssetWriterTrack : NSObject {
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    BOOL _aboveHighWaterLevel;
    struct dispatch_queue_s { } *_aboveHighWaterLevelQueue;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    AVMediaFileType *_mediaFileType;
    NSString *_mediaType;
    } _sampleBufferCoalescingInterval;
    NSInteger _trackID;
    AVWeakReference *_weakReference;
}

@property(readonly) OpaqueFigAssetWriter *figAssetWriter;
@property(readonly) AVMediaFileType *mediaFileType;
@property(readonly) NSString *mediaType;
@property(readonly) __CVPixelBufferPool *pixelBufferPool;
@property(getter=isAboveHighWaterLevel,readonly) BOOL aboveHighWaterLevel;
@property ? sampleBufferCoalescingInterval;
@property(readonly) NSInteger trackID;

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 outputSettings:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6;

- (NSInteger)_attachToFigAssetWriterUsingOutputSettings:(id)arg1 sourcePixelBufferAttributes:(id)arg2 error:(id*)arg3;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(NSInteger)arg1;
- (void)_refreshAboveHighWaterLevel;
- (BOOL)addPixelBuffer:(struct __CVBuffer { }*)arg1 atPresentationTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2 error:(id*)arg3;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (struct OpaqueFigAssetWriter { }*)figAssetWriter;
- (void)finalize;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 outputSettings:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6;
- (BOOL)isAboveHighWaterLevel;
- (BOOL)markEndOfDataReturningError:(id*)arg1;
- (id)mediaFileType;
- (id)mediaType;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)release;
- (id)retain;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })sampleBufferCoalescingInterval;
- (void)setFigMetadata:(id)arg1;
- (void)setFigTrackMatrix:(id)arg1;
- (void)setSampleBufferCoalescingInterval:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (NSInteger)trackID;

@end
