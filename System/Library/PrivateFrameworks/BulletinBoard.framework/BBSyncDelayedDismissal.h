/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject {

	BBBulletin* _bulletin;
	unsigned long long _feeds;

}

@property (nonatomic,retain) BBBulletin * bulletin;                 //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
-(unsigned long long)feeds;
-(void)setFeeds:(unsigned long long)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
@end

