/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture {

	NSMapTable* _invalidationBlocks;
	BOOL _invalid;

}

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
-(id)onInvalid:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onInvalid:(/*^block*/id)arg1 ;
-(BOOL)isInvalid;
-(void)invalidate;
@end

