/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount;

@interface ACDAccountChange : NSObject {

	int _changeType;
	ACAccount* _account;
	ACAccount* _oldAccount;

}

@property (assign,nonatomic) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccount * oldAccount;              //@synthesize oldAccount=_oldAccount - In the implementation block
+(id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)setOldAccount:(ACAccount *)arg1 ;
-(id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(int)changeType;
-(void)setChangeType:(int)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)oldAccount;
@end

