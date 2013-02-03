/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3AggregateQuery : ML3Query {
    Class _aggregateEntityClass;
    NSString *_foreignPersistentIDProperty;
}

@property(readonly) NSString *foreignPersistentIDProperty;
@property(readonly) Class aggregateEntityClass;

- (Class)aggregateEntityClass;
- (void)dealloc;
- (BOOL)distinctPersistentIDProperty;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (id)foreignPersistentIDProperty;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;
- (id)persistentIDProperty;
- (id)queryForUnitEntitiesAtIndex:(NSUInteger)arg1 directCollectionQuery:(id)arg2 ordered:(BOOL)arg3 usingSections:(BOOL)arg4;
- (id)queryForUnitEntitiesAtIndex:(NSUInteger)arg1 usingSections:(BOOL)arg2;
- (id)representativeUnitEntityAtIndex:(NSUInteger)arg1;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;

@end
