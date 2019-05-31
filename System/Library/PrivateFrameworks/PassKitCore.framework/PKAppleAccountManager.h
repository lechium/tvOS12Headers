/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) PKAppleAccountInformation * appleAccountInformation; 
+(id)sharedInstance;
-(PKAppleAccountInformation *)appleAccountInformation;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_aidaAccount;
-(id)_primaryAppleAccount;
-(id)_accountStore;
@end

