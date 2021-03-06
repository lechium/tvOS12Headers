/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioPlaybackHistoryItem, NSString, NSArray, NSDictionary;

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	ICRadioPlaybackHistoryItem* _currentTrack;
	long long _numberOfSkips;
	NSString* _stationIdentifier;
	NSArray* _tracks;

}

@property (nonatomic,copy,readonly) NSString * stationIdentifier;                           //@synthesize stationIdentifier=_stationIdentifier - In the implementation block
@property (nonatomic,readonly) long long numberOfSkips;                                     //@synthesize numberOfSkips=_numberOfSkips - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) ICRadioPlaybackHistoryItem * currentTrack;              //@synthesize currentTrack=_currentTrack - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)propertyListRepresentation;
-(NSArray *)tracks;
-(NSString *)stationIdentifier;
-(ICRadioPlaybackHistoryItem *)currentTrack;
-(long long)numberOfSkips;
-(id)initWithStationIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

