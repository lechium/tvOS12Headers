/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKStorePlaybackProgressDelegate.h>

@class TVCKBookmarkService, TVCKStoreFavoritesController, NSString;

@interface TVCKStorePlaybackProgressFactory : NSObject <TVCKStorePlaybackProgressDelegate> {

	BOOL _needsUpdate;
	TVCKBookmarkService* _bookmarkService;
	TVCKStoreFavoritesController* _favoritesController;
	id _bookmarkServiceUpdatedObserver;
	id _bookmarkPendingUpdateObserver;

}

@property (assign,nonatomic) BOOL needsUpdate;                                                //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) TVCKStoreFavoritesController * favoritesController;              //@synthesize favoritesController=_favoritesController - In the implementation block
@property (assign,nonatomic,__weak) id bookmarkServiceUpdatedObserver;                        //@synthesize bookmarkServiceUpdatedObserver=_bookmarkServiceUpdatedObserver - In the implementation block
@property (assign,nonatomic,__weak) id bookmarkPendingUpdateObserver;                         //@synthesize bookmarkPendingUpdateObserver=_bookmarkPendingUpdateObserver - In the implementation block
@property (nonatomic,readonly) TVCKBookmarkService * bookmarkService;                         //@synthesize bookmarkService=_bookmarkService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setNeedsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)storePlaybackProgressDidChange:(id)arg1 ;
-(id)initWithBookmarkService:(id)arg1 ;
-(void)determineProgressForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(TVCKStoreFavoritesController *)favoritesController;
-(void)_favoritesDidChange:(id)arg1 ;
-(void)setFavoritesController:(TVCKStoreFavoritesController *)arg1 ;
-(void)determineProgressForAdamIDs:(id)arg1 assumePurchased:(BOOL)arg2 respectBookmarkPlayCount:(BOOL)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)markItemsAsWatched:(id)arg1 ;
-(void)markItemsAsUnwatched:(id)arg1 ;
-(void)_updateBookmarks;
-(BOOL)_isSynchronizingBookmarks;
-(TVCKBookmarkService *)bookmarkService;
-(void)_lookupMetadataForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_markBookmarkKeys:(id)arg1 asWatched:(BOOL)arg2 ;
-(void)_willStartBookmarkSynchronization;
-(void)_obtainLookupItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_didEndBookmarkSynchronization;
-(void)_markProgressObjects:(id)arg1 asWatched:(BOOL)arg2 ;
-(id)bookmarkServiceUpdatedObserver;
-(void)setBookmarkServiceUpdatedObserver:(id)arg1 ;
-(id)bookmarkPendingUpdateObserver;
-(void)setBookmarkPendingUpdateObserver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_update;
-(BOOL)needsUpdate;
@end

