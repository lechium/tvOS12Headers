/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSAccountMetadata, VSAccount, VSOptional;

@interface VSIdentityProviderResponse : NSObject {

	BOOL _didCreateAccount;
	VSAccountMetadata* _accountMetadata;
	VSAccount* _account;
	VSOptional* _logoLoadOperation;

}

@property (nonatomic,copy) VSAccountMetadata * accountMetadata;              //@synthesize accountMetadata=_accountMetadata - In the implementation block
@property (nonatomic,retain) VSAccount * account;                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL didCreateAccount;                          //@synthesize didCreateAccount=_didCreateAccount - In the implementation block
@property (nonatomic,retain) VSOptional * logoLoadOperation;                 //@synthesize logoLoadOperation=_logoLoadOperation - In the implementation block
-(VSAccount *)account;
-(void)setAccount:(VSAccount *)arg1 ;
-(void)setLogoLoadOperation:(VSOptional *)arg1 ;
-(VSOptional *)logoLoadOperation;
-(VSAccountMetadata *)accountMetadata;
-(BOOL)didCreateAccount;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
-(void)setDidCreateAccount:(BOOL)arg1 ;
-(id)init;
-(id)description;
@end

