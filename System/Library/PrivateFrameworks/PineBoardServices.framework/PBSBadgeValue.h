/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PBSBadgeValue : NSObject {

	NSString* _badgeString;
	NSNumber* _badgeNumber;

}

@property (nonatomic,copy,readonly) NSString * badgeString;              //@synthesize badgeString=_badgeString - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * badgeNumber;              //@synthesize badgeNumber=_badgeNumber - In the implementation block
+(id)badgeValueWithValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(NSNumber *)badgeNumber;
-(NSString *)badgeString;
@end

