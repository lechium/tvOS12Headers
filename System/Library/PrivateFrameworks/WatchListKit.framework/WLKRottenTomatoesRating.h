/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject {

	unsigned long long _freshness;
	NSNumber* _freshnessPercentage;

}

@property (nonatomic,readonly) unsigned long long freshness;                     //@synthesize freshness=_freshness - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * freshnessPercentage;              //@synthesize freshnessPercentage=_freshnessPercentage - In the implementation block
+(unsigned long long)freshnessForString:(id)arg1 ;
-(id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2 ;
-(NSNumber *)freshnessPercentage;
-(unsigned long long)freshness;
-(id)init;
@end
