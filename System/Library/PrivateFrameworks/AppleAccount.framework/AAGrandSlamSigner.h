/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, ACAccount, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	NSString* _appTokenID;
	BOOL _useAltDSID;
	NSString* _headerFieldKey;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL useAltDSID;                              //@synthesize useAltDSID=_useAltDSID - In the implementation block
@property (nonatomic,retain) NSString * headerFieldKey;                    //@synthesize headerFieldKey=_headerFieldKey - In the implementation block
-(void)setHeaderFieldKey:(NSString *)arg1 ;
-(BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(void)setUseAltDSID:(BOOL)arg1 ;
-(BOOL)signURLRequest:(id)arg1 ;
-(BOOL)useAltDSID;
-(NSString *)headerFieldKey;
-(id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3 ;
-(ACAccount *)grandSlamAccount;
-(ACAccountStore *)accountStore;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
@end

