/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputConfigurationState, AVWeakReference;

@interface AVAssetWriterInputHelper : NSObject {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property(readonly) AVAssetWriterInputConfigurationState *configurationState;
@property(readonly) NSString *mediaType;
@property(copy) NSArray *metadata;
@property(readonly) AVOutputSettings *outputSettings;
@property(readonly) __CVPixelBufferPool *pixelBufferPool;
@property(copy) NSDictionary *sourcePixelBufferAttributes;
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;
@property BOOL expectsMediaDataInRealTime;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(readonly) NSInteger status;
@property CGAffineTransform transform;

- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)configurationState;
- (BOOL)expectsMediaDataInRealTime;
- (id)initWithConfigurationState:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)markAsFinished;
- (id)mediaType;
- (id)metadata;
- (id)outputSettings;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (NSInteger)status;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (void)transitionToTerminalStatus:(NSInteger)arg1;
- (id)weakReferenceToAssetWriterInput;

@end
