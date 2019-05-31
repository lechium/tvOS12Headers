/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {

	NSDictionary* _loginParameters;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;
@end

