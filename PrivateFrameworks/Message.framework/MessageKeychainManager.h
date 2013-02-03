/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MessageKeychainManager : NSObject {
}

+ (id)_passwordForGenericAccount:(id)arg1 service:(id)arg2 error:(id*)arg3;
+ (id)_passwordForHost:(id)arg1 username:(id)arg2 port:(NSInteger)arg3 keychainProtocol:(struct __CFString { }*)arg4;
+ (void)initialize;
+ (id)passwordForHost:(id)arg1 username:(id)arg2 port:(NSInteger)arg3 keychainProtocol:(void*)arg4;
+ (id)passwordForServiceName:(id)arg1 accountName:(id)arg2 error:(id*)arg3;
+ (id)passwordForServiceName:(id)arg1 accountName:(id)arg2;
+ (void)removePasswordForHost:(id)arg1 username:(id)arg2 port:(NSInteger)arg3 keychainProtocol:(void*)arg4;
+ (void)removePasswordForServiceName:(id)arg1 accountName:(id)arg2;
+ (void)setPassword:(id)arg1 forHost:(id)arg2 username:(id)arg3 port:(NSInteger)arg4 keychainProtocol:(void*)arg5 keychainAccessibility:(void*)arg6;
+ (void)setPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 keychainAccessibility:(void*)arg4;

@end
