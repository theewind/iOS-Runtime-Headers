/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSString;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet *_addressBookHomes;
    NSString *_directoryGatewayPath;
}

@property(readonly) NSSet *addressBookHomes;
@property(readonly) NSString *directoryGatewayPath;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (id)addressBookHomes;
- (void)dealloc;
- (id)description;
- (id)directoryGatewayPath;

@end
