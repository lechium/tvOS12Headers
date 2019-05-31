/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSAccountController, NSSet;

@interface IDSAccountController : NSObject {

	_IDSAccountController* _internal;

}

@property (nonatomic,readonly) NSSet * accounts; 
-(id)_internal;
-(id)_initWithService:(id)arg1 onIDSQueue:(BOOL)arg2 ;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enableAccount:(id)arg1 ;
-(void)_disableAccount:(id)arg1 ;
-(id)_initWithService:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)enableAccount:(id)arg1 ;
-(id)enabledAccounts;
-(void)_removeAccount:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSSet *)accounts;
-(void)removeAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)dealloc;
-(id)serviceName;
@end

