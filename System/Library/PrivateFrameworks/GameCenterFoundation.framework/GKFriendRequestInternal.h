/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {

	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
+(BOOL)supportsSecureCoding;
-(int)defaultFamiliarity;
-(void)dealloc;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

