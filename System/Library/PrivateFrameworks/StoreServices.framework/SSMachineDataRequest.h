/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	NSData* _actionData;
	NSString* _actionName;
	BOOL _allowsBootstrapCellularData;
	long long _protocolVersion;
	NSString* _userAgent;
	BOOL _waitsForPurchaseOperations;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSData * actionData; 
@property (copy) NSString * actionName; 
@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) long long protocolVersion; 
@property (copy) NSString * userAgent; 
@property (assign) BOOL waitsForPurchaseOperations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(id)initWithURLResponse:(id)arg1 ;
-(NSString *)actionName;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(void)startWithDetailedCompletionBlock:(/*^block*/id)arg1 ;
-(void)setWaitsForPurchaseOperations:(BOOL)arg1 ;
-(BOOL)waitsForPurchaseOperations;
-(NSData *)actionData;
-(void)setActionData:(NSData *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setActionName:(NSString *)arg1 ;
@end

