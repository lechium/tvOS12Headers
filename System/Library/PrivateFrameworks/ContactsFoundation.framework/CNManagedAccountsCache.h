/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject {

	CNCache* _accountsCache;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) CNCache * accountsCache;                    //@synthesize accountsCache=_accountsCache - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(id)sharedCache;
-(id)accountsForIdentifiers:(id)arg1 ;
-(void)setAccountsCache:(CNCache *)arg1 ;
-(CNCache *)accountsCache;
-(ACAccountStore *)accountStore;
-(id)accountForIdentifier:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)init;
-(void)clearCache;
@end

