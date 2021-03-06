/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject {

	NSMutableDictionary* _stickerPackGUIDToPackMap;

}

@property (retain) NSMutableDictionary * stickerPackGUIDToPackMap;              //@synthesize stickerPackGUIDToPackMap=_stickerPackGUIDToPackMap - In the implementation block
+(id)sharedInstance;
-(id)_cachedPathForStickerWithProperties:(id)arg1 ;
-(BOOL)_isRecipeBasedSticker:(id)arg1 ;
-(void)retrieveStickerWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)stickerPackGUIDToPackMap;
-(void)setStickerPackGUIDToPackMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

