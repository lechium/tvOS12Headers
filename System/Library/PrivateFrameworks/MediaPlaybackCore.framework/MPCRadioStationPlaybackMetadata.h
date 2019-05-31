/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RadioArtworkCollection, NSString, NSURL, NSDictionary;

@interface MPCRadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	RadioArtworkCollection* _artworkCollection;
	BOOL _hasSetArtworkCollection;
	BOOL _hasSetStationHash;
	BOOL _hasSetStationID;
	BOOL _hasSetStationName;
	BOOL _hasSetStationStringID;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;
	NSURL* _stationURL;

}

@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary; 
@property (nonatomic,copy,readonly) NSString * stationName;                             //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationHash;                             //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                                     //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationStringID;                         //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * stationURL;                                 //@synthesize stationURL=_stationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)stationID;
-(NSString *)stationHash;
-(NSString *)stationName;
-(NSString *)stationStringID;
-(NSURL *)stationURL;
-(id)initWithStationStringID:(id)arg1 ;
-(NSDictionary *)stationDictionary;
-(BOOL)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1 ;
-(RadioArtworkCollection *)artworkCollection;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
@end

