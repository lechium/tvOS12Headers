/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface MPAVBatteryLevel : NSObject {

	NSNumber* _leftPercentage;
	NSNumber* _rightPercentage;
	NSNumber* _singlePercentage;
	NSNumber* _casePercentage;

}

@property (nonatomic,readonly) NSNumber * leftPercentage;                //@synthesize leftPercentage=_leftPercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * rightPercentage;               //@synthesize rightPercentage=_rightPercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * singlePercentage;              //@synthesize singlePercentage=_singlePercentage - In the implementation block
@property (nonatomic,readonly) NSNumber * casePercentage;                //@synthesize casePercentage=_casePercentage - In the implementation block
-(NSNumber *)leftPercentage;
-(NSNumber *)rightPercentage;
-(NSNumber *)singlePercentage;
-(NSNumber *)casePercentage;
-(id)initWithRouteDescription:(id)arg1 ;
-(id)initWithOutputDevice:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

