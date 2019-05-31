/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {

	NSMutableArray* _credentials;
	unsigned long long _currentIndex;

}
-(void)setCredentialsToProvision:(id)arg1 ;
-(void)removeCredential:(id)arg1 ;
-(id)nextCredentialToProvision;
-(void)setCurrentCredential:(id)arg1 ;
-(unsigned long long)remaining;
-(id)init;
-(unsigned long long)count;
@end
