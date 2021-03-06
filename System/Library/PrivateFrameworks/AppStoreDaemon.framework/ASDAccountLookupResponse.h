/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSNumber, NSError;

@interface ASDAccountLookupResponse : ASDRequestResponse {

	BOOL _askToBuyEnabled;
	NSNumber* _accountID;

}

@property (copy) NSNumber * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (assign) BOOL askToBuyEnabled;              //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (copy) NSError * error; 
+(BOOL)supportsSecureCoding;
-(id)initWithAccountID:(id)arg1 ;
-(NSNumber *)accountID;
-(void)setAccountID:(NSNumber *)arg1 ;
-(BOOL)askToBuyEnabled;
-(void)setAskToBuyEnabled:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

