/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MPCModelRadioPlaybackQueueSection.h>

@class NSString, MPQueueFeeder;

@interface _MPCModelRadioPlaybackQueueExternalFeederSection : NSObject <_MPCModelRadioPlaybackQueueSection> {

	NSString* _itemID;
	MPQueueFeeder* _queueFeeder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long numberOfItems; 
+(id)sectionWithItemWithItemID:(id)arg1 inFeeder:(id)arg2 ;
-(id)AVItemAtIndex:(long long)arg1 ;
-(id)AVItemQueueIdentifierAtIndex:(long long)arg1 ;
-(BOOL)isExplicitItemAtIndex:(long long)arg1 ;
-(id)trackForItemAtIndex:(long long)arg1 ;
-(long long)removeExplicitItems;
-(long long)numberOfItems;
@end

