/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDAccount.h>

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount {

	IDSAccount* _idsAccount;

}

@property (nonatomic,retain,readonly) IDSAccount * idsAccount;              //@synthesize idsAccount=_idsAccount - In the implementation block
-(void)writeAccountDefaults:(id)arg1 ;
-(id)accountDefaults;
-(BOOL)canMakeDowngradeRoutingChecks;
-(IDSAccount *)idsAccount;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4 ;
-(void)dealloc;
-(id)description;
@end

