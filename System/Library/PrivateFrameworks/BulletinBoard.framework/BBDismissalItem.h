/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BBDismissalItem : NSObject {

	unsigned long long _feeds;
	NSDate* _expiration;

}

@property (nonatomic,readonly) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
-(id)initWithFeeds:(unsigned long long)arg1 ;
-(void)addFeeds:(unsigned long long)arg1 ;
-(unsigned long long)feeds;
-(NSDate *)expiration;
-(BOOL)hasExpired;
-(id)description;
@end

