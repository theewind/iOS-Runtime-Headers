/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVWeakReference, AVPlayerItem, NSMutableSet, CALayer, NSMutableDictionary, AVPropertyStorage;

@interface AVPlayerInternal : NSObject {
    CALayer *caLayer;
    AVPlayerItem *currentItem;
    BOOL didSetInitialVideoCompositor;
    NSError *error;
    struct OpaqueFigPlayer { } *figPlayer;
    NSMutableSet *items;
    AVPlayerItem *lastItem;
    BOOL logPerformanceData;
    BOOL needsToCreateFigPlayer;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVPropertyStorage *propertyStorage;
    struct dispatch_queue_s { } *stateDispatchQueue;
    NSInteger status;
    AVWeakReference *weakReference;
}

@end
