/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MPCModelRadioPlaybackQueueSection.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, MPPropertySet, ICMutableRadioPlaybackHistory, MPCPlaybackRequestEnvironment, MPSectionedCollection, NSString;

@interface _MPCModelRadioPlaybackQueueStationTracksSection : NSObject <_MPCModelRadioPlaybackQueueSection> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _activeModelGenericAVItems;
	BOOL _isSiriInitiated;
	MPPropertySet* _itemProperties;
	ICMutableRadioPlaybackHistory* _playbackHistory;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPSectionedCollection* _trackModels;
	MPSectionedCollection* _tracks;

}

@property (nonatomic,readonly) ICMutableRadioPlaybackHistory * playbackHistory; 
@property (nonatomic,copy,readonly) MPSectionedCollection * trackModels;                     //@synthesize trackModels=_trackModels - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * tracks;                          //@synthesize tracks=_tracks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long numberOfItems; 
-(MPSectionedCollection *)tracks;
-(id)initWithPlaybackContext:(id)arg1 ;
-(id)AVItemAtIndex:(long long)arg1 ;
-(id)AVItemQueueIdentifierAtIndex:(long long)arg1 ;
-(BOOL)isExplicitItemAtIndex:(long long)arg1 ;
-(id)trackForItemAtIndex:(long long)arg1 ;
-(ICMutableRadioPlaybackHistory *)playbackHistory;
-(long long)removeExplicitItems;
-(MPSectionedCollection *)trackModels;
-(void)updateWithPersonalizedResponse:(id)arg1 ;
-(long long)numberOfItems;
@end

