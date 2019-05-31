/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerResetTracklistCommand.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand> {

	BOOL _supportsSetQueueCommand;
	NSArray* _devices;
	NSDictionary* _supportedSpecializedQueues;
	NSSet* _supportedQueueTypes;
	NSSet* _supportedCustomDataQueueIdentifiers;

}

@property (nonatomic,copy) NSArray * devices;                                          //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSDictionary * supportedSpecializedQueues;                //@synthesize supportedSpecializedQueues=_supportedSpecializedQueues - In the implementation block
@property (assign,nonatomic) BOOL supportsSetQueueCommand;                             //@synthesize supportsSetQueueCommand=_supportsSetQueueCommand - In the implementation block
@property (nonatomic,retain) NSSet * supportedQueueTypes;                              //@synthesize supportedQueueTypes=_supportedQueueTypes - In the implementation block
@property (nonatomic,retain) NSSet * supportedCustomDataQueueIdentifiers;              //@synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * specializedIntents; 
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2 ;
-(void)setSupportsSetQueueCommand:(BOOL)arg1 ;
-(void)setSupportedSpecializedQueues:(NSDictionary *)arg1 ;
-(void)setSupportedQueueTypes:(NSSet *)arg1 ;
-(void)setSupportedCustomDataQueueIdentifiers:(NSSet *)arg1 ;
-(NSSet *)supportedQueueTypes;
-(BOOL)supportsSetQueueCommand;
-(NSSet *)supportedCustomDataQueueIdentifiers;
-(id)replaceWithPlaybackIntent:(id)arg1 ;
-(NSArray *)specializedIntents;
-(NSDictionary *)supportedSpecializedQueues;
-(id)clear;
@end

