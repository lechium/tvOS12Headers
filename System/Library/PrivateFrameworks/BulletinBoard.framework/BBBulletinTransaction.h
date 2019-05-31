/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BBBulletinTransaction : NSObject {

	NSString* _bulletinID;
	unsigned long long _transactionID;

}

@property (nonatomic,copy,readonly) NSString * bulletinID;                    //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
+(id)transactionWithBulletinID:(id)arg1 ;
-(NSString *)bulletinID;
-(unsigned long long)incrementTransactionID;
-(id)initWithBulletinID:(id)arg1 ;
-(unsigned long long)transactionID;
-(id)description;
@end
