/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSArray, NSDictionary;

@interface WLKPlayActivityDecorateOperation : WLKNetworkRequestOperation {

	NSArray* _playActivityIdentifiers;
	NSDictionary* _metadataByIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * playActivityIdentifiers;                //@synthesize playActivityIdentifiers=_playActivityIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadataByIdentifier;              //@synthesize metadataByIdentifier=_metadataByIdentifier - In the implementation block
+(id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)didFinish;
-(id)responseProcessor;
-(NSArray *)playActivityIdentifiers;
-(NSDictionary *)metadataByIdentifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

