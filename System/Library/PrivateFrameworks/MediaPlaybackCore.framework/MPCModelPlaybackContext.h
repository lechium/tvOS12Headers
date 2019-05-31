/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MPCPlaybackRequestEnvironment, MPModelRequest, MPIdentifierSet, NSDictionary;

@interface MPCModelPlaybackContext : MPPlaybackContext {

	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;
	NSDictionary* _startTimeModifications;
	NSDictionary* _endTimeModifications;
	NSDictionary* _assetStoreFronts;

}

@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy) MPModelRequest * request;                                                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;                                  //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * startTimeModifications;                                   //@synthesize startTimeModifications=_startTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * endTimeModifications;                                     //@synthesize endTimeModifications=_endTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * assetStoreFronts;                                         //@synthesize assetStoreFronts=_assetStoreFronts - In the implementation block
+(Class)queueFeederClass;
+(id)requiredPropertiesForStaticMediaClips;
+(id)defaultRequestEnvironment;
+(BOOL)supportsSecureCoding;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(id)descriptionComponents;
-(NSDictionary *)startTimeModifications;
-(void)setStartTimeModifications:(NSDictionary *)arg1 ;
-(NSDictionary *)endTimeModifications;
-(void)setEndTimeModifications:(NSDictionary *)arg1 ;
-(NSDictionary *)assetStoreFronts;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(MPIdentifierSet *)startItemIdentifiers;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPModelRequest *)request;
@end

