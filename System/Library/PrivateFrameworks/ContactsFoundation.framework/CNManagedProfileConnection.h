/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNManagedProfileConnection.h>

@protocol CNManagedProfileConnection <NSObject>
@required
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;
-(BOOL)isOpenInRestrictionInEffect;

@end


@class MCProfileConnection, NSString;

@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection> {

	MCProfileConnection* _profileConnection;

}

@property (nonatomic,retain) MCProfileConnection * profileConnection;              //@synthesize profileConnection=_profileConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2 ;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2 ;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3 ;
-(id)initWithProfileConnection:(id)arg1 ;
-(MCProfileConnection *)profileConnection;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(id)init;
-(BOOL)isOpenInRestrictionInEffect;
@end

