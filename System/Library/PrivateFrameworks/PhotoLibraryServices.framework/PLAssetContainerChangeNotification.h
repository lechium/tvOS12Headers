/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	BOOL _titleDidChange;
	BOOL _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) id<PLAssetContainer> container; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,readonly) BOOL titleDidChange; 
@property (nonatomic,readonly) BOOL keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(void)_calculateDiffs;
-(id)assetContainer;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)hasDeletes;
-(id)_contentRelationshipName;
-(NSObject*<PLAlbumProtocol>)album;
-(void)dealloc;
-(id)userInfo;
-(id)name;
-(id)description;
-(id<PLAssetContainer>)container;
@end

