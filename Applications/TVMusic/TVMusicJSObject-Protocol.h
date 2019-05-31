//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSArray, NSDictionary, NSString;

@protocol TVMusicJSObject <JSExport>
@property(readonly) _Bool isMusicLibraryInitialized;
@property(readonly) unsigned long long musicAppAPIVersion;
- (void)getBookmarkDataForItems:(NSArray *)arg1:(JSValue *)arg2;
- (void)presentContextMenuForItemWithOptions:(NSDictionary *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)presentContextMenuForItem:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)presentDetailView:(NSString *)arg1:(NSString *)arg2:(JSValue *)arg3;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)getCurrentIsPlayingState:(JSValue *)arg1;
- (void)getNowPlayingInfoWithOptions:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getNowPlayingInfo:(JSValue *)arg1;
- (void)findItemInLibraryByCloudID:(NSString *)arg1:(NSString *)arg2:(NSDictionary *)arg3:(JSValue *)arg4;
- (void)querySongsForAlbumWithPersistentID:(NSString *)arg1:(NSDictionary *)arg2:(struct _NSRange)arg3:(JSValue *)arg4;
- (void)queryRecentlyAdded:(NSDictionary *)arg1:(struct _NSRange)arg2:(JSValue *)arg3;
- (_Bool)isStoreItemInLibrary:(NSDictionary *)arg1;
- (void)queryMediaLibraryWithStoreID:(NSString *)arg1:(NSString *)arg2:(NSDictionary *)arg3:(JSValue *)arg4;
- (void)queryMusicLibraryForSongsWithAdamIDs:(NSArray *)arg1:(JSValue *)arg2;
- (void)queryMediaLibrary:(NSArray *)arg1:(long long)arg2:(JSValue *)arg3:(NSDictionary *)arg4:(JSValue *)arg5;
- (void)removeItemFromMediaLibraryWithPersistentID:(NSString *)arg1:(NSString *)arg2:(JSValue *)arg3;
- (void)removeItemsFromMusicLibraryWithSagaIDs:(NSArray *)arg1:(JSValue *)arg2;
- (void)removePlaylistFromMusicLibraryWithGlobalID:(NSString *)arg1:(JSValue *)arg2;
- (void)addPlaylistToMusicLibraryWithGlobalID:(NSString *)arg1:(JSValue *)arg2;
- (void)addToMusicLibraryWithAdamID:(NSString *)arg1:(JSValue *)arg2;
- (void)queryMusicLibraryForPlaylistWithCloudGlobalID:(NSString *)arg1:(JSValue *)arg2;
- (void)getRecentRadioStations:(JSValue *)arg1;
- (void)playRadioStation:(NSDictionary *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)playItems:(NSArray *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
@end
