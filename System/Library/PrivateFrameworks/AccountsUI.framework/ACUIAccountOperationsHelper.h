/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ACUIAccountOperationsDelegate;
@class ACAccountStore, NSObject;

@interface ACUIAccountOperationsHelper : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _accountOperationsQueue;
	BOOL _isRemovingAccount;
	BOOL _isSavingAccount;
	id<ACUIAccountOperationsDelegate> _delegate;

}

@property (assign) BOOL isSavingAccount;                                                     //@synthesize isSavingAccount=_isSavingAccount - In the implementation block
@property (assign) BOOL isRemovingAccount;                                                   //@synthesize isRemovingAccount=_isRemovingAccount - In the implementation block
@property (assign,nonatomic,__weak) id<ACUIAccountOperationsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsSavingAccount:(BOOL)arg1 ;
-(id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id*)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(BOOL)arg3 ;
-(void)setIsRemovingAccount:(BOOL)arg1 ;
-(void)saveAccount:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 ;
-(BOOL)isRemovingAccount;
-(BOOL)isSavingAccount;
-(id)initWithAccountStore:(id)arg1 ;
-(void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2 ;
-(void)removeAccount:(id)arg1 ;
-(void)setDelegate:(id<ACUIAccountOperationsDelegate>)arg1 ;
-(id<ACUIAccountOperationsDelegate>)delegate;
@end
