/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

@interface CKDMescalCertURLRequest : CKDURLRequest {

	NSData* _mescalCert;

}

@property (nonatomic,retain) NSData * mescalCert;              //@synthesize mescalCert=_mescalCert - In the implementation block
-(long long)serverType;
-(id)requestOptions;
-(id)httpMethod;
-(NSData *)mescalCert;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresSignature;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(void)requestDidParse509CertObject:(id)arg1 ;
-(long long)partitionType;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(void)setMescalCert:(NSData *)arg1 ;
-(id)url;
@end

