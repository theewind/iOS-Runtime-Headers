/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSURL, ADAdResponse, <ADBannerViewURLActionHandlerDelegate>;

@interface ADBannerViewURLActionHandler : NSObject {
    ADAdResponse *_adResponse;
    <ADBannerViewURLActionHandlerDelegate> *_delegate;
    NSURL *_url;
}

@property(retain) ADAdResponse *adResponse;
@property <ADBannerViewURLActionHandlerDelegate> *delegate;
@property(retain) NSURL *url;

+ (id)bannerViewURLActionHandlerWithURL:(id)arg1 response:(id)arg2 delegate:(id)arg3;

- (id)adResponse;
- (void)dealloc;
- (id)delegate;
- (void)handle;
- (void)setAdResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
